/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class AFUIUtteranceView;

@interface SBAssistantGuideSectionListCell : UITableViewCell
{
    AFUIUtteranceView *_bubbleView;
    struct CGSize _currentSize;
}

- (id)initWithReuseIdentifier:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)setPhrase:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (float)currentHeight;

@end

