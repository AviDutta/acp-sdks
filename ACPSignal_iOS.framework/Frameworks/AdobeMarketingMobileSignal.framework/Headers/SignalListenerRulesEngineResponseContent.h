/* **************************************************************************
 *
 * ADOBE CONFIDENTIAL
 * ___________________
 *
 * Copyright 2018 Adobe Systems Incorporated
 * All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Adobe Systems Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Adobe Systems Incorporated and its
 * suppliers and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Adobe Systems Incorporated.
 **************************************************************************/


#ifndef ADOBEMOBILE_SIGNAL_LISTENERRULESENGINERESPONSECONTENT_H
#define ADOBEMOBILE_SIGNAL_LISTENERRULESENGINERESPONSECONTENT_H


#include "Signal.h"
#include <AdobeMarketingMobileCore/ModuleEventListener.h>

namespace AdobeMarketingMobile {

    /**
     * @class SignalListenerRulesEngineResponseContent
     * Listener for Rules Engine Response content events
     */
    class SignalListenerRulesEngineResponseContent : public ModuleEventListener<Signal> {
    public:

        /**
         * Callback for RULES_ENGINE RESPONSE_CONTENT events.
         *
         * @param event RULES_ENGINE RESPONSE_CONTENT event.
         */
        void Hear(const std::shared_ptr<Event>& event) override;
    };
}

#endif /* ADOBEMOBILE_SIGNAL_LISTENERRULESENGINERESPONSECONTENT_H */