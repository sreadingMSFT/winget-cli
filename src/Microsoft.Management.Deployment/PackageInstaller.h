#pragma once
#include "PackageInstaller.g.h"

namespace winrt::Microsoft::Management::Deployment::implementation
{
    [uuid("C53A4F16-787E-42A4-B304-29EFFB4BF597")]
    struct PackageInstaller : PackageInstallerT<PackageInstaller>
    {
        PackageInstaller() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Management::Deployment::PackageCatalogReference> GetUserPackageCatalogs();
        winrt::Microsoft::Management::Deployment::PackageCatalogReference GetPredefinedPackageCatalog(winrt::Microsoft::Management::Deployment::PredefinedPackageCatalog const& predefinedPackageCatalog);
        winrt::Microsoft::Management::Deployment::PackageCatalogReference GetLocalPackageCatalog(winrt::Microsoft::Management::Deployment::LocalPackageCatalog const& localPackageCatalog);
        winrt::Microsoft::Management::Deployment::PackageCatalogReference GetPackageCatalogById(hstring const& catalogId);
        winrt::Microsoft::Management::Deployment::PackageCatalogReference CreateCompositePackageCatalog(winrt::Microsoft::Management::Deployment::CreateCompositePackageCatalogOptions const& options);
        winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Microsoft::Management::Deployment::InstallResult, winrt::Microsoft::Management::Deployment::InstallProgress> 
            InstallPackageAsync(winrt::Microsoft::Management::Deployment::CatalogPackage package, winrt::Microsoft::Management::Deployment::InstallOptions options);
        winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Microsoft::Management::Deployment::InstallResult, winrt::Microsoft::Management::Deployment::InstallProgress> 
            GetInstallProgress(winrt::Microsoft::Management::Deployment::CatalogPackage package);
    };
}
namespace winrt::Microsoft::Management::Deployment::factory_implementation
{
    struct PackageInstaller : PackageInstallerT<PackageInstaller, implementation::PackageInstaller>
    {
    };
}