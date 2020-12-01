#
#  Be sure to run `pod spec lint eGMobileAPM.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#


Pod::Spec.new do |s|
  s.name             = 'eGMobileAPM'
  s.version          = '1.0.0'
  s.summary          = 'eGMobileAPM for iOS is a monitoring framework used to instrument the Native Applications'
  s.description      = <<-DESC
eGMobileAPM is a monitoring framework. It collects the metrics from the application and send it to eG Agent. It involves gathering metrics and perfomance statistics about your applocation.
                       DESC
  s.homepage         = 'https://github.com/eginnovations/eGMobileAPM'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'eginnovation' => 'saikishore.k@eginnovations.com' }
  s.source           = { :git => 'https://github.com/eginnovation/eGMobileAPM.git', :tag => s.version.to_s }
  s.vendored_frameworks = 'eGMobileAPM/Frameworks/eGMobileAPM.framework'
  s.xcconfig = {'ENABLE_BITCODE' => 'NO'}
  s.source_files = 'eGMobileAPM/Classes/**/*.{swift,h,m,c,cc,mm,cpp}'
  s.ios.deployment_target  = '9.0'
  s.swift_version = '5.1'

end
