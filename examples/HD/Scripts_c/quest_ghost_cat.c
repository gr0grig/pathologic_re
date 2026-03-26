// @IMPORTS: SetTimer/2,Hold/0,RemoveActor/1,GetVariable/2,UnlockAchievement/1,FindActor/2,self/1,GetGameTime/1
// @STRINGS: W:d1GhostCatHDPathologic|W:ACHIEVEMENT_NOTICE|A:GetPosition|W:player
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_7: op=0x8 vars=int

task_0_event_7(var_0_object, var_1_int)
{
	var_2_object = Obj(); var_3_int = 0; var_4_int = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_int = 0;
	func_112(Obj());
	var_14_object = var_8_object;
	func_130((int)0);
	var_18_int = var_9_int;
	func_139((int)0);
	var_24_int = var_10_int;
	var_29_bool = 0;
	var_29_bool = 0;
	var_31_bool = var_9_int >= (int)2;
	if(var_31_bool != 0) {
		var_33_bool = var_10_int > (int)2;
		if(var_33_bool != 0) {
			var_29_bool = 1;
		}
	}
	if(var_29_bool != 0) {
		var_34_object = Obj();
		func_119(var_34_object);
		RemoveActor(var_34_object);
		return 12;
	}
	var_37_bool = var_8_object == 0; //@ne
	if(var_37_bool != 0) {
		return 12;
	}
	var_38_cvector = CVector(0,0,0); var_39_object = Obj();
	var_8_object = var_39_object;
	func_107(var_38_cvector, var_39_object);
	var_38_cvector = var_11_cvector;
	var_42_float = GetByIndex(var_12_cvector, 0);
	SetByIndex(var_12_cvector, 0) = (float)17738;
	var_43_float = GetByIndex(var_12_cvector, 1);
	SetByIndex(var_12_cvector, 1) = (float)705;
	var_44_float = GetByIndex(var_12_cvector, 2);
	SetByIndex(var_12_cvector, 2) = (float)2229;
	var_13_int = 0;
	GetVariable("d1GhostCatHDPathologic", var_13_int);
	var_46_bool = 0;
	var_46_bool = 0;
	var_48_bool = var_13_int != (int)0;
	if(var_48_bool != 0) {
		var_49_bool = 0;
		var_49_bool = 1;
		var_50_bool = 0;
		var_50_bool = 0;
		var_52_bool = var_9_int == (int)1;
		if(var_52_bool != 0) {
			var_54_bool = var_10_int >= (int)21;
			if(var_54_bool != 0) {
				var_50_bool = 1;
			}
		}
		if(var_50_bool != 1) {
			var_55_bool = 0;
			var_55_bool = 0;
			var_57_bool = var_9_int == (int)2;
			if(var_57_bool != 0) {
				var_59_bool = var_10_int <= (int)2;
				if(var_59_bool != 0) {
					var_55_bool = 1;
				}
			}
			if(var_55_bool != 1) {
				var_49_bool = 0;
			}
		}
		if(var_49_bool != 0) {
			var_46_bool = 1;
		}
	}
	if(var_46_bool != 0) {
		var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
		var_11_cvector = var_61_cvector;
		var_12_cvector = var_62_cvector;
		func_125(var_60_float, var_61_cvector, var_62_cvector);
		var_67_bool = var_60_float < (int)500;
		if(var_67_bool != 0) {
			UnlockAchievement("ACHIEVEMENT_NOTICE");
			var_69_object = Obj();
			func_119(var_69_object);
			RemoveActor(var_69_object);
		}
	}
	return 12;
}
EMIT "Stack[-6] = 0";


main(var_0_object)
{
	SetTimer((int)111, (int)1);
	
Label_4:
	Hold();
	goto Label_4;
}
EMIT "Return(); Pop(0)";


func_130(var_18_int)
{
	var_19_float = 0; var_20_float = 0;
	GetGameTime(var_20_float);
	var_22_int = 0;
	var_22_int = var_20_float / (int)24;
	var_18_int = (int)1 + var_22_int;
	return 2;
}


func_107(var_38_cvector, var_39_object)
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	@@var_39_object:GetPosition(var_41_cvector);
	var_41_cvector = var_38_cvector;
	return 2;
}


func_139(var_24_int)
{
	var_25_float = 0; var_26_float = 0;
	GetGameTime(var_26_float);
	var_27_int = 0;
	var_26_float = var_27_int;
	var_24_int = var_27_int % (int)24;
	return 2;
}


func_112(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, "player");
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_119(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	self(var_36_object);
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_125(var_60_float, var_61_cvector, var_62_cvector)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	var_64_cvector = var_62_cvector - var_61_cvector;
	var_65_int = var_64_cvector | var_64_cvector;
	var_60_float = sqrt(var_65_int);
	return 2;
}


