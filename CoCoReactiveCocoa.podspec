Pod::Spec.new do |s|
  s.name         = "CoCoReactiveCocoa"
  s.version      = "1.0.0"
  s.summary      = "A framework for composing and transforming streams of values."
  s.homepage     = "https://github.com/blog/1107-reactivecocoa-is-now-open-source"
  s.author       = { "CoCoMaker" => "iScarlett@qq.com" }
  s.source = {"git"=>"https://github.com/CoCoMaker/CoCoReactiveCocoa.git"}
  s.license      = 'MIT'
  s.description  = "CoCoReactiveCocoa (RAC) is an Objective-C framework for Functional Reactive Programming. It provides APIs for composing and transforming streams of values."
 
  s.requires_arc = true
  s.ios.deployment_target = '9.0'
  s.osx.deployment_target = '10.8'
  s.default_subspecs = 'UI'
  # s.prepare_command = <<-'END'
  #   find . \( -regex '.*EXT.*\.[mh]$' -o -regex '.*metamacros\.[mh]$' \) -execdir mv {} RAC{} \;
  #   find . -regex '.*\.[hm]' -exec sed -i '' -E 's@"(EXT.*|metamacros)\.h"@"RAC\1.h"@' {} \;
  #   find . -regex '.*\.[hm]' -exec sed -i '' -E 's@<ReactiveCocoa/(EXT.*)\.h>@<ReactiveCocoa/RAC\1.h>@' {} \;
  # END

  s.subspec 'no-arc' do |sp|
    sp.source_files = 'ReactiveCocoa/RACObjCRuntime.{h,m}'
    sp.requires_arc = false
  end

  s.subspec 'UI' do |sp|
    sp.dependency 'CoCoReactiveCocoa/Core'
    sp.source_files = 'ReactiveCocoa/*{AppKit,NSControl,NSText,UI,MK}*'
    sp.ios.exclude_files = 'ReactiveCocoa/*{AppKit,NSControl,NSText}*'
    sp.osx.exclude_files = 'ReactiveCocoa/*{UI,MK}*'
  end

  s.subspec 'Core' do |sp|
    sp.dependency 'CoCoReactiveCocoa/no-arc'
    sp.source_files = ["ReactiveCocoa/*.{d,h,m}", "ReactiveCocoa/extobjc/*.{h,m}"]
    sp.private_header_files = 'ReactiveCocoa/*Private.h'
    sp.exclude_files = 'ReactiveCocoa/*{RACObjCRuntime,AppKit,NSControl,NSText,UIActionSheet,UI,MK}*'
  end
end