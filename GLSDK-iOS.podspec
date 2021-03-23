#
# Be sure to run `pod lib lint GLSDK-iOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GLSDK-iOS'
  s.version          = '1.0'
  s.summary          = 'A short description of GLSDK-iOS.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/GeiLe365/GLSDK-iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'dfs930@365gl.com' => 'dfs930@365gl.com' }
  s.source           = { :git => 'https://github.com/GeiLe365/GLSDK-iOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.static_framework = true
  s.source_files = 'GLSDK-iOS/Classes/**/*'

  s.vendored_frameworks = 'GLSDK-iOS/Classes/*.framework'
  
  s.frameworks   = "CoreLocation", "CoreTelephony", "OpenGLES", "QuartzCore", "Security", "SystemConfiguration","Accelerate","CoreGraphics","Foundation"
  
  s.dependency 'UMCShare/UI'
  s.dependency 'UMCShare/Social/WeChat'
  s.dependency 'UMCShare/Social/QQ'
  s.dependency 'UMCShare/Social/SMS'
  s.dependency 'Reachability'
  s.dependency 'Masonry'
  s.dependency 'WebViewJavascriptBridge'
  s.dependency 'BaiduMapKit'
  #s.libraries    = "z", "sqlite3.0", "stdc++.6.0.9", "crypto", “ssl"
  # s.resource_bundles = {
  #   'GLSDK-iOS' => ['GLSDK-iOS/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end

