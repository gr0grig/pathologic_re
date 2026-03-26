// @IMPORTS: GetMainOutdoorScene/1,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,Trace/1
// @STRINGS: W:pt_b1q04_grabitel1|W:pers_grabitel|W:b1q04_grabitel.xml|A:add|W:pt_b1q04_grabitel2|W:b1q04_grabitel2.xml|W:pt_b1q04_worker1|W:pers_worker|W:b1q04_worker.xml|W:pt_b1q04_worker2|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|A:size|A:get|A:Remove|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_9: op=0x55 vars=int,float
// @PE: 0x31,0x55

task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_49();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	var_3_object = Obj();
	func_96(var_3_object);
	var_0_object = var_3_object;
	GetMainOutdoorScene(var_2_object);
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = "";
	var_2_object = var_7_object;
	func_102(var_6_object, var_7_object, "pt_b1q04_grabitel1", "pers_grabitel", "b1q04_grabitel.xml");
	@@@var_0_object:add(var_6_object);
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = "";
	var_2_object = var_25_object;
	func_102(var_24_object, var_25_object, "pt_b1q04_grabitel2", "pers_grabitel", "b1q04_grabitel2.xml");
	@@@var_0_object:add(var_24_object);
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = "";
	var_2_object = var_30_object;
	func_102(var_29_object, var_30_object, "pt_b1q04_worker1", "pers_worker", "b1q04_worker.xml");
	@@@var_0_object:add(var_29_object);
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
	var_2_object = var_35_object;
	func_102(var_34_object, var_35_object, "pt_b1q04_worker2", "pers_worker", "b1q04_worker.xml");
	@@@var_0_object:add(var_34_object);
	var_39_int = 0;
	func_66((int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_96(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_66(var_39_int)
{
	var_40_float = 0; var_41_float = 0;
	GetGameTime(var_41_float);
	var_43_float = var_39_int * (int)24;
	var_44_bool = var_41_float >= var_43_float;
	if(var_44_bool != 0) {
		func_53(var_41_float);
	} else {
		var_62_float = var_39_int * (int)24;
		SetTimeEvent((int)0, var_62_float);
		Hold();
	}
	return 2;
	
}


func_102(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj();
	@@var_7_object:GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	var_19_bool = var_15_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_21_int = "Locator " + var_8_string;
		var_23_int = var_21_int + " doesn't exist";
		Trace(var_23_int);
	} else {
		@@var_7_object:AddStationaryActor(Obj(), var_16_cvector, var_17_cvector, var_9_string, var_10_string);
	}
	var_18_object = var_6_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_49()
{
	func_53(var_2_float);
	return 0;
}


func_53(var_0_object)
{
	var_45_object = var_0_object;
	if(var_45_object != 0) {
		var_46_object = Obj();
		var_46_object = var_0_object;
		func_120(var_46_object);
		var_0_object = 0;
	}
	var_57_object = Obj();
	func_90(var_57_object);
	RemoveActor(var_57_object);
	return 0;
}


func_120(var_46_object)
{
	var_47_int = 0; var_48_int = 0; var_49_object = Obj(); var_50_int = 0; var_51_int = 0; var_52_object = Obj();
	var_53_object = var_46_object;
	if(var_53_object != 0) {
		@@var_46_object:size(var_50_int);
		var_51_int = 0;

	Label_126:
		var_54_bool = var_51_int < var_50_int;
		if(var_54_bool != 0) {
			@@var_46_object:get(var_52_object, var_51_int);
			var_55_object = var_52_object;
			if(var_55_object != 0) {
				@@var_52_object:Remove();
			}
			var_52_object = 0;
			var_51_int = var_51_int + (int)1;
			goto Label_126;
		}
		@@var_46_object:clear();
	}
	return 6;
}


func_90(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj();
	self(var_59_object);
	var_59_object = var_57_object;
	return 2;
}
EMIT "Stack[-1] = 0";


