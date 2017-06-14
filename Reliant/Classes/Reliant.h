//
//  Reliant.h
//  Reliant
//
//  Created by Michael Seghers on 18/09/14.
//
//

#import <Foundation/Foundation.h>
#import <TargetConditionals.h>

#ifndef Reliant_Header____FILEEXTENSION___
#define Reliant_Header____FILEEXTENSION___

#if TARGET_OS_IOS
#import "OCSObjectContext.h"
#import "OCSConfiguratorFromClass.h"
#import "OCSConfiguratorBase+ForSubclassEyesOnly.h"
#import "OCSObjectFactory.h"
#endif

#import "NSObject+OCSReliantContextBinding.h"
#import "NSObject+OCSReliantInjection.h"
#import "OCSDefinition.h"

#endif
