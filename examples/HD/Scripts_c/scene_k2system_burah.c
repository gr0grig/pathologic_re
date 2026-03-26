// @IMPORTS: CreateObjectVector/1,CreateStringVector/1,CreateBoolVector/1,Hold/0,HasProperty/2,GetProperty/2,Trace/1,RemoveActor/1,self/1,AddActor/6,GetGameTime/1
// @STRINGS: A:size|A:resize|W:inited|W:day|A:SetProperty|A:get|W:strActorName: |W:strXMLName: |W:pt_k2s_svita|W:setting property|W:index|W:property set|A:set|W:dead|A:HasProperty|A:GetLocator|W:Locator |W: doesn't exist|W:pt_k2s_npc|W:NPC_Burah|W:k2system_burah.xml|W:pers_butcher|A:add|W:k2system_butcher.xml|W:pers_morlok|W:k2system_morlok.xml
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,bool,int params=0
// @EVENT_5: op=0x1e vars=
// @EVENT_6: op=0x6f vars=
// @PE: 0xa6,0xb0

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int)
{
	var_7_bool = 0; var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_string = ""; var_14_object = Obj(); var_15_bool = 0; var_16_bool = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_object = Obj(); var_24_bool = 0;
	var_17_bool = 0;
	HasProperty("inited", var_16_bool);
	var_26_bool = var_16_bool;
	if(var_26_bool != 0) {
		GetProperty("inited", var_18_int);
		var_17_bool = var_18_int != (int)0;
	}
	var_29_bool = var_17_bool == 0; //@nz
	if(var_29_bool != 0) {
		return 18;
	}
	var_30_bool = var_5_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_31_object = Obj(); var_32_object = Obj();
		func_133(Obj());
		var_33_object = var_32_object;
		func_166(var_31_object, var_32_object);
		var_3_object = var_31_object;
		@@@var_3_object:SetProperty("day", var_6_int);
		var_5_bool = true;
	}
	@@@var_0_object:size(var_19_int);
	var_20_int = 0;
	
Label_62:
	var_55_bool = var_20_int < var_19_int;
	if(var_55_bool != 0) {
		@@@var_0_object:get(var_21_string, var_20_int);
		@@@var_1_object:get(var_22_string, var_20_int);
		var_23_object = 0;
		@@@var_2_object:get(var_24_bool, var_20_int);
		var_56_bool = var_24_bool == 0; //@nz
		if(var_56_bool != 0) {
			var_58_int = "strActorName: " + var_21_string;
			Trace(var_58_int);
			var_60_int = "strXMLName: " + var_22_string;
			Trace(var_60_int);
			var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = "";
			func_133(Obj());
			var_66_object = var_62_object;
			var_69_int = var_20_int + (int)1;
			var_63_string = "pt_k2s_svita" + var_69_int;
			var_21_string = var_64_string;
			var_22_string = var_65_string;
			func_139(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string);
			var_61_object = var_23_object;
			Trace("setting property");
			@@var_23_object:SetProperty("index", var_20_int);
			Trace("property set");
		}
		@@@var_4_object:set(var_20_int, var_23_object);
		var_23_object = 0;
		var_20_int = var_20_int + (int)1;
		goto Label_62;
	}
	return 18;
}


task_0_event_6(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int)
{
	var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_int = 0; var_13_object = Obj(); var_14_bool = 0;
	@@@var_4_object:size(var_11_int);
	var_12_int = 0;
	
Label_115:
	var_15_bool = var_12_int < var_11_int;
	if(var_15_bool != 0) {
		@@@var_4_object:get(var_13_object, var_12_int);
		var_16_object = var_13_object;
		if(var_16_object != 0) {
			@@var_13_object:HasProperty("dead", var_14_bool);
			@@@var_2_object:set(var_12_int, var_14_bool);
			RemoveActor(var_13_object);
		}
		var_13_object = 0;
		var_12_int = var_12_int + (int)1;
		goto Label_115;
	}
	return 8;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int)
{
	var_7_int = 0; var_8_int = 0;
	var_5_bool = false;
	var_9_int = 0;
	func_157(var_9_int);
	var_6_int = var_9_int;
	CreateObjectVector(var_4_object);
	CreateStringVector(var_0_object);
	CreateStringVector(var_1_object);
	CreateBoolVector(var_2_object);
	var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj();
	var_15_object = var_0_object;
	var_16_object = var_1_object;
	var_17_object = var_2_object;
	func_176(var_15_object, var_16_object, var_17_object);
	@@@var_0_object:size(var_8_int);
	var_27_int = var_8_int;
	if(var_27_int != 0) {
		@@@var_4_object:resize(var_8_int);
	}
Label_26:
	Hold();
	goto Label_26;
}
EMIT "Return(); Pop(2)";


func_133(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj();
	self(var_35_object);
	var_35_object = var_33_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_166(var_31_object, var_32_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = "";
	var_32_object = var_37_object;
	func_139(var_36_object, var_37_object, "pt_k2s_npc", "NPC_Burah", "k2system_burah.xml");
	var_36_object = var_31_object;
	return 0;
}


func_139(var_36_object, var_37_object, var_38_string, var_39_string, var_40_string)
{
	var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj();
	@@var_37_object:GetLocator(var_38_string, var_45_bool, var_46_cvector, var_47_cvector);
	var_49_bool = var_45_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_51_int = "Locator " + var_38_string;
		var_53_int = var_51_int + " doesn't exist";
		Trace(var_53_int);
	} else {
		AddActor(Obj(), var_39_string, var_37_object, var_46_cvector, var_47_cvector, var_40_string);
	}
	var_48_object = var_36_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_176(var_15_object, var_16_object, var_17_object)
{
	@@var_15_object:add("pers_butcher");
	@@var_16_object:add("k2system_butcher.xml");
	@@var_17_object:add((bool)0);
	@@var_15_object:add("pers_morlok");
	@@var_16_object:add("k2system_morlok.xml");
	@@var_17_object:add((bool)0);
	@@var_15_object:add("pers_morlok");
	@@var_16_object:add("k2system_morlok.xml");
	@@var_17_object:add((bool)0);
	return 0;
}


func_157(var_9_int)
{
	var_10_float = 0; var_11_float = 0;
	GetGameTime(var_11_float);
	var_13_int = 0;
	var_13_int = var_11_float / (int)24;
	var_9_int = (int)1 + var_13_int;
	return 2;
}


