/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCPeerID, NSMutableDictionary;

@interface MCSessionPeerState : NSObject
{
    unsigned int _newStreamOpenRequestID;
    unsigned int _newStreamID;
    MCPeerID *_peerID;
    long long _state;
    NSMutableDictionary *_outgoingStreamRequests;
    NSMutableDictionary *_incomingStreams;
    NSMutableDictionary *_outgoingStreams;
    long long _certificateDecision;
}

@property(nonatomic) long long certificateDecision; // @synthesize certificateDecision=_certificateDecision;
@property(retain, nonatomic) NSMutableDictionary *outgoingStreams; // @synthesize outgoingStreams=_outgoingStreams;
@property(retain, nonatomic) NSMutableDictionary *incomingStreams; // @synthesize incomingStreams=_incomingStreams;
@property(retain, nonatomic) NSMutableDictionary *outgoingStreamRequests; // @synthesize outgoingStreamRequests=_outgoingStreamRequests;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property(readonly, nonatomic) unsigned int newStreamOpenRequestID; // @synthesize newStreamOpenRequestID=_newStreamOpenRequestID;
@property(readonly, nonatomic) unsigned int newStreamID; // @synthesize newStreamID=_newStreamID;
- (void)dealloc;
- (id)initWithPeer:(id)arg1;

@end

