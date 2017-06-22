//
//  UMHTTPResponseCode.h
//  ulib
//
//  Created by Andreas Fink on 25.01.13.
//  Copyright © 2017 Andreas Fink (andreas@fink.org). All rights reserved.
//


typedef enum UMHTTPResponseCode
{
    HTTP_RESPONSE_CODE_CONTINUE  = 100,
    HTTP_RESPONSE_CODE_SWITCHING_PROTOCOLS  = 101,
    HTTP_RESPONSE_CODE_OK  = 200,
    HTTP_RESPONSE_CODE_CREATED  = 201,
    HTTP_RESPONSE_CODE_ACCEPTED  = 202,
    HTTP_RESPONSE_CODE_NON_AUTHORITATIVE   = 203,
    HTTP_RESPONSE_CODE_NO_CONTENT  = 204,
    HTTP_RESPONSE_CODE_RESET_CONTENT  = 205,
    HTTP_RESPONSE_CODE_PARTIAL_CONTENT  = 206,
    HTTP_RESPONSE_CODE_MULTIPLE_CHOICES  = 300,
    HTTP_RESPONSE_CODE_MOVED_PERMANENTLY  = 301,
    HTTP_RESPONSE_CODE_FOUND  = 302,
    HTTP_RESPONSE_CODE_SEE_OTHER  = 303,
    HTTP_RESPONSE_CODE_NOT_MODIFIED  = 304,
    HTTP_RESPONSE_CODE_USE_PROXY  = 305,
    HTTP_RESPONSE_CODE_UNUSED  = 306,
    HTTP_RESPONSE_CODE_TEMPORARY_REDIRECT  = 307,
    HTTP_RESPONSE_CODE_BAD_REQUEST  = 400,
    HTTP_RESPONSE_CODE_UNAUTHORIZED  = 401,
    HTTP_RESPONSE_CODE_PAYMENT_REQUIRED  = 402,
    HTTP_RESPONSE_CODE_FORBIDDEN  = 403,
    HTTP_RESPONSE_CODE_NOT_FOUND  = 404,
    HTTP_RESPONSE_CODE_METHOD_NOT_ALLOWED  = 405,
    HTTP_RESPONSE_CODE_NOT_ACCEPTABLE  = 406,
    HTTP_RESPONSE_CODE_PROXY_AUTHENTICATION_REQUIRED  = 407,
    HTTP_RESPONSE_CODE_REQUEST_TIMEOUT  = 408,
    HTTP_RESPONSE_CODE_CONFLICT  = 409,
    HTTP_RESPONSE_CODE_GONE  = 410,
    HTTP_RESPONSE_CODE_LENGTH_REQUIRED  = 411,
    HTTP_RESPONSE_CODE_PRECONDITION_FAILED  = 412,
    HTTP_RESPONSE_CODE_REQUEST_ENTITY_TOO_LARGE  = 413,
    HTTP_RESPONSE_CODE_REQUEST_URI_TOO_LONG  = 414,
    HTTP_RESPONSE_CODE_UNSUPPORTED_MEDIA_TYPE  = 415,
    HTTP_RESPONSE_CODE_REQUESTED_RANGE_NOT_SATISFIABLE  = 416,
    HTTP_RESPONSE_CODE_EXPECTATION_FAILED  = 417,
    HTTP_RESPONSE_CODE_INTERNAL_SERVER_ERROR  = 500,
    HTTP_RESPONSE_CODE_NOT_IMPLEMENTED  = 501,
    HTTP_RESPONSE_CODE_BAD_GATEWAY  = 502,
    HTTP_RESPONSE_CODE_SERVICE_UNAVAILABLE  = 503,
    HTTP_RESPONSE_CODE_GATEWAY_TIMEOUT  = 504,
    HTTP_RESPONSE_CODE_HTTP_VERSION_NOT_SUPPORTED  = 505,
} UMHTTPResponseCode;

