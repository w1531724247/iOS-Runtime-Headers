/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTBatteryPolicy : _VTStatePolicy {
    unsigned char _batteryState;
    int _notificationToken;
    void *_powerAssertion;
    int _powerSourceNotificationToken;
    bool_allowOnBattery;
    bool_allowOnCharger;
    bool_locked;
}

- (void)_makePowerAssertion;
- (void)_registerForBatteryStatusChanges;
- (void)_registerForSettingsChange;
- (void)_unregisterForBatteryStatusChanges;
- (void)_unregisterForSettingsChange;
- (void)dealloc;
- (void)dependencyUpdated:(id)arg1;
- (id)initWithCallback:(id)arg1 queue:(id)arg2;
- (bool)isEnabled;
- (void)reload;

@end