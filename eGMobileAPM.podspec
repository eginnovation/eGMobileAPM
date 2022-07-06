Pod::Spec.new do |s|
  s.name = 'eGMobileAPM'
  s.version = '1.0.3'

  s.summary = 'eGMobileAPM for iOS is a monitoring framework used to instrument the Native Applications'
  s.description  = 'eGMobile APM for Native iOS'
  s.homepage = 'https://github.com/eginnovation/eGMobileAPM'

  s.source = { :git => 'https://github.com/eginnovation/eGMobileAPM.git', :tag => s.version }
  s.swift_version = '5.0'
  s.ios.vendored_frameworks = 'Framework/eGMobileAPM.xcframework'

  s.platform = :ios, '10.0'
  s.requires_arc = true
  
  # ---  License  ----------------------------------------------------------- #
  #
   s.license      = { :type => "Commercial", :text =>
                       "Terms of Service
  
                        1.0 Introduction.
                        These Terms of Service constitute the agreement between You and eG Innovations, a division of eG LLC, a eG company (together hereinafter referred to as 'eG'). BY USING THE SERVICE, YOU ACKNOWLEDGE THAT YOU HAVE REVIEWED AND ACCEPT THIS AGREEMENT AND ARE AUTHORIZED TO ACT ON BEHALF OF, AND BIND YOUR ENTITY ('CLIENT') TO THIS AGREEMENT.
                      "}
                      
   # --- Author --------------------------------------------------------- #
   #
   s.author = { 'eginnovation' => 'saikishore.k@eginnovations.com' }
   s.social_media_url   = "https://twitter.com/eGInnovations"
  
end
