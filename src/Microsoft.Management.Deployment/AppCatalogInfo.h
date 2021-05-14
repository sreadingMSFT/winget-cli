#pragma once
#include "AppCatalogInfo.g.h"

namespace winrt::Microsoft::Management::Deployment::implementation
{
    struct AppCatalogInfo : AppCatalogInfoT<AppCatalogInfo>
    {
        AppCatalogInfo() = default;
        void Initialize(::AppInstaller::Repository::SourceDetails sourceDetails);

        hstring Id();
        hstring Name();
        hstring Type();
        hstring Arg();
        hstring ExtraData();
        Windows::Foundation::DateTime LastUpdateTime();
        Microsoft::Management::Deployment::AppCatalogOrigin Origin();
        Microsoft::Management::Deployment::AppCatalogTrustLevel TrustLevel();
    private:
        ::AppInstaller::Repository::SourceDetails m_sourceDetails;
    };
}