// @IMPORTS: CreateIntVector/1,Hold/0,GetProperty/2,GetLocator/4,RandOneOf/11,AddActorByType/6,RandOneOf/15,RandVec2D/2,RandOneOf/13,RemoveActor/1,self/1,rand/1,CreateObjectVector/1,Trace/1,AddActor/6
// @RUN_OP: 0xb
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_5: op=0x114 vars=
// @EVENT_6: op=0x154 vars=
// @PE: 0x0,0x2,0x5,0x8

task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = "";
	var_18_bool = var_1_object == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = Obj();
		func_408(var_19_object);
		var_1_object = var_19_object;
	}
	var_22_bool = var_0_object == 0; //@nz
	if(var_22_bool != 0) {
		CreateIntVector(var_0_object);
	}
	var_23_object = Obj();
	var_23_object = var_1_object;
	func_432(var_23_object);
	@@@var_0_object:size(var_10_int);
	var_11_int = 0;
	
Label_294:
	var_33_bool = var_11_int < var_10_int;
	if(var_33_bool != 0) {
		@@@var_0_object:get(var_12_int, var_11_int);
		var_35_int = var_11_int + (int)1;
		@@@var_0_object:get(var_13_int, var_35_int);
		var_37_int = var_11_int + (int)2;
		@@@var_0_object:get(var_14_int, var_37_int);
		var_38_string = ""; var_39_int = 0; var_40_int = 0;
		var_12_int = var_39_int;
		var_13_int = var_40_int;
		func_2(var_40_int);
		var_38_string = var_15_string;
		var_41_string = ""; var_42_int = 0; var_43_int = 0;
		var_12_int = var_42_int;
		var_14_int = var_43_int;
		func_5(var_43_int);
		var_41_string = var_16_string;
		var_44_string = ""; var_45_int = 0; var_46_int = 0;
		var_12_int = var_45_int;
		var_14_int = var_46_int;
		func_8(var_46_int);
		var_44_string = var_17_string;
		var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = "";
		func_397(Obj());
		var_52_object = var_48_object;
		var_15_string = var_49_string;
		var_16_string = var_50_string;
		var_17_string = var_51_string;
		func_414(var_47_object, var_48_object, var_49_string, var_50_string, var_51_string);
		@@@var_1_object:add(var_47_object);
		var_11_int = var_11_int + (int)3;
		goto Label_294;
	}
	return 16;
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0;
	@@@var_1_object:size(var_6_int);
	var_7_int = 0;
	
Label_344:
	var_10_bool = var_7_int < var_6_int;
	if(var_10_bool != 0) {
		@@@var_1_object:get(var_8_object, var_7_int);
		var_11_bool = var_8_object != 0; //@nn
		if(var_11_bool != 0) {
			@@var_8_object:IsDead(var_9_bool);
			var_12_bool = var_9_bool == 0; //@nz
			if(var_12_bool == 0) goto Label_364;
			var_13_bool = 0; var_14_object = Obj(); var_15_string = "";
			var_8_object = var_14_object;
			func_385(var_13_bool, var_14_object, "ToDie");
			var_22_bool = var_13_bool == 0; //@nz
			if(var_22_bool != 0) {
				var_7_int = var_7_int + (int)1;
			} else {
				RemoveActor(var_8_object);
		}
			@@@var_1_object:remove(var_7_int);
			var_25_float = var_7_int * (int)3;
			var_27_int = var_7_int + (int)1;
			var_29_float = var_27_int * (int)3;
			@@@var_0_object:remove(var_25_float, var_29_float);
			var_6_int = var_6_int + (int)-1;
			var_8_object = 0;
	}
		var_31_object = Obj();
		var_31_object = var_1_object;
		func_432(var_31_object);
		goto Label_344;
	}
	return 8;
	
}


main(var_0_object, var_1_object)
{
	var_2_bool = var_1_object == 0; //@nz
	if(var_2_bool != 0) {
		var_3_object = Obj();
		func_408(var_3_object);
		var_1_object = var_3_object;
	}
	var_6_bool = var_0_object == 0; //@nz
	if(var_6_bool != 0) {
		CreateIntVector(var_0_object);
	}
	func_32();
	var_175_object = Obj();
	var_175_object = var_0_object;
	func_0();
	
Label_28:
	Hold();
	goto Label_28;
}
EMIT "Return(); Pop(0)";


func_0()
{
	return 0;
}


func_129(var_22_cvector, var_23_cvector, var_24_bool)
{
	var_25_string = ""; var_26_object = Obj(); var_27_string = ""; var_28_object = Obj();
	var_29_bool = 0; var_30_float = 0;
	var_31_bool = var_24_bool;
	if(var_31_bool != 0) {
		var_30_float = 0.10000000149011612;
	} else {
		var_30_float = 0.20000000298023224;
	}
	func_403(var_29_bool, var_30_float);
	if(var_29_bool != 0) {
		RandOneOf(var_27_string, (int)5, (int)5, (int)3, (int)2, (int)3, "bread", "bottle_water", "milk", "vegetables", "lemon");
		var_45_object = Obj();
		func_397(var_45_object);
		var_49_int = "item_" + var_27_string;
		var_51_int = var_49_int + "_steal.xml";
		AddActorByType(var_28_object, "scripted_container", var_45_object, var_22_cvector, var_23_cvector, var_51_int);
		var_28_object = 0;
	}
	return 4;
	
}


func_2(var_38_string)
{
	var_38_string = "";
	return 0;
}


func_385(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0;
	var_20_bool = IsFuncExist(var_14_object, "HasProperty", (int)2);
	var_21_bool = var_20_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	@@var_14_object:HasProperty(var_15_string, var_17_bool);
	var_17_bool = var_13_bool;
	return 2;
}


func_5(var_41_string)
{
	var_41_string = "";
	return 0;
}


func_8(var_44_string)
{
	var_44_string = "";
	return 0;
}


func_72(var_53_bool)
{
	var_54_int = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_int = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	var_58_int = 1;
	
Label_74:
	var_63_int = "pt_item_pfood" + var_58_int;
	GetLocator(var_63_int, var_59_bool, var_60_cvector, var_61_cvector);
	var_64_bool = var_59_bool == 0; //@nz
	if(var_64_bool != 0) {
	} else {
		var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0;
		var_60_cvector = var_65_cvector;
		var_61_cvector = var_66_cvector;
		var_53_bool = var_67_bool;
		func_163(var_65_cvector, var_66_cvector, var_67_bool);
		var_58_int = var_58_int + (int)1;
		goto Label_74;
	}
	return 8;
	
}


func_397(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	self(var_47_object);
	var_47_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_403(var_29_bool, var_30_float)
{
	var_32_float = 0; var_33_float = 0;
	rand(var_33_float);
	var_29_bool = var_33_float < var_30_float;
	return 2;
}


func_408(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_91(var_110_bool)
{
	var_111_int = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_int = 0; var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0);
	var_115_int = 1;
	
Label_93:
	var_120_int = "pt_item_knife" + var_115_int;
	GetLocator(var_120_int, var_116_bool, var_117_cvector, var_118_cvector);
	var_121_bool = var_116_bool == 0; //@nz
	if(var_121_bool != 0) {
	} else {
		var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_bool = 0;
		var_117_cvector = var_122_cvector;
		var_118_cvector = var_123_cvector;
		var_110_bool = var_124_bool;
		func_221(var_122_cvector, var_123_cvector, var_124_bool);
		var_115_int = var_115_int + (int)1;
		goto Label_93;
	}
	return 8;
	
}


func_221(var_122_cvector, var_123_cvector, var_124_bool)
{
	var_125_object = Obj(); var_126_object = Obj();
	var_127_bool = 0; var_128_float = 0;
	var_129_bool = var_124_bool;
	if(var_129_bool != 0) {
		var_128_float = 0.10000000149011612;
	} else {
		var_128_float = 0.10000000149011612;
	}
	func_403(var_127_bool, var_128_float);
	if(var_127_bool != 0) {
		var_131_object = Obj();
		func_397(var_131_object);
		AddActorByType(var_126_object, "scripted_container", var_131_object, var_122_cvector, var_123_cvector, "item_knife_steal.xml");
		var_126_object = 0;
	}
	return 2;
	
}


func_414(var_47_object, var_48_object, var_49_string, var_50_string, var_51_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	@@var_48_object:GetLocator(var_49_string, var_59_bool, var_60_cvector, var_61_cvector);
	var_63_bool = var_59_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_65_int = "Locator " + var_49_string;
		var_67_int = var_65_int + " doesn't exist";
		Trace(var_67_int);
	} else {
		AddActor(Obj(), var_50_string, var_48_object, var_60_cvector, var_61_cvector, var_51_string);
	}
	var_62_object = var_47_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_32()
{
	var_7_bool = 0; var_8_bool = 0;
	GetProperty("nailed", var_8_bool);
	var_10_bool = 0;
	var_8_bool = var_10_bool;
	func_53(var_10_bool);
	var_53_bool = 0;
	var_8_bool = var_53_bool;
	func_72(var_53_bool);
	var_110_bool = 0;
	var_8_bool = var_110_bool;
	func_91(var_110_bool);
	var_134_bool = 0;
	var_8_bool = var_134_bool;
	func_110(var_134_bool);
	return 2;
}


func_163(var_65_cvector, var_66_cvector, var_67_bool)
{
	var_68_string = ""; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_string = ""; var_74_object = Obj(); var_75_float = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0);
	var_78_bool = 0; var_79_float = 0;
	var_80_bool = var_67_bool;
	if(var_80_bool != 0) {
		var_79_float = 0.10000000149011612;
	} else {
		var_79_float = 0.20000000298023224;
	}
	func_403(var_78_bool, var_79_float);
	if(var_78_bool != 0) {
		RandOneOf(var_73_string, (int)8, (int)3, (int)3, (int)3, (int)2, (int)2, (int)1, "rusk", "dried_fish", "dried_meat", "smoked_meat", "fresh_fish", "fresh_meat", "tvirin");
		RandVec2D(var_75_float, var_76_float);
		var_95_float = GetByIndex(var_77_cvector, 0);
		var_75_float = var_95_float;
		SetByIndex(var_77_cvector, 0) = var_95_float;
		var_96_float = GetByIndex(var_77_cvector, 1);
		SetByIndex(var_77_cvector, 1) = (float)0;
		var_97_float = GetByIndex(var_77_cvector, 2);
		var_76_float = var_97_float;
		SetByIndex(var_77_cvector, 2) = var_97_float;
		var_99_object = Obj();
		func_397(var_99_object);
		AddActorByType(var_74_object, "scripted_container", var_99_object, var_65_cvector, var_77_cvector, "item_plate.xml");
		var_102_object = Obj();
		func_397(var_102_object);
		var_104_int = var_65_cvector + CVector(0.0, 5.0, 0.0);
		var_106_int = "item_" + var_73_string;
		var_108_int = var_106_int + "_steal.xml";
		AddActorByType(var_74_object, "scripted_container", var_102_object, var_104_int, var_66_cvector, var_108_int);
		var_74_object = 0;
	}
	return 10;
	
}


func_110(var_134_bool)
{
	var_135_int = 0; var_136_bool = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_int = 0; var_140_bool = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0);
	var_139_int = 1;
	
Label_112:
	var_144_int = "pt_item_bottle" + var_139_int;
	GetLocator(var_144_int, var_140_bool, var_141_cvector, var_142_cvector);
	var_145_bool = var_140_bool == 0; //@nz
	if(var_145_bool != 0) {
	} else {
		var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_bool = 0;
		var_141_cvector = var_146_cvector;
		var_142_cvector = var_147_cvector;
		var_134_bool = var_148_bool;
		func_240(var_146_cvector, var_147_cvector, var_148_bool);
		var_139_int = var_139_int + (int)1;
		goto Label_112;
	}
	return 8;
	
}


func_432(var_31_object)
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj();
	@@var_31_object:size(var_35_int);
	var_36_int = 0;
	
Label_436:
	var_38_bool = var_36_int < var_35_int;
	if(var_38_bool != 0) {
		@@var_31_object:get(var_37_object, var_36_int);
		var_39_object = var_37_object;
		if(var_39_object != 0) {
			RemoveActor(var_37_object);
		}
		var_37_object = 0;
		var_36_int = var_36_int + (int)1;
		goto Label_436;
	}
	@@var_31_object:clear();
	return 6;
}


func_240(var_146_cvector, var_147_cvector, var_148_bool)
{
	var_149_string = ""; var_150_object = Obj(); var_151_string = ""; var_152_object = Obj();
	var_153_bool = 0; var_154_float = 0;
	var_155_bool = var_148_bool;
	if(var_155_bool != 0) {
		var_154_float = 0.20000000298023224;
	} else {
		var_154_float = 0.4000000059604645;
	}
	func_403(var_153_bool, var_154_float);
	if(var_153_bool != 0) {
		RandOneOf(var_151_string, (int)10, (int)15, (int)3, (int)3, (int)3, (int)1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
		var_169_object = Obj();
		func_397(var_169_object);
		var_171_int = "item_" + var_151_string;
		var_173_int = var_171_int + "_steal.xml";
		AddActorByType(var_152_object, "scripted_container", var_169_object, var_146_cvector, var_147_cvector, var_173_int);
		var_152_object = 0;
	}
	return 4;
	
}


func_53(var_10_bool)
{
	var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	var_15_int = 1;
	
Label_55:
	var_20_int = "pt_item_food" + var_15_int;
	GetLocator(var_20_int, var_16_bool, var_17_cvector, var_18_cvector);
	var_21_bool = var_16_bool == 0; //@nz
	if(var_21_bool != 0) {
	} else {
		var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0;
		var_17_cvector = var_22_cvector;
		var_18_cvector = var_23_cvector;
		var_10_bool = var_24_bool;
		func_129(var_22_cvector, var_23_cvector, var_24_bool);
		var_15_int = var_15_int + (int)1;
		goto Label_55;
	}
	return 8;
	
}


