#!/usr/bin/perl

# This script generates a random list within the standard received
# It should be used in this way: ./map_generator.pl rows columns density
# Example: ./map_generator.pl 15 15 5

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

# .: character for empty spaces
# o: character for obstructed spaces
# x: Character to fill the square
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o"; # obstacle space
		}
		else {
			print "."; # empty space
		}
	}
	print "\n";
}