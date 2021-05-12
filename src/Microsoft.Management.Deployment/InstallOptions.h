#pragma once
#include "InstallOptions.g.h"

namespace winrt::Microsoft::Management::Deployment::implementation
{
    [uuid("1095F097-EB96-453B-B4E6-1613637F3B14")]
    struct InstallOptions : InstallOptionsT<InstallOptions>
    {
        InstallOptions() = default;

        Microsoft::Management::Deployment::CatalogPackage CatalogPackage();
        void CatalogPackage(Microsoft::Management::Deployment::CatalogPackage const& value);
        Microsoft::Management::Deployment::PackageVersionId PackageVersionId();
        void PackageVersionId(Microsoft::Management::Deployment::PackageVersionId const& value);
        hstring PreferredInstallLocation();
        void PreferredInstallLocation(hstring const& value);
        Microsoft::Management::Deployment::AppInstallScope AppInstallScope();
        void AppInstallScope(Microsoft::Management::Deployment::AppInstallScope const& value);
        Microsoft::Management::Deployment::AppInstallMode AppInstallMode();
        void AppInstallMode(Microsoft::Management::Deployment::AppInstallMode const& value);
        hstring LogOutputPath();
        void LogOutputPath(hstring const& value);
        bool AllowHashMismatch();
        void AllowHashMismatch(bool value);
        hstring ReplacementInstallerArguments();
        void ReplacementInstallerArguments(hstring const& value);
        hstring CorrelationData();
        void CorrelationData(hstring const& value);
        hstring AdditionalAppCatalogArguments();
        void AdditionalAppCatalogArguments(hstring const& value);
    private:
        Microsoft::Management::Deployment::CatalogPackage m_catalogPackage{ nullptr };
        Microsoft::Management::Deployment::PackageVersionId m_packageVersionId{ nullptr };
        std::wstring m_preferredInstallLocation = L"";
        Microsoft::Management::Deployment::AppInstallScope m_appInstallScope = Microsoft::Management::Deployment::AppInstallScope::User;
        Microsoft::Management::Deployment::AppInstallMode m_appInstallMode = Microsoft::Management::Deployment::AppInstallMode::Default;
        std::wstring m_logOutputPath = L"";
        bool m_allowHashMismatch = false;
        std::wstring m_replacementInstallerArguments = L"";
        std::wstring m_correlationData = L"";
        std::wstring m_additionalAppCatalogArguments = L"";
    };
}
namespace winrt::Microsoft::Management::Deployment::factory_implementation
{
    struct InstallOptions : InstallOptionsT<InstallOptions, implementation::InstallOptions>
    {
    };
}
