#!/usr/bin/perl

open(JS, "$ARGV[0]/HybridSwizzeling/feedback_mobile_ios1.js") || die "Error: $!\n";
@lines = <JS>;
open (MYFILE, '>',"$ARGV[0]/HybridSwizzeling/feedback_mobile_ios.h") or die "cannot open file";
print MYFILE "/*This is a generated file based on $ARGV[0]/HybridSwizzeling/feedback_mobile_ios.js*/\n";
print MYFILE "NSString* feedback  =  @\"";
foreach  (@lines) {
    my $line = $_;
    $line =~ s/\\/\\\\/g;
    $line =~ s/\"/\\\"/g;
    chomp($line);
    print MYFILE "$line\\n";
}
print MYFILE "\";";
close (MYFILE);