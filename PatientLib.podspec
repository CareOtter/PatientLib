#
# Be sure to run `pod lib lint PatientLib.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "PatientLib"
  s.version          = "0.1.1"
  s.summary          = "A library of data transfer objects to be used with the CareOtter cloud storage repository."

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = "This collection of classes will enable iOS developers to easily hydrate objects using either Bond's compact binary format, or JSON, and then be able to extract a Bond bytearray back out.'"
  s.homepage         = "https://github.com/CareOtter/PatientLib"
  s.license          = 'MIT'
  s.author           = { "Scott Mueller" => "scott.mueller@careotter.com" }
  s.source           = { :git => "https://github.com/CareOtter/PatientLib.git", :tag => s.version.to_s }

s.prepare_command = <<-CMD
echo 'Installing Now!'
echo '// Comment' >> PatientLib/Classes/SampleClass.h
CMD

s.ios.deployment_target = '8.0'

  s.source_files = 'PatientLib/Classes/**/*'
  
  # s.resource_bundles = {
  #   'PatientLib' => ['PatientLib/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
