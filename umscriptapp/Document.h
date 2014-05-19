//
//  Document.h
//  umscriptapp
//
//  Created by Andreas Fink on 18.05.14.
//  Copyright (c) 2014 SMSRelay AG. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "UMScript/UMScript.h"
@interface Document : NSDocument
{
    UMScriptDocument *theScript;
    
    

    IBOutlet NSTextField *inputField;
    IBOutlet NSTextField *outputField;
    IBOutlet NSTextField *resultField;
    
    IBOutlet NSButton *runButton;
    IBOutlet NSButton *compileButton;

}

- (IBAction)runButtonPressed:(id)sender;
- (IBAction)compileButtonPressed:(id)sender;

@end
