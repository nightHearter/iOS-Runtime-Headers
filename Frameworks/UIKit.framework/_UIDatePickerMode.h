/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerMode : NSObject {
    UIFont * _amPmFont;
    NSString * _amString;
    NSDate * _baseDate;
    NSDateComponents * _baseDateComponents;
    NSArray * _dateFormatters;
    _UIDatePickerView * _datePickerView;
    UIFont * _defaultTimeFont;
    unsigned int * _elements;
    UIFont * _font;
    NSNumberFormatter * _formatter;
    BOOL  _isUsingJapaneseCalendar;
    NSString * _localizedFormatString;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _maxDayRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _maxMonthRange;
    NSDate * _maximumDate;
    NSDateComponents * _maximumDateComponents;
    NSDate * _minimumDate;
    NSDateComponents * _minimumDateComponents;
    int  _minuteInterval;
    unsigned int  _numberOfComponents;
    NSDate * _originatingDate;
    NSString * _pmString;
    NSDateComponents * _selectedDateComponents;
    NSDateComponents * _todayDateComponents;
    double  _todaySinceReferenceDate;
    UIColor * _todayTextColor;
    int  _yearsSinceBaseDate;
}

@property (nonatomic, readonly) UIFont *amPmFont;
@property (nonatomic, readonly) NSString *amString;
@property (nonatomic, retain) NSDate *baseDate;
@property (nonatomic, retain) NSDateComponents *baseDateComponents;
@property (nonatomic, readonly) int datePickerMode;
@property (nonatomic) _UIDatePickerView *datePickerView;
@property (nonatomic, readonly) UIFont *defaultTimeFont;
@property (nonatomic, readonly) int displayedCalendarUnits;
@property (nonatomic) unsigned int*elements;
@property (nonatomic, readonly) UIFont *font;
@property (getter=is24Hour, nonatomic, readonly) BOOL is24Hour;
@property (getter=isTimeIntervalMode, nonatomic, readonly) BOOL isTimeIntervalMode;
@property (nonatomic, retain) NSString *localizedFormatString;
@property (nonatomic, readonly) NSDate *maximumDate;
@property (nonatomic, readonly) NSDateComponents *maximumDateComponents;
@property (nonatomic, readonly) NSDate *minimumDate;
@property (nonatomic, readonly) NSDateComponents *minimumDateComponents;
@property (nonatomic) int minuteInterval;
@property (nonatomic) unsigned int numberOfComponents;
@property (nonatomic, retain) NSDate *originatingDate;
@property (nonatomic, readonly) NSString *pmString;
@property (nonatomic, readonly) float rowHeight;
@property (nonatomic, retain) NSDateComponents *selectedDateComponents;
@property (nonatomic, readonly) UIFont *sizedFont;
@property (nonatomic, retain) NSDateComponents *todayDateComponents;
@property (nonatomic) double todaySinceReferenceDate;
@property (nonatomic, readonly) UIColor *todayTextColor;
@property (nonatomic, readonly) float totalComponentWidth;
@property (nonatomic) int yearsSinceBaseDate;

+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;
+ (id)_datePickerModeWithMode:(int)arg1 datePickerView:(id)arg2;
+ (int)datePickerMode;
+ (unsigned int)extractableCalendarUnits;
+ (void)initialize;
+ (id)newDateFromGregorianYear:(int)arg1 month:(int)arg2 day:(int)arg3 timeZone:(id)arg4;

- (void).cxx_destruct;
- (id)_dateByEnsuringValue:(int)arg1 forCalendarUnit:(unsigned int)arg2;
- (id)_dateForYearRow:(int)arg1;
- (int)_incrementForStaggeredTimeIntervals;
- (BOOL)_isComponentScrolling:(int)arg1;
- (BOOL)_monthExists:(int)arg1 inYear:(int)arg2;
- (int)_numberOfDaysInDateComponents:(id)arg1;
- (BOOL)_scrollingAnyColumnExcept:(int)arg1;
- (BOOL)_shouldEnableValueForRow:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (void)_shouldReset:(id)arg1;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 usingSelectionBarValue:(BOOL)arg2;
- (int)_yearlessYearForMonth:(int)arg1;
- (id)amPmFont;
- (id)amString;
- (BOOL)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2;
- (id)baseDate;
- (id)baseDateComponents;
- (id)calendar;
- (id)calendarForFormatters;
- (unsigned int)calendarUnitForComponent:(int)arg1;
- (void)clearBaseDate;
- (int)componentForCalendarUnit:(unsigned int)arg1;
- (float)componentWidthForTwoDigitCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2;
- (id)dateForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (id)dateFormatterForCalendarUnit:(unsigned int)arg1;
- (int)datePickerMode;
- (id)datePickerView;
- (int)dayForRow:(int)arg1;
- (void)dealloc;
- (id)defaultTimeFont;
- (int)displayedCalendarUnits;
- (unsigned int*)elements;
- (int)eraForYearRow:(int)arg1;
- (void)fixUpElementsForRTL;
- (id)font;
- (id)fontForCalendarUnit:(unsigned int)arg1;
- (int)hourForRow:(int)arg1;
- (id)init;
- (BOOL)is24Hour;
- (BOOL)isTimeIntervalMode;
- (void)loadDate:(id)arg1 animated:(BOOL)arg2;
- (id)locale;
- (id)localizedFormatString;
- (id)maximumDate;
- (id)maximumDateComponents;
- (id)minimumDate;
- (id)minimumDateComponents;
- (int)minuteForRow:(int)arg1;
- (int)minuteInterval;
- (int)monthForRow:(int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (void)noteCalendarChanged;
- (unsigned int)numberOfComponents;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (int)numberOfRowsInComponent:(int)arg1;
- (id)originatingDate;
- (id)pmString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForCalendarUnit:(unsigned int)arg1;
- (void)resetComponentWidths;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4;
- (int)rowForValue:(int)arg1 forCalendarUnit:(unsigned int)arg2 currentRow:(int)arg3;
- (float)rowHeight;
- (int)secondForRow:(int)arg1;
- (id)selectedDateComponents;
- (void)setBaseDate:(id)arg1;
- (void)setBaseDateComponents:(id)arg1;
- (void)setDatePickerView:(id)arg1;
- (void)setElements:(unsigned int*)arg1;
- (void)setLocalizedFormatString:(id)arg1;
- (void)setMinuteInterval:(int)arg1;
- (void)setNumberOfComponents:(unsigned int)arg1;
- (void)setOriginatingDate:(id)arg1;
- (void)setSelectedDateComponents:(id)arg1;
- (void)setTodayDateComponents:(id)arg1;
- (void)setTodaySinceReferenceDate:(double)arg1;
- (void)setYearsSinceBaseDate:(int)arg1;
- (id)sizedFont;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (id)timeZone;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (id)titleForRow:(int)arg1 inComponent:(int)arg2;
- (id)todayDateComponents;
- (double)todaySinceReferenceDate;
- (id)todayTextColor;
- (float)totalComponentWidth;
- (float)totalComponentWidthWithFont:(id)arg1;
- (void)updateEnabledStateOfViewForRow:(int)arg1 inComponent:(int)arg2;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(int)arg1;
- (int)validateValue:(int)arg1 forCalendarUnit:(unsigned int)arg2;
- (int)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned int)arg3;
- (int)valueForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (id)viewForRow:(int)arg1 inComponent:(int)arg2 reusingView:(id)arg3;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (float)widthForComponent:(int)arg1 maxWidth:(float)arg2;
- (int)yearForRow:(int)arg1;
- (int)yearsSinceBaseDate;

@end
