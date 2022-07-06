Pod::Spec.new do |s|
  s.name = 'eGMobileAPM'
  s.version = '1.0.3'
  s.license = { :type => 'MIT', :file => 'LICENSE' }

  s.summary = 'eGMobileAPM for iOS is a monitoring framework used to instrument the Native Applications'
  s.homepage = 'https://github.com/eginnovation/eGMobileAPM'
  s.author = { 'eginnovation' => 'saikishore.k@eginnovations.com' }

  s.source = { :git => 'https://github.com/eginnovation/eGMobileAPM.git', :tag => s.version }

  s.ios.vendored_frameworks = 'Framework/eGMobileAPM.xcframework'

  s.platform = :ios, '10.0'
  s.requires_arc = true
end
