// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "browser/special_storage_policy.h"

#include "base/callback.h"

namespace brightray {

SpecialStoragePolicy::SpecialStoragePolicy() {
}

SpecialStoragePolicy::~SpecialStoragePolicy() {
}

bool SpecialStoragePolicy::IsStorageProtected(const GURL& origin) {
  return true;
}

bool SpecialStoragePolicy::IsStorageUnlimited(const GURL& origin) {
  return true;
}

bool SpecialStoragePolicy::IsStorageDurable(const GURL& origin) {
  return true;
}

bool SpecialStoragePolicy::IsStorageSessionOnly(const GURL& origin) {
  return false;
}

bool SpecialStoragePolicy::HasSessionOnlyOrigins() {
  return false;
}

bool SpecialStoragePolicy::HasIsolatedStorage(const GURL& origin) {
  return false;
}

network::SessionCleanupCookieStore::DeleteCookiePredicate
SpecialStoragePolicy::CreateDeleteCookieOnExitPredicate() {
  return network::SessionCleanupCookieStore::DeleteCookiePredicate();
}

}  // namespace brightray
