//
//  Document.m
//  umscriptapp
//
//  Created by Andreas Fink on 18.05.14.
//  Copyright (c) 2014 SMSRelay AG. All rights reserved.
//


#import "Document.h"
#include <unistd.h>
#include <stdio.h>
#import "umscript/umscript.h"

#import "umscript/UMScriptDocument.h"

@implementation Document

- (id)init
{
    self = [super init];
    if (self) {
        // Add your subclass-specific initialization here.
    }
    return self;
}

- (NSString *)windowNibName
{
    // Override returning the nib file name of the document
    // If you need to use a subclass of NSWindowController or if your document supports multiple NSWindowControllers, you should remove this method and override -makeWindowControllers instead.
    return @"Document";
}

- (void)windowControllerDidLoadNib:(NSWindowController *)aController
{
    [super windowControllerDidLoadNib:aController];
    // Add any code here that needs to be executed once the windowController has loaded the document's window.
}

+ (BOOL)autosavesInPlace
{
    return YES;
}

- (NSData *)dataOfType:(NSString *)typeName error:(NSError **)outError
{
    // Insert code here to write your document to data of the specified type. If outError != NULL, ensure that you create and set an appropriate error when returning nil.
    // You can also choose to override -fileWrapperOfType:error:, -writeToURL:ofType:error:, or -writeToURL:ofType:forSaveOperation:originalContentsURL:error: instead.
    NSException *exception = [NSException exceptionWithName:@"UnimplementedMethod" reason:[NSString stringWithFormat:@"%@ is unimplemented", NSStringFromSelector(_cmd)] userInfo:nil];
    @throw exception;
    return nil;
}

- (BOOL)readFromData:(NSData *)data ofType:(NSString *)typeName error:(NSError **)outError
{
    // Insert code here to read your document from the given data of the specified type. If outError != NULL, ensure that you create and set an appropriate error when returning NO.
    // You can also choose to override -readFromFileWrapper:ofType:error: or -readFromURL:ofType:error: instead.
    // If you override either of these, you should also override -isEntireFileLoaded to return NO if the contents are lazily loaded.
    NSException *exception = [NSException exceptionWithName:@"UnimplementedMethod" reason:[NSString stringWithFormat:@"%@ is unimplemented", NSStringFromSelector(_cmd)] userInfo:nil];
    @throw exception;
    return YES;
}

- (IBAction)runButtonPressed:(id)sender
{
    if(theScript == NULL)
    {
        theScript = [[UMScriptDocument alloc]init];
    }
    theScript.sourceCode = inputField.stringValue;
    UMEnvironment *env = [[UMEnvironment alloc]init];
    
    
    [env setVariable:[UMDiscreteValue discreteString:@"A"] forKey:@"$a"];
    [env setVariable:[UMDiscreteValue discreteString:@"B"] forKey:@"$b"];
    [env setVariable:[UMDiscreteValue discreteString:@"C"] forKey:@"$c"];
    [env setVariable:[UMDiscreteValue discreteInt:123] forKey:@"$myint"];
    [env setVariable:[UMDiscreteValue discreteBool:NO] forKey:@"$mybool"];
    
    [env setField:[UMDiscreteValue discreteString:@"F1"] forKey:@"%field1"];
    [env setField:[UMDiscreteValue discreteString:@"F2"] forKey:@"%field2"];
    [env setField:[UMDiscreteValue discreteString:@"F3"] forKey:@"%field3"];
    [env setField:[UMDiscreteValue discreteString:@"BBB"] forKey:@"field4"];

    UMDiscreteValue *result = [theScript runScriptWithEnvironment:env];
    NSString *rs = [result stringValue];
    if(rs==NULL)
    {
        rs = @"<NULL>";
    }
    resultField.stringValue = rs;
    runButton.title = @"DONE";
}

- (IBAction)compileButtonPressed:(id)sender
{
    if(theScript == NULL)
    {
        theScript = [[UMScriptDocument alloc]init];
    }
    theScript.sourceCode = inputField.stringValue;
    NSString *result = [theScript compileSource];
    
    outputField.stringValue =  result;
}

@end
