/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOSupportedTileSetsServerProxy-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection;

@interface GEOSupportedTileSetsServerLocalProxy : NSObject <GEOSupportedTileSetsServerProxy, NSURLConnectionDelegate>
{
    id <GEOSupportedTileSetsServerProxyDelegate> _delegate;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_responseETag;
}

@property(nonatomic) id <GEOSupportedTileSetsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)updateAttributionBadgeDataHiDPI:(BOOL)arg1 isIPad:(BOOL)arg2 handler:(id)arg3;
- (void)loadAttributionBadgeDataHiDPI:(BOOL)arg1 isIPad:(BOOL)arg2 handler:(id)arg3;
- (void)_writeDocumentToDisk:(id)arg1;
- (void)_connectionDidFail;
- (void)_cleanupConnection;
- (void)_cancelConnection;
- (void)updateDocument;
- (id)documentDataFromDisk;
- (id)documentURL;
- (void)dealloc;

@end
