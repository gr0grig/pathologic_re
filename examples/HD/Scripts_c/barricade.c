// @IMPORTS: Hold/0,GetGameTime/1,SetVisibility/1,GetPFPolyID/1,GetMainOutdoorScene/1,Trace/1,RandVec2D/2,GetScene/1,GetPosition/1
// @STRINGS: W:Blocking polygons: |A:BlockPolygons|A:UnblockPolygons|W:Barricade null scene|W:pers_soldat|W:soldier.xml|A:AddStationaryActor|W:Error adding soldier|W:Soldier was added: |A:Remove
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_5: op=0x4 vars=
// @EVENT_6: op=0x18 vars=
// @PE: 0x18

task_0_event_5(var_0_object)
{
	var_1_bool = 0;
	func_28(var_1_bool);
	if(var_1_bool != 0) {
		var_6_bool = 0;
		func_38((bool)1);
		func_65(var_0_object);
	} else {
		var_55_bool = 0;
		func_38((bool)0);
		func_116(var_0_object);
	}
	return 0;
	
}


task_0_event_6(var_0_object)
{
	func_116(var_0_object);
	return 0;
}


main(var_0_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_65(var_0_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_float = 0; var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_object = Obj();
	var_30_cvector = CVector(0,0,0);
	func_122(var_30_cvector);
	var_25_cvector = var_30_cvector + CVector(0.0, 150.0, 0.0);
	RandVec2D(var_27_float, var_28_float);
	var_34_float = GetByIndex(var_26_cvector, 0);
	var_27_float = var_34_float;
	SetByIndex(var_26_cvector, 0) = var_34_float;
	var_35_float = GetByIndex(var_26_cvector, 1);
	SetByIndex(var_26_cvector, 1) = (float)0;
	var_36_float = GetByIndex(var_26_cvector, 2);
	var_28_float = var_36_float;
	SetByIndex(var_26_cvector, 2) = var_36_float;
	GetScene(var_29_object);
	var_37_bool = var_29_object == 0; //@nz
	if(var_37_bool != 0) {
		Trace("Barricade null scene");
		return 10;
	}
	@@var_29_object:AddStationaryActor(var_0_object, var_25_cvector, var_26_cvector, "pers_soldat", "soldier.xml", (bool)1);
	var_42_bool = var_0_object == 0; //@ne
	if(var_42_bool != 0) {
		Trace("Error adding soldier");
	} else {
		var_45_float = GetByIndex(var_25_cvector, 0);
		var_46_int = "Soldier was added: " + var_45_float;
		var_48_int = var_46_int + " ";
		var_49_float = GetByIndex(var_25_cvector, 1);
		var_50_int = var_48_int + var_49_float;
		var_52_int = var_50_int + " ";
		var_53_float = GetByIndex(var_25_cvector, 2);
		var_54_int = var_52_int + var_53_float;
		Trace(var_54_int);
	}
	return 10;
	
}
EMIT "Stack[-1] = 0";


func_38(var_6_bool)
{
	var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_object = Obj();
	SetVisibility(var_6_bool);
	GetPFPolyID(var_9_int);
	var_12_bool = var_9_int != (int)-1;
	if(var_12_bool != 0) {
		GetMainOutdoorScene(var_10_object);
		var_13_bool = var_6_bool;
		if(var_13_bool != 0) {
			var_16_int = var_9_int & (int)1016;
			var_17_int = "Blocking polygons: " + var_16_int;
			Trace(var_17_int);
			@@var_10_object:BlockPolygons(var_9_int, (int)1016);
		} else {
			@@var_10_object:UnblockPolygons(var_9_int, (int)1016);
		}
		var_10_object = 0;
	}
	return 4;
	
}


func_116(var_0_object)
{
	var_1_object = var_0_object;
	if(var_1_object != 0) {
		@@@var_0_object:Remove();
		var_0_object = 0;
	}
	return 0;
}


func_122(var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0);
	GetPosition(var_32_cvector);
	var_32_cvector = var_30_cvector;
	return 2;
}


func_28(var_1_bool)
{
	var_2_float = 0; var_3_float = 0;
	GetGameTime(var_3_float);
	var_5_bool = var_3_float > (int)198;
	if(var_5_bool != 0) {
		var_1_bool = 1;
		return 2;
	}
	var_1_bool = 0;
	return 2;
}


