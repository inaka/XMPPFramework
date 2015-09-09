//
//  FlingXMPPExtensions.h
//  iPhoneXMPP
//
//  Created by Javier Laguna on 09/09/2015.
//  Copyright (c) 2015 XMPPFramework. All rights reserved.
//

#ifndef iPhoneXMPP_FlingXMPPExtensions_h
#define iPhoneXMPP_FlingXMPPExtensions_h

#ifdef HAVE_XMPP_SUBSPEC_XEP_0203
#import "NSXMLElement+XEP_0203.h"
#endif

#ifdef HAVE_XMPP_SUBSPEC_XEP_0054
#import "XMPPvCardCoreDataStorage.h"
#endif

#ifdef HAVE_XMPP_SUBSPEC_XEP_0115
#import "XMPPCapabilitiesCoreDataStorage.h"
#endif

#ifdef HAVE_XMPP_SUBSPEC_XEP_0045
#import "XMPPRoomCoreDataStorage.h"
#endif

#endif
