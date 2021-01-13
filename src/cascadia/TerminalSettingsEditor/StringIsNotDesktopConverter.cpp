// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#include "pch.h"
#include "StringIsNotDesktopConverter.h"
#include "StringIsNotDesktopConverter.g.cpp"

using namespace winrt::Windows;
using namespace winrt::Windows::UI::Xaml;
using namespace winrt::Windows::UI::Text;

namespace winrt::Microsoft::Terminal::Settings::Editor::implementation
{
    Foundation::IInspectable StringIsNotDesktopConverter::Convert(Foundation::IInspectable const& value,
                                                                  Windows::UI::Xaml::Interop::TypeName const& /* targetType */,
                                                                  Foundation::IInspectable const& /* parameter */,
                                                                  hstring const& /* language */)
    {
        const auto& name = winrt::unbox_value_or<hstring>(value, L"");
        // return winrt::box_value(name.empty() ? Visibility::Collapsed : Visibility::Visible);
        // return winrt::box_value(name == L"desktopWallpaper" ? false : true);
        return winrt::box_value(name == L"desktopWallpaper" ? Visibility::Collapsed : Visibility::Visible);
    }

    Foundation::IInspectable StringIsNotDesktopConverter::ConvertBack(Foundation::IInspectable const& /*value*/,
                                                                      Windows::UI::Xaml::Interop::TypeName const& /* targetType */,
                                                                      Foundation::IInspectable const& /*parameter*/,
                                                                      hstring const& /* language */)
    {
        throw hresult_not_implemented();
    }
}
