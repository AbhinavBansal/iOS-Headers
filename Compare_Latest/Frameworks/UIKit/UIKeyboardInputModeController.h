/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, UIKeyboardInputMode;

@interface UIKeyboardInputModeController : NSObject
{
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSString *currentLocale;
    NSString *currentLanguage;
    NSArray *keyboardInputModes;
    NSArray *enabledInputModes;
    NSArray *normalizedInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultRawInputModes;
    NSArray *defaultInputModes;
    NSArray *defaultNormalizedInputModes;
    NSString *_inputModeContextIdentifier;
    id <UIKeyboardInputModeControllerDelegate> _delegate;
}

+ (id)sharedInputModeController;
@property(nonatomic) id <UIKeyboardInputModeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *inputModeContextIdentifier; // @synthesize inputModeContextIdentifier=_inputModeContextIdentifier;
@property(retain) NSArray *defaultNormalizedInputModes; // @synthesize defaultNormalizedInputModes;
@property(retain) NSArray *defaultInputModes; // @synthesize defaultInputModes;
@property(copy, nonatomic) NSArray *defaultRawInputModes; // @synthesize defaultRawInputModes;
@property(retain) NSArray *defaultKeyboardInputModes; // @synthesize defaultKeyboardInputModes;
@property(retain) NSArray *normalizedInputModes; // @synthesize normalizedInputModes;
@property(retain) NSArray *enabledInputModes; // @synthesize enabledInputModes;
@property(retain) NSArray *keyboardInputModes; // @synthesize keyboardInputModes;
@property(retain) NSString *currentLanguage; // @synthesize currentLanguage;
@property(retain) NSString *currentLocale; // @synthesize currentLocale;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)suggestedInputModesForCurrentLocale;
- (id)suggestedInputModesForCurrentLocale:(_Bool)arg1 fallbackToDefaultInputModes:(_Bool)arg2;
- (id)defaultEnabledInputModesForCurrentLocale:(_Bool)arg1;
- (_Bool)currentLocaleRequiresExtendedSetup;
- (void)updateCurrentInputMode:(id)arg1;
@property(retain) UIKeyboardInputMode *currentInputMode;
@property(readonly, nonatomic) _Bool containsDictationSupportedInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *currentPublicInputMode;
- (id)activeInputModes;
- (id)inputModeWithIdentifier:(id)arg1;
- (void)dealloc;

@end

