/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SFUCryptoKey : NSObject
{
    unsigned int mIterationCount;
}

- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (int)keyType;
- (unsigned int)iterationCount;

@end

