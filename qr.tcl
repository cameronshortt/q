if {[catch {set s {catch [set s {%s}; set f [format $s $s]; puts $f; puts $f]}; set f [format $s $s]; puts $f; puts $f}]} {
catch {set s {catch [set s {%s}; set f [format $s $s]; puts $f; puts $f]}; set f [format $s $s]; puts $f; puts $f}}
