//
//  SonicConstants.h
//  sonic
//
//  Created by zyvincenthu on 17/4/1.
//  Copyright © 2017年 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SonicDefaultUserAgent @"Mozilla/5.0 (iPhone; U; CPU iPhone OS 2_2 like Mac OS X;\
en-us) AppleWebKit/525.181 (KHTML, like Gecko) Version/3.1.1 Mobile/5H11 Safari/525.20"

/**
* Sonic status code.
*/
typedef NS_ENUM(NSUInteger, SonicStatusCode) {
    
    /**
     * No dynamic data will be updated.
     */
    SonicStatusCodeAllCached = 304,
    
    /**
     * The template need to update.
     */
    SonicStatusCodeTemplateUpdate = 2000,
    
    /**
     * There is no local cache, need to request all data from server.
     */
    SonicStatusCodeFirstLoad = 1000,
    
    /**
     * Only need to request dynamic data.
     */
    SonicStatusCodeDataUpdate = 200,
    
};

/** NSURLProtocol client action */
typedef NS_ENUM(NSUInteger, SonicURLProtocolAction) {
    
    SonicURLProtocolActionLoadData,
    
    SonicURLProtocolActionRecvResponse,
    
    SonicURLProtocolActionDidFinish,
    
    SonicURLProtocolActionDidFaild,
};

/* Sonic error code */
typedef NS_ENUM(NSInteger, SonicErrorType) {
    
    /* File i/o faild */
    SonicErrorType_IOE = -901,
    
    /* Time out */
    SonicErrorType_TOE = -902,
    
    /* HTML file verify faild */
    SonicErrorType_HTML_VERIFY_FAIL = -1001,
    
    /* Setup up the cache directory faild */
    SonicErrorType_MAKE_DIR_ERROR = -1003,
    
    /* Save file faild */
    SonicErrorType_WRITE_FILE_FAIL = -1004,
    
    /* Split the HTML to template and dynamic data faild */
    SonicErrorType_SPLIT_HTML_FAIL = -1005,
    
    /* Merge the server data and local dynamic data faild */
    SonicErrorType_MERGE_DIFF_DATA_FAIL = -1006,
    
    /* Server response data can not verify */
    SonicErrorType_SERVER_DATA_EXCEPTION = -1007,
    
    /* Merge the template and dynamic data to build HTML faild */
    SonicErrorType_BUILD_HTML_ERROR = -1008,
    
    /* NSURLProtocol recieve action faild */
    SonicErrorType_URLPROTOCOL_ERROR = -1009,
    
};

/**
 * Identify the source where started this request: webview or SonicSession.
 */
#define SonicHeaderKeyLoadType        @"sonic-load-type"

/**
 * The request is started by webview.
 */
#define SonicHeaderValueWebviewLoad   @"__SONIC_HEADER_VALUE_WEBVIEW_LOAD__"

/**
 * The request is started by SonicSession.
 */
#define SonicHeaderValueSonicLoad @"__SONIC_HEADER_VALUE_SONIC_LOAD__"

/**
 * Pass session id to SonicURLProtocol through this header field.
 */
#define SonicHeaderKeySessionID  @"sonic-sessionId"

/**
 * Pass sonic sdk version through this field.
 */
#define SonicHeaderKeySDKVersion @"sonic-sdk-version"

/**
 * Current sonic version: Sonic/1.0.
 */
#define SonicHeaderValueSDKVersion         @"Sonic/1.0"

/**
 * Pass template tag through this field.
 */
#define SonicHeaderKeyTemplate @"template-tag"

/**
 * Pass Etag through this field.
 */
#define SonicHeaderKeyETag     @"Etag"

/**
 * Content-Security-Policy key for header.
 */
#define SonicHeaderKeyCSPHeader       @"Content-Security-Policy"


/**
 * Pass cache policy through this field: SonicHeaderValueCacheOfflineStore, SonicHeaderValueCacheOfflineStoreRefresh, SonicHeaderValueCacheOfflineRefresh, SonicHeaderValueCacheOfflineDisable.
 */
#define SonicHeaderKeyCacheOffline       @"cache-offline"

/**
 * Store the new data and don't refresh web content.
 */
#define SonicHeaderValueCacheOfflineStore  @"store"

/**
 * Store new data and refresh web content.
 */
#define SonicHeaderValueCacheOfflineStoreRefresh   @"true"

/**
 * Don't store the new data , only use the new data to refresh web content.
 */
#define SonicHeaderValueCacheOfflineRefresh  @"false"

/**
 * Sonic is diabled, don't use sonic in the following 6 hours.
 */
#define SonicHeaderValueCacheOfflineDisable   @"http"


/**
 * Content-Security-Policy key for cache.
 */
#define kSonicCSP             @"csp"

/**
 * The last time to refresh the cache.
 */
#define kSonicLocalRefreshTime  @"local_refresh"

/**
 * Html-SHA1
 */
#define kSonicSha1          @"sha1"

/**
 * Key for SonicURLProtocolCallBack's dictionary: action type.
 */
#define kSonicProtocolAction            @"protocol-action"

/**
 * Key for SonicURLProtocolCallBack's dictionary: data.
 */
#define kSonicProtocolData              @"protocol-data"

/**
 * The file name to record Sonic disable list for each URL.
 */
#define SonicCacheOfflineDisableList       @"cache-offline-disable.cfg"

/**
 * Sever default disable sonic time duration: 6 hours.
 */
#define SonicCacheOfflineDefaultTime   60*60*6

/**
 * Quick way to get file manager.
 */
#define SonicFileManager    [NSFileManager defaultManager]
