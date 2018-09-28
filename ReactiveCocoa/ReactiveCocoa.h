//
//  ReactiveCocoa.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ReactiveCocoa.
FOUNDATION_EXPORT double ReactiveCocoaVersionNumber;

//! Project version string for ReactiveCocoa.
FOUNDATION_EXPORT const unsigned char ReactiveCocoaVersionString[];

#import <CoCoReactiveCocoa/RACEXTKeyPathCoding.h>
#import <CoCoReactiveCocoa/RACEXTScope.h>
#import <CoCoReactiveCocoa/NSArray+RACSequenceAdditions.h>
#import <CoCoReactiveCocoa/NSData+RACSupport.h>
#import <CoCoReactiveCocoa/NSDictionary+RACSequenceAdditions.h>
#import <CoCoReactiveCocoa/NSEnumerator+RACSequenceAdditions.h>
#import <CoCoReactiveCocoa/NSFileHandle+RACSupport.h>
#import <CoCoReactiveCocoa/NSNotificationCenter+RACSupport.h>
#import <CoCoReactiveCocoa/NSObject+RACDeallocating.h>
#import <CoCoReactiveCocoa/NSObject+RACLifting.h>
#import <CoCoReactiveCocoa/NSObject+RACPropertySubscribing.h>
#import <CoCoReactiveCocoa/NSObject+RACSelectorSignal.h>
#import <CoCoReactiveCocoa/NSOrderedSet+RACSequenceAdditions.h>
#import <CoCoReactiveCocoa/NSSet+RACSequenceAdditions.h>
#import <CoCoReactiveCocoa/NSString+RACSequenceAdditions.h>
#import <CoCoReactiveCocoa/NSString+RACSupport.h>
#import <CoCoReactiveCocoa/NSIndexSet+RACSequenceAdditions.h>
#import <CoCoReactiveCocoa/NSURLConnection+RACSupport.h>
#import <CoCoReactiveCocoa/NSUserDefaults+RACSupport.h>
#import <CoCoReactiveCocoa/RACBehaviorSubject.h>
#import <CoCoReactiveCocoa/RACChannel.h>
#import <CoCoReactiveCocoa/RACCommand.h>
#import <CoCoReactiveCocoa/RACCompoundDisposable.h>
#import <CoCoReactiveCocoa/RACDisposable.h>
#import <CoCoReactiveCocoa/RACEvent.h>
#import <CoCoReactiveCocoa/RACGroupedSignal.h>
#import <CoCoReactiveCocoa/RACKVOChannel.h>
#import <CoCoReactiveCocoa/RACMulticastConnection.h>
#import <CoCoReactiveCocoa/RACQueueScheduler.h>
#import <CoCoReactiveCocoa/RACQueueScheduler+Subclass.h>
#import <CoCoReactiveCocoa/RACReplaySubject.h>
#import <CoCoReactiveCocoa/RACScheduler.h>
#import <CoCoReactiveCocoa/RACScheduler+Subclass.h>
#import <CoCoReactiveCocoa/RACScopedDisposable.h>
#import <CoCoReactiveCocoa/RACSequence.h>
#import <CoCoReactiveCocoa/RACSerialDisposable.h>
#import <CoCoReactiveCocoa/RACSignal+Operations.h>
#import <CoCoReactiveCocoa/RACSignal.h>
#import <CoCoReactiveCocoa/RACStream.h>
#import <CoCoReactiveCocoa/RACSubject.h>
#import <CoCoReactiveCocoa/RACSubscriber.h>
#import <CoCoReactiveCocoa/RACSubscriptingAssignmentTrampoline.h>
#import <CoCoReactiveCocoa/RACTargetQueueScheduler.h>
#import <CoCoReactiveCocoa/RACTestScheduler.h>
#import <CoCoReactiveCocoa/RACTuple.h>
#import <CoCoReactiveCocoa/RACUnit.h>

#ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
	#import <CoCoReactiveCocoa/MKAnnotationView+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIActionSheet+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIAlertView+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIBarButtonItem+RACCommandSupport.h>
	#import <CoCoReactiveCocoa/UIButton+RACCommandSupport.h>
	#import <CoCoReactiveCocoa/UICollectionReusableView+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIControl+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIDatePicker+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIGestureRecognizer+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIImagePickerController+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIRefreshControl+RACCommandSupport.h>
	#import <CoCoReactiveCocoa/UISegmentedControl+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UISlider+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UIStepper+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UISwitch+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UITableViewCell+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UITableViewHeaderFooterView+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UITextField+RACSignalSupport.h>
	#import <CoCoReactiveCocoa/UITextView+RACSignalSupport.h>
#elif TARGET_OS_MAC
	#import <CoCoReactiveCocoa/NSControl+RACCommandSupport.h>
	#import <CoCoReactiveCocoa/NSControl+RACTextSignalSupport.h>
	#import <CoCoReactiveCocoa/NSObject+RACAppKitBindings.h>
	#import <CoCoReactiveCocoa/NSText+RACSignalSupport.h>
#endif
