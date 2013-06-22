/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVContainer.h"

@class ICSDuration, NSSet, NSString, NSTimeZone, NSURL;

@interface CalDAVContainer : CoreDAVContainer
{
    NSString *_calendarDescription;
    NSString *_ctag;
    NSString *_calendarColor;
    NSString *_calendarOrder;
    NSString *_xmppURI;
    NSString *_xmppServer;
    NSSet *_supportedCalendarComponentSet;
    BOOL _subscribedStripAlarms;
    BOOL _subscribedStripTodos;
    BOOL _subscribedStripAttachments;
    ICSDuration *_subscribedRefreshRate;
    NSURL *_publishURL;
    NSURL *_prePublishURL;
    BOOL _isScheduleTransparent;
    NSTimeZone *_timeZone;
    BOOL _canBePublished;
    BOOL _canBeShared;
    NSURL *_source;
    NSSet *_freeBusySet;
    NSURL *_scheduleDefaultCalendarURL;
    NSString *_defaultTimedAlarms;
    NSString *_defaultAllDayAlarms;
    NSSet *_sharees;
    NSString *_supportedCalendarComponentSets;
}

+ (id)copyPropertyMappingsForParser;
@property(retain) NSString *supportedCalendarComponentSets; // @synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets;
@property(retain) NSSet *sharees; // @synthesize sharees=_sharees;
@property(retain) NSString *defaultAllDayAlarms; // @synthesize defaultAllDayAlarms=_defaultAllDayAlarms;
@property(retain) NSString *defaultTimedAlarms; // @synthesize defaultTimedAlarms=_defaultTimedAlarms;
@property(retain) NSURL *scheduleDefaultCalendarURL; // @synthesize scheduleDefaultCalendarURL=_scheduleDefaultCalendarURL;
@property(retain) NSSet *freeBusySet; // @synthesize freeBusySet=_freeBusySet;
@property(retain) NSURL *source; // @synthesize source=_source;
@property BOOL canBeShared; // @synthesize canBeShared=_canBeShared;
@property BOOL canBePublished; // @synthesize canBePublished=_canBePublished;
@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property BOOL isScheduleTransparent; // @synthesize isScheduleTransparent=_isScheduleTransparent;
@property(retain) NSURL *prePublishURL; // @synthesize prePublishURL=_prePublishURL;
@property(retain) NSURL *publishURL; // @synthesize publishURL=_publishURL;
@property(retain) ICSDuration *subscribedRefreshRate; // @synthesize subscribedRefreshRate=_subscribedRefreshRate;
@property BOOL subscribedStripAttachments; // @synthesize subscribedStripAttachments=_subscribedStripAttachments;
@property BOOL subscribedStripTodos; // @synthesize subscribedStripTodos=_subscribedStripTodos;
@property BOOL subscribedStripAlarms; // @synthesize subscribedStripAlarms=_subscribedStripAlarms;
@property(retain) NSSet *supportedCalendarComponentSet; // @synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet;
@property(retain) NSString *xmppServer; // @synthesize xmppServer=_xmppServer;
@property(retain) NSString *xmppURI; // @synthesize xmppURI=_xmppURI;
@property(retain) NSString *calendarOrder; // @synthesize calendarOrder=_calendarOrder;
@property(retain) NSString *calendarColor; // @synthesize calendarColor=_calendarColor;
@property(retain) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain) NSString *calendarDescription; // @synthesize calendarDescription=_calendarDescription;
@property(readonly) BOOL supportsFreebusy;
@property(readonly) BOOL isPollContainer;
@property(readonly) BOOL isJournalContainer;
@property(readonly) BOOL isTaskContainer;
@property(readonly) BOOL isEventContainer;
@property(readonly) BOOL isShared;
@property(readonly) BOOL isSharedOwner;
@property(readonly) BOOL isSubscribed;
@property(readonly) BOOL isNotification;
@property(readonly) BOOL isScheduleOutbox;
@property(readonly) BOOL isScheduleInbox;
@property(readonly) BOOL isCalendar;
- (BOOL)_isComponentSupportedForString:(id)arg1;
- (void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2;
- (void)applyParsedProperties:(id)arg1;
- (id)description;
- (void)dealloc;

@end
