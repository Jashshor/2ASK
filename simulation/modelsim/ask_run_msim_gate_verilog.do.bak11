transcript on
if {[file exists gate_work]} {
	vdel -lib gate_work -all
}
vlib gate_work
vmap work gate_work

vlog -vlog01compat -work work +incdir+. {ask.vo}

vlog -vlog01compat -work work +incdir+C:/Users/lenovo/Desktop/2ASK-master/simulation/modelsim {C:/Users/lenovo/Desktop/2ASK-master/simulation/modelsim/twoask.vt}

vsim -t 1ps -L altera_mf_ver -L altera_ver -L lpm_ver -L sgate_ver -L cycloneiv_hssi_ver -L cycloneiv_pcie_hip_ver -L cycloneiv_ver -L gate_work -L work -voptargs="+acc"  twoask_vlg_tst

add wave *
view structure
view signals
run 1000 us
