// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:

maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		object var_9_object; int var_10_int;
		object var_13_object;
		func_1334(var_13_object);
		object var_11_object;
		var_13_object = var_11_object;
		var_17_object = GlobalVars[1];
		object var_18_object;
		func_1796(var_18_object);
		var_18_object = var_17_object;
		GlobalVars[1] = var_17_object;
		var_21_object = GlobalVars[3];
		object var_22_object;
		func_1796(var_22_object);
		var_22_object = var_21_object;
		GlobalVars[3] = var_21_object;
		var_23_object = GlobalVars[5];
		object var_24_object;
		func_1796(var_24_object);
		var_24_object = var_23_object;
		GlobalVars[5] = var_23_object;
		var_25_object = GlobalVars[7];
		object var_26_object;
		func_1796(var_26_object);
		var_26_object = var_25_object;
		GlobalVars[7] = var_25_object;
		var_27_object = GlobalVars[9];
		object var_28_object;
		func_1796(var_28_object);
		var_28_object = var_27_object;
		GlobalVars[9] = var_27_object;
		var_29_object = GlobalVars[0];
		object var_30_object; object var_31_object; object var_33_object;
		var_11_object = var_31_object;
		var_34_object = GlobalVars[1];
		var_34_object = var_33_object;
		func_1633(var_30_object, var_31_object, 0, var_33_object);
		var_30_object = var_29_object;
		GlobalVars[0] = var_29_object;
		var_50_object = GlobalVars[2];
		object var_51_object; object var_52_object; object var_54_object;
		var_11_object = var_52_object;
		var_55_object = GlobalVars[3];
		var_55_object = var_54_object;
		func_1633(var_51_object, var_52_object, 1, var_54_object);
		var_51_object = var_50_object;
		GlobalVars[2] = var_50_object;
		var_56_object = GlobalVars[4];
		object var_57_object; object var_58_object; object var_60_object;
		var_11_object = var_58_object;
		var_61_object = GlobalVars[5];
		var_61_object = var_60_object;
		func_1633(var_57_object, var_58_object, 2, var_60_object);
		var_57_object = var_56_object;
		GlobalVars[4] = var_56_object;
		var_62_object = GlobalVars[6];
		object var_63_object; object var_64_object; object var_66_object;
		var_11_object = var_64_object;
		var_67_object = GlobalVars[7];
		var_67_object = var_66_object;
		func_1633(var_63_object, var_64_object, 3, var_66_object);
		var_63_object = var_62_object;
		GlobalVars[6] = var_62_object;
		var_68_object = GlobalVars[8];
		object var_69_object; object var_70_object; object var_72_object;
		var_11_object = var_70_object;
		var_73_object = GlobalVars[9];
		var_73_object = var_72_object;
		func_1633(var_69_object, var_70_object, 4, var_72_object);
		var_69_object = var_68_object;
		GlobalVars[8] = var_68_object;
		var_74_object = GlobalVars[10];
		object var_75_object; object var_76_object;
		var_11_object = var_76_object;
		func_1658(var_75_object, var_76_object, 0);
		var_75_object = var_74_object;
		GlobalVars[10] = var_74_object;
		var_89_object = GlobalVars[11];
		object var_90_object; object var_91_object;
		var_11_object = var_91_object;
		func_1658(var_90_object, var_91_object, 1);
		var_90_object = var_89_object;
		GlobalVars[11] = var_89_object;
		var_93_object = GlobalVars[12];
		object var_94_object; object var_95_object;
		var_11_object = var_95_object;
		func_1658(var_94_object, var_95_object, 2);
		var_94_object = var_93_object;
		GlobalVars[12] = var_93_object;
		var_97_object = GlobalVars[13];
		object var_98_object; object var_99_object;
		var_11_object = var_99_object;
		func_1658(var_98_object, var_99_object, 3);
		var_98_object = var_97_object;
		GlobalVars[13] = var_97_object;
		var_101_object = GlobalVars[14];
		object var_102_object; object var_103_object;
		var_11_object = var_103_object;
		func_1658(var_102_object, var_103_object, 4);
		var_102_object = var_101_object;
		GlobalVars[14] = var_101_object;
		int var_12_int = 0;
	
		while(var_12_int < 5) {
			var_11_object->RemoveAllItems(var_12_int);
		}
	
		var_11_object->SelectWeapon();
		@SensePlayerOnly(true);
		@Sleep(1.5);
	
		for(;;) {
			object var_110_object;
			func_165(var_8_bool, var_9_object, var_10_int, var_110_object, (var_12_int + 1), var_110_object, true, 180.0);
			@Sleep(1);
		}
	}
	EMIT "Return(); Pop(4)";
	EMIT "Stack[-2] = 0";

}


task task_1
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int)
	{
		if(var_9_int == 1) {
			func_1873(var_1_int);
		} else {
			int var_17_int;
			func_1034(var_8_bool, var_17_int, var_17_int);
		}
	
	}

	// @pe
	void OnSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool = false;
		if(var_1_int == var_9_object) {
			if(!var_2_int) //@nz
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			var_2_int = true;
			object var_13_object;
			var_9_object = var_13_object;
			func_1710(var_13_object);
		}
	}

	// @pe
	void OnStopSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool = false;
		if(var_1_int == var_9_object) {
			if(var_2_int != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		@RequestClearPath(var_9_object);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		func_890(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1932();
	}

}


task task_2
{
	// @pe
	void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, string var_10_string)
	{
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
	}

}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
{
	object var_13_object;
	var_9_object = var_13_object;
	int var_14_int;
	var_10_int = var_14_int;
	float var_15_float;
	var_11_float = var_15_float;
	func_1540(var_13_object, var_14_int, var_15_float);
}


// @pe
void OnHit2(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float, cvector var_13_cvector, cvector var_14_cvector)
{
	object var_15_object;
	var_9_object = var_15_object;
	int var_16_int;
	var_10_int = var_16_int;
	float var_17_float;
	var_11_float = var_17_float;
	cvector var_18_cvector;
	var_13_cvector = var_18_cvector;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	func_1608(var_17_float, var_18_cvector, var_19_cvector);
}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, string var_10_string)
{
	float var_12_float;
	if(var_10_string == "health") {
		@GetProperty("health", var_12_float);
		if(var_12_float <= 0)
			@SignalDeath(var_9_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_1893(var_10_object);
}


// @pe
void func_1281(string var_38_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_39_string;
	var_38_string = var_39_string;
	func_1721(var_39_string);
	@PlayAnimation("all", var_38_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_38_string);
	@RemoveEnvelope();
}


void func_1796(object var_18_object)
{
	object var_20_object;
	@CreateIntVector(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_1540(object var_13_object, int var_14_int, float var_15_float)
{
	cvector var_25_cvector; object var_26_object; int var_27_int; bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	bool var_34_bool = false;
	bool var_35_bool = false;
	if(var_13_object != 0) {
		if(var_14_int != 4)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		if(var_14_int != 5)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		cvector var_41_cvector; cvector var_42_cvector;
		cvector var_43_cvector; object var_44_object;
		var_13_object = var_44_object;
		func_1327(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1768(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1602:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1496(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1602;
	int var_32_int;
	@irand(var_32_int, var_31_int);
	cvector var_33_cvector;
	var_26_object->get(var_33_cvector, var_32_int);
	object var_58_object; int var_59_int; float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
	var_13_object = var_58_object;
	var_14_int = var_59_int;
	var_15_float = var_60_float;
	var_33_cvector = var_61_cvector;
	var_62_cvector = -var_25_cvector;
	func_1608(var_60_float, var_61_cvector, var_62_cvector);
}


void func_775(int var_2_int, int var_5_int)
{
	int var_453_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_452_float;
	@rand(var_452_float);
	float var_459_float;
	func_825(var_459_float);
	if(var_452_float < var_459_float) {
		@irand(var_453_int, var_2_int);
		@Speak("attack" + (var_453_int + 1));
		int var_464_int;
		func_823(var_464_int);
		var_5_int = var_464_int;
	}
}


void func_394(int var_1_int, int var_2_int, float var_4_float)
{
	bool var_138_bool; bool var_139_bool; cvector var_140_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_138_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_138_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_139_bool, ("attack" + (var_2_int + 1)));
			if(!var_139_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_140_cvector, "all", "bjump");
		var_154_float = GetByIndex(var_140_cvector, 2);
		var_4_float = -var_154_float;

	}
}


// @pe
void func_1034(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_1072(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1802(object var_45_object)
{
	object var_47_object;
	@CreateObjectVector(var_47_object);
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_1678(object var_106_object, int var_107_int, object var_108_object, object var_109_object, object var_110_object)
{
	object var_123_object; int var_124_int; bool var_125_bool; int var_127_int;
	var_106_object->RemoveAllItems(var_107_int);
	int var_121_int;
	var_108_object->size(var_121_int);
	int var_122_int = 0;
	
	while(var_122_int < var_121_int) {
		var_108_object->get(var_123_object, var_122_int);
		var_109_object->get(var_124_int, var_122_int);
		var_106_object->AddItem(var_125_bool, var_123_object, var_107_int, var_124_int);
		var_123_object = null;
		var_122_int += 1;
	}
	
	var_110_object->size(var_121_int);
	int var_126_int = 0;
	
	while(var_126_int < var_121_int) {
		var_110_object->get(var_127_int, var_126_int);
		var_106_object->SelectItem(var_127_int, true, var_107_int);
		var_126_int += 1;
	}
	
}


void func_1808(float var_538_float)
{
	object var_540_object;
	@CreateFloatVector(var_540_object);
	var_540_object->add(var_538_float);
	if(var_538_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_540_object);
}
EMIT "Stack[-1] = 0";


void func_1431(bool var_186_bool, object var_187_object)
{
	bool var_189_bool;
	var_187_object->IsDead(var_189_bool);
	var_189_bool = var_186_bool;
}


void func_1436(bool var_175_bool, object var_176_object)
{
	if(var_176_object == null) {
		var_175_bool = false;
		return 4;
	}
	bool var_182_bool = false;
	var_185_bool = IsFuncExist(var_176_object, "IsDead", 1);
	if(var_185_bool != 0) {
		bool var_186_bool; object var_187_object;
		var_176_object = var_187_object;
		func_1431(var_186_bool, var_187_object);
		if(var_186_bool != 0)
			var_182_bool = true;
	}
	if(var_182_bool != 0) {
		var_175_bool = false;
		return 4;
	}
	object var_179_object;
	@GetScene(var_179_object);
	if(var_179_object == null) {
		var_175_bool = false;
		return 4;
	}
	object var_180_object;
	var_176_object->GetScene(var_180_object);
	if(var_179_object != var_180_object) {
		var_175_bool = false;
		return 4;
	}
	var_175_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_159(float var_479_float)
{
	var_479_float = 0.25;
}


void func_1056(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1825(bool var_185_bool, string var_186_string, string var_187_string)
{
	object var_189_object;
	@FindActor(var_189_object, var_186_string);
	if(var_189_object == null)
		var_185_bool = false;
	@Trigger(var_189_object, var_187_string);
	var_185_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_162(int var_486_int)
{
	var_486_int = 0;
}


void func_675(object var_0_object, bool var_385_bool)
{
	cvector var_391_cvector; cvector var_392_cvector;
	bool var_396_bool;
	func_1472(var_396_bool, var_0_object);
	if(!var_396_bool) { //@nz
		var_385_bool = false;
		return 10;
	}
	bool var_399_bool;
	float var_395_float;
	func_764(var_395_float, var_399_bool);
	if(var_399_bool != 0) {
		var_0_object->GetPFPosition(var_391_cvector); //@t
		@GetPFPosition(var_392_cvector);
		var_0_object->GetAttackDistance(var_395_float); //@t
		var_385_bool = ((var_391_cvector - var_392_cvector) | (var_391_cvector - var_392_cvector)) <= ((var_395_float + 50) * (var_395_float + 50));
		return 10;
	}
	var_385_bool = false;
}


void func_932(object var_0_object, int var_1_int, bool var_242_bool, object var_243_object, float var_244_float, float var_245_float, bool var_246_bool, bool var_247_bool)
{
	bool var_256_bool; object var_258_object; cvector var_259_cvector; cvector var_260_cvector; float var_262_float; object var_263_object;
	var_0_object = false;
	var_1_int = var_243_object;
	bool var_257_bool;
	var_247_bool = var_257_bool;
	
	for(;;) {
		bool var_264_bool; object var_265_object;
		var_243_object = var_265_object;
		func_1072(var_264_bool, var_265_object);
		if(!var_264_bool) { //@nz
			var_242_bool = false;
			return 16;
		}
		var_243_object->GetPosition(var_259_cvector);
		@GetPosition(var_260_cvector);
		var_262_float = (var_259_cvector - var_260_cvector) | (var_259_cvector - var_260_cvector);
		bool var_269_bool = false;
		if(var_245_float > 0) {
			if(var_262_float > (var_245_float * var_245_float))
				var_269_bool = true;
		}
		if(var_269_bool != 0) {
			@Stop();
			var_242_bool = false;
			return 16;
		}
		if(var_262_float > (var_244_float * var_244_float)) {
			var_243_object->GetPFPosition(var_259_cvector);
			@FindPathTo(var_263_object, var_259_cvector);
			if(var_263_object != null) {
				var_263_object = var_258_object;
				var_263_object = null;
			}
			if(var_258_object != null) {
				if(var_257_bool == 0) goto Label_985;
				var_257_bool = false;
				@RotatePath(var_258_object, var_256_bool);
				if(!var_256_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_282_string;
						func_1079(var_282_string);
						string var_283_string;
						func_1081(var_283_string);
						@FollowPath(var_258_object, var_246_bool, var_256_bool, var_282_string, var_283_string);
						if(!var_256_bool) { //@nz
							if(var_0_object == 0) goto Label_1004;
							var_258_object = null;
						}
					EMIT "GOTO 0x3ed";

					Label_1004:
						} else {
					var_258_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_256_bool);
					if(!var_256_bool) { //@nz
						if(var_0_object != 0) {
							var_258_object = null;
							goto Label_1032;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1032;
		}
			var_263_object = null;
			goto Label_1030;

		Label_1030:
			var_258_object = null;

		}
	Label_1032:
		for(;;) {
			var_242_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_165(object var_0_object, bool var_3_bool, int var_5_int, object var_110_object, bool var_111_bool, float var_112_float, bool var_219_bool, bool var_311_bool)
{
	float var_124_float; cvector var_125_cvector; cvector var_126_cvector; bool var_128_bool; float var_131_float; cvector var_132_cvector; bool var_133_bool; float var_134_float;
	func_394(var_132_cvector, var_133_bool, var_134_float);
	var_5_int = 0;
	var_159_bool = IsFuncExist(var_110_object, "@GetAttackDistance", 1);
	if(var_159_bool != 0) {
		var_110_object->GetAttackDistance(var_124_float);
		var_124_float += 50;
	} else {
						var_112_float = var_124_float;
	}
	if(var_124_float >= 150)
		var_124_float = 150;
	var_3_bool = false;
	var_0_object = var_110_object;
	bool var_127_bool;
	@IsPlayerActor(var_0_object, var_127_bool);
	if(var_127_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_165_object;
		func_1762(var_165_object);
		@SendPlayerEnemy(var_110_object, var_165_object);
	}
	if(var_111_bool != 0)
		var_128_bool = false;
	else
		var_128_bool = true;

	
Label_205:
	for(;;) {
		bool var_170_bool = false;
		bool var_171_bool;
		func_1472(var_171_bool, var_0_object);
		if(var_171_bool != 0) {
			if(!var_3_bool) //@nz
				var_170_bool = true;
		}
		if(var_170_bool != 0) {
			func_807(var_134_float);
			var_0_object->GetPFPosition(var_125_cvector); //@t
			@GetPFPosition(var_126_cvector);
			var_131_float = (var_125_cvector - var_126_cvector) | (var_125_cvector - var_126_cvector);
			if(var_131_float >= ((400.0 + var_124_float) * (400.0 + var_124_float))) {
				bool var_213_bool; float var_215_float;
				var_124_float = var_215_float;
				TaskCall(1);
				func_827(var_221_bool, var_213_bool, var_0_object, var_215_float, 10000.0, true, false);
				TaskReturn();
				if(!var_219_bool) { //@nz
				} else {
					var_128_bool = false;
			} else {
			if(var_131_float >= (var_112_float * var_112_float)) {
				var_0_object->GetPFPosition(var_132_cvector); //@t
				@CanReachByPF(var_133_bool, var_132_cvector);
				if(!var_133_bool) { //@nz
					bool var_305_bool; float var_307_float;
					var_124_float = var_307_float;
					TaskCall(1);
					func_827(var_313_bool, var_305_bool, var_0_object, var_307_float, 10000.0, true, false);
					TaskReturn();
					if(!var_311_bool) { //@nz
						goto Label_377;
					}
					var_128_bool = false;
					goto Label_205;
				}
				if(!var_128_bool) { //@nz
					func_1622(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_807(var_134_float);
					@StopAsync();
					var_128_bool = true;
					bool var_327_bool;
					func_1472(var_327_bool, var_0_object);
					if(!var_327_bool) { //@nz
						goto Label_377;
					}
				}
				@rand(var_134_float);
				bool var_330_bool;
				var_332_bool = var_134_float < 0.25;
				if(var_332_bool != 1) {
					bool var_333_bool;
					func_764(true, var_333_bool);
					if(var_333_bool != 1)
						var_330_bool = false;
				}
				if(var_330_bool != 0) {
					@Face(var_0_object);
					func_814();
					@PlayAnimation("all", "attack_stay");
					bool var_370_bool; float var_371_float;
					func_632(var_134_float, var_370_bool, var_371_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_807(var_134_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_592_bool;
					func_764(var_134_float, var_592_bool);
					var_593_bool = !var_592_bool; //@nz
					if(var_593_bool == 0) goto Label_367;
					bool var_594_bool;
					func_1472(var_594_bool, var_0_object);
					if(!var_594_bool) { //@nz
						goto Label_377;
					}
					var_0_object->GetPFPosition(var_125_cvector); //@t
					@GetPFPosition(var_126_cvector);
					if(!(((var_125_cvector - var_126_cvector) | (var_125_cvector - var_126_cvector)) < (var_371_float * var_371_float))) goto Label_367;
					bool var_599_bool; float var_600_float;
					var_112_float = var_600_float;
					func_468(var_133_bool, var_134_float, var_599_bool, var_600_float);
					var_601_bool = !var_599_bool; //@nz
					if(var_601_bool == 0) goto Label_367;
					goto Label_377;
			}
				bool var_602_bool; float var_603_float;
				var_112_float = var_603_float;
				func_468(var_133_bool, var_134_float, var_602_bool, var_603_float);
				if(!var_602_bool) { //@nz
					goto Label_377;
				}
				var_128_bool = true;

			}
		Label_367:
			goto Label_376;
			}
			Label_376:
			}
		}
	Label_377:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_127_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1190(object var_16_object)
{
	cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; cvector var_30_cvector; string var_31_string; object var_32_object; bool var_33_bool; bool var_34_bool; float var_35_float; cvector var_36_cvector;
	if(var_16_object == null) {
		func_1281("fdie");
	} else {
		var_16_object->GetPosition(var_27_cvector);
		@GetPosition(var_28_cvector);
		@GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_70_float = GetByIndex(var_30_cvector, 0);
		var_71_float = GetByIndex(var_29_cvector, 0);
		var_73_float = GetByIndex(var_30_cvector, 2);
		var_74_float = GetByIndex(var_29_cvector, 2);
		if(((var_70_float * var_71_float) + (var_73_float * var_74_float)) >= 0)
			var_31_string = "fdie";
		else
			var_31_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_16_object = var_32_object;
		var_81_bool = IsFuncExist(var_16_object, "GetScriptProperty", 2);
		if(var_81_bool != 0) {
			var_16_object->HasScriptProperty(var_33_bool, "Owner");
			if(var_33_bool != 0) {
				var_16_object->GetScriptProperty(var_32_object, "Owner");
				if(var_32_object == null)
					var_16_object = var_32_object;
			}
		}
		var_88_bool = IsFuncExist(var_32_object, "@GetEyesHeight", 1);
		if(var_88_bool != 0) {
			var_32_object->GetEyesHeight(var_35_float);
			var_36_cvector = [0.0, 0.0, 0.0];
			var_89_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_89_float;
			SetByIndex(var_36_cvector, 1) = var_89_float;
			@LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = true;
		} else {
			var_34_bool = false;

		}
		string var_91_string;
		var_31_string = var_91_string;
		func_1721(var_91_string);
		@PlayAnimation("all", var_31_string);
		@WaitForAnimEnd();
		if(var_34_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_31_string);
		@RemoveEnvelope();
		var_32_object = null;
	}
	
}


void func_807(object var_0_object)
{
	func_1873(var_0_object);
}


// @pe
void func_1313(string var_510_string, int var_511_int)
{
	if(var_511_int == 2) {
		var_510_string = "fire";
		return 0;
	EMIT "GOTO 0x52d";
	}
	if(var_511_int == 1) {
		var_510_string = "bullet";
		return 0;
	}
	var_510_string = "phys";
}


void func_812(int var_547_int)
{
	var_547_int = 0;
}


void func_429(object var_0_object, float var_468_float, int var_469_int)
{
	object var_473_object; float var_474_float; float var_475_float;
	@GetVictim((var_468_float * 0.9), var_473_object);
	@ReportAttack(var_0_object);
	if(var_473_object == var_0_object) {
		float var_479_float; object var_480_object; int var_481_int;
		var_473_object = var_480_object;
		var_469_int = var_481_int;
		func_159(var_481_int);
		var_479_float = var_474_float;
		float var_482_float; object var_483_object; float var_484_float; int var_485_int;
		var_473_object = var_483_object;
		int var_486_int; object var_487_object; int var_488_int;
		var_473_object = var_487_object;
		var_469_int = var_488_int;
		func_162(var_488_int);
		var_486_int = var_485_int;
		func_1358(var_482_float, var_483_object, var_484_float, var_485_int);
		var_482_float = var_475_float;
		int var_547_int;
		func_812(var_547_int);
		@ReportHit(var_0_object, var_547_int, var_475_float, var_484_float);
		object var_548_object; float var_549_float;
		var_473_object = var_548_object;
		var_475_float = var_549_float;
		func_819();
	}
}
EMIT "Stack[-3] = 0";


void func_814(void)
{
	func_1721("attack_stay");
}


void func_1327(cvector var_413_cvector, object var_414_object)
{
	cvector var_417_cvector;
	@GetPosition(var_417_cvector);
	cvector var_418_cvector;
	var_414_object->GetPosition(var_418_cvector);
	var_413_cvector = var_418_cvector - var_417_cvector;
}


void func_1710(object var_230_object)
{
	float var_233_float;
	var_230_object->GetEyesHeight(var_233_float);
	cvector var_234_cvector = [0.0, 0.0, 0.0];
	var_235_float = GetByIndex(var_234_cvector, 1);
	var_233_float = var_235_float;
	SetByIndex(var_234_cvector, 1) = var_235_float;
	@LookAsync(var_230_object, "head", var_234_cvector);
}


// @pe
void func_1072(bool var_264_bool, object var_265_object)
{
	object var_267_object;
	var_265_object = var_267_object;
	bool var_266_bool;
	func_1472(var_266_bool, var_267_object);
	var_266_bool = var_264_bool;
}


void func_1837(object var_165_object, string var_166_string, string var_167_string)
{
	if(!var_165_object) { //@nz
	}
	object var_172_object;
	@GetSceneByName(var_172_object, var_166_string);
	bool var_173_bool;
	cvector var_174_cvector;
	cvector var_175_cvector;
	var_172_object->GetLocator(var_167_string, var_173_bool, var_174_cvector, var_175_cvector);
	if(!var_173_bool) //@nz
		@Trace(((("Teleport location '" + var_167_string) + "' not found in scene '") + var_166_string) + "'");
	else
		@Teleport(var_165_object, var_172_object, var_174_cvector, var_175_cvector);
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_819(void)
{
}


void func_821(bool var_572_bool)
{
	var_572_bool = true;
}


void func_1334(object var_13_object)
{
	object var_15_object;
	@FindActor(var_15_object, "player");
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_823(int var_464_int)
{
	var_464_int = 1;
}


void func_1079(string var_282_string)
{
	var_282_string = "walk";
}


void func_825(float var_459_float)
{
	var_459_float = 0.5;
}


void func_1721(string var_339_string)
{
	bool var_348_bool; int var_349_int; bool var_350_bool; int var_351_int; bool var_352_bool; float var_353_float; cvector var_354_cvector; cvector var_355_cvector;
	@IsExisting3DSound(var_348_bool, var_339_string);
	if(!var_348_bool) { //@nz
		var_349_int = 0;

		for(;;) {
			@IsExisting3DSound(var_350_bool, (var_339_string + (var_349_int + 1)));
			if(!var_350_bool) { //@nz
				break;
			Label_1741:
				@irand(var_351_int, var_349_int);
				var_339_string += (var_351_int + 1);
	}
			@Is3DSoundLoaded(var_352_bool, var_339_string);
			if(var_352_bool != 0) {
				@GetEyesHeight(var_353_float);
				@GetDirection(var_354_cvector);
				var_355_cvector = var_354_cvector * 50;
				var_366_float = GetByIndex(var_355_cvector, 1);
				SetByIndex(var_355_cvector, 1) = (var_366_float + var_353_float);
				@PlayGlobalSound(var_339_string, var_355_cvector);
			}
		}
		var_349_int += 1;
	}
	var_361_bool = !var_349_int; //@nz
	if(var_361_bool == 0) goto Label_1741;
}


void func_827(int var_2_int, bool var_213_bool, object var_214_object, float var_215_float, float var_216_float, bool var_217_bool, bool var_218_bool)
{
	object var_226_object;
	func_1873(var_226_object);
	@SetTimer(1, 5);
	bool var_224_bool;
	@CanSee(var_224_bool, var_226_object);
	if(var_224_bool != 0) {
		var_2_int = true;
		object var_230_object;
		var_214_object = var_230_object;
		func_1710(var_230_object);
	} else {
		var_2_int = false;
	}
	bool var_237_bool; object var_238_object;
	func_1341(var_237_bool, var_238_object);
	if(var_237_bool != 0) {
		object var_241_object;
		func_1762(var_241_object);
		@SendPlayerEnemy(var_238_object, var_241_object);
	}
	bool var_242_bool; object var_243_object; float var_244_float; float var_245_float; bool var_246_bool; bool var_247_bool;
	var_214_object = var_243_object;
	var_215_float = var_244_float;
	var_216_float = var_245_float;
	var_217_bool = var_246_bool;
	var_218_bool = var_247_bool;
	bool var_225_bool;
	func_932(var_224_bool, var_225_bool, var_242_bool, var_243_object, var_244_float, var_245_float, var_246_bool, var_247_bool);
	var_242_bool = var_225_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_225_bool = var_213_bool;
	
}


void func_1081(string var_283_string)
{
	var_283_string = "run";
}


void func_1341(bool var_237_bool, object var_238_object)
{
	bool var_240_bool;
	@IsPlayerActor(var_238_object, var_240_bool);
	var_240_bool = var_237_bool;
}


void func_1083(object var_11_object)
{
	object var_16_object;
	var_11_object = var_16_object;
	func_1190(var_16_object);
	object var_14_object;
	@GetSceneByName(var_14_object, "boiny_arena");
	@RemoveScene(var_14_object);
	bool var_97_bool;
	func_1861(var_97_bool, "NPC_Starshina");
	object var_102_object;
	func_1334(var_102_object);
	object var_15_object;
	var_102_object = var_15_object;
	object var_106_object; object var_108_object; object var_109_object; object var_110_object;
	var_15_object = var_106_object;
	var_111_object = GlobalVars[0];
	var_111_object = var_108_object;
	var_112_object = GlobalVars[1];
	var_112_object = var_109_object;
	var_113_object = GlobalVars[10];
	var_113_object = var_110_object;
	func_1678(var_106_object, 0, var_108_object, var_109_object, var_110_object);
	object var_133_object; object var_135_object; object var_136_object; object var_137_object;
	var_15_object = var_133_object;
	var_138_object = GlobalVars[2];
	var_138_object = var_135_object;
	var_139_object = GlobalVars[3];
	var_139_object = var_136_object;
	var_140_object = GlobalVars[11];
	var_140_object = var_137_object;
	func_1678(var_133_object, 1, var_135_object, var_136_object, var_137_object);
	object var_141_object; object var_143_object; object var_144_object; object var_145_object;
	var_15_object = var_141_object;
	var_146_object = GlobalVars[4];
	var_146_object = var_143_object;
	var_147_object = GlobalVars[5];
	var_147_object = var_144_object;
	var_148_object = GlobalVars[12];
	var_148_object = var_145_object;
	func_1678(var_141_object, 2, var_143_object, var_144_object, var_145_object);
	object var_149_object; object var_151_object; object var_152_object; object var_153_object;
	var_15_object = var_149_object;
	var_154_object = GlobalVars[6];
	var_154_object = var_151_object;
	var_155_object = GlobalVars[7];
	var_155_object = var_152_object;
	var_156_object = GlobalVars[13];
	var_156_object = var_153_object;
	func_1678(var_149_object, 3, var_151_object, var_152_object, var_153_object);
	object var_157_object; object var_159_object; object var_160_object; object var_161_object;
	var_162_object = GlobalVars[8];
	var_162_object = var_159_object;
	var_163_object = GlobalVars[9];
	var_163_object = var_160_object;
	var_164_object = GlobalVars[14];
	var_164_object = var_161_object;
	func_1678(var_157_object, 4, var_159_object, var_160_object, var_161_object);
	var_157_object->SelectWeapon();
	object var_165_object;
	var_15_object = var_165_object;
	func_1837(var_165_object, "boiny", "pt_Starshina");
	bool var_185_bool;
	func_1825(var_185_bool, "quest_b11_01", "fight_win");
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_703(bool var_383_bool)
{
	bool var_384_bool = false;
	bool var_385_bool;
	func_675(var_384_bool, var_385_bool);
	if(var_385_bool != 0) {
		bool var_402_bool;
		func_719(var_383_bool, var_384_bool, var_402_bool);
		if(var_402_bool != 0)
			var_384_bool = true;
	}
	if(var_384_bool != 0) {
		var_383_bool = true;
		return 0;
	}
	var_383_bool = false;
}


void func_1472(bool var_171_bool, object var_172_object)
{
	object var_176_object;
	var_172_object = var_176_object;
	bool var_175_bool;
	func_1436(var_175_bool, var_176_object);
	if(!var_175_bool) { //@nz
		var_171_bool = false;
		return 2;
	}
	bool var_193_bool; object var_194_object;
	func_1346(var_193_bool, var_194_object, "noaccess");
	if(!var_193_bool) { //@nz
		var_171_bool = true;
		return 2;
	}
	int var_174_int;
	var_194_object->GetProperty("noaccess", var_174_int);
	var_171_bool = var_174_int == 0;
}


void func_1346(bool var_193_bool, object var_194_object, string var_195_string)
{
	var_200_bool = IsFuncExist(var_194_object, "HasProperty", 2);
	if(!var_200_bool) { //@nz
		var_193_bool = false;
		return 2;
	}
	bool var_197_bool;
	var_194_object->HasProperty(var_195_string, var_197_bool);
	var_197_bool = var_193_bool;
}


void func_1861(bool var_97_bool, string var_98_string)
{
	object var_100_object;
	@FindActor(var_100_object, var_98_string);
	if(!var_100_object) //@nz
		var_97_bool = false;
	@RemoveActor(var_100_object);
	var_97_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1608(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1496(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1358(float var_482_float, object var_483_object, float var_484_float, int var_485_int)
{
	int var_495_int; int var_497_int;
	object var_502_object;
	var_483_object = var_502_object;
	bool var_501_bool;
	func_1346(var_501_bool, var_502_object, "health");
	if(!var_501_bool) //@nz
		var_482_float = 0.0;
	bool var_505_bool; object var_506_object;
	func_1346(var_505_bool, var_506_object, "armor");
	if(!var_505_bool) //@nz
		var_495_int = 0;
	else
		var_506_object->GetProperty("armor", var_495_int);
	string var_510_string; int var_511_int;
	var_485_int = var_511_int;
	func_1313(var_510_string, var_511_int);
	string var_496_string = "armor_" + var_510_string;
	bool var_516_bool; object var_517_object; string var_518_string;
	var_483_object = var_517_object;
	func_1346(var_516_bool, var_517_object, var_518_string);
	if(!var_516_bool) //@nz
		var_497_int = 0;
	else
		var_483_object->GetProperty(var_518_string, var_497_int);

	float var_520_float;
	func_1778(var_520_float, ((var_495_int + var_497_int) / 100.0), (float)1);
	float var_498_float;
	var_520_float = var_498_float;
	float var_499_float;
	var_483_object->GetProperty("health", var_499_float);
	float var_500_float = var_484_float * (1 - var_498_float);
	float var_530_float;
	func_1785(var_530_float, (var_499_float - var_500_float), (float)0, (float)1);
	var_483_object->SetProperty("health", var_530_float);
	bool var_536_bool; object var_537_object;
	var_483_object = var_537_object;
	func_1341(var_536_bool, var_537_object);
	if(var_536_bool != 0) {
		float var_538_float = -var_500_float;
		func_1808(var_538_float);
	}
	var_500_float = var_482_float;
	
}


void func_719(object var_0_object, float var_4_float, bool var_402_bool)
{
	object var_408_object; float var_410_float; cvector var_411_cvector; cvector var_412_cvector;
	@GetScene(var_408_object);
	bool var_409_bool = false;
	
	for(;;) {
		cvector var_413_cvector;
		func_1327(var_413_cvector, var_0_object);
		var_419_int = -var_413_cvector;
		@FindDirLength(var_410_float, var_419_int, var_4_float);
		if(var_410_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_411_cvector); //@t
				@GetPFPosition(var_412_cvector);
				@WaitForAnimEnd();
				func_807(var_412_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_409_bool = true;
				bool var_424_bool;
				func_675(var_412_cvector, var_424_bool);
				var_425_bool = !var_424_bool; //@nz
				if(var_425_bool == 0) goto Label_760;
		}
		for(;;) {
			var_409_bool = var_402_bool;

		}

	Label_760:
	}
}
EMIT "Stack[-5] = 0";


void func_1873(object var_206_object)
{
	bool var_208_bool;
	@IsPlayerActor(var_206_object, var_208_bool);
	if(var_208_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_468(object var_0_object, int var_1_int, bool var_431_bool, float var_432_float)
{
	string var_440_string;
	func_807(var_440_string);
	int var_437_int;
	@irand(var_437_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1882();
	@PlayAnimation("all", ("attack_begin" + (var_437_int + 1)));
	@WaitForAnimEnd();
	int var_439_int;
	func_775(var_439_int, var_440_string);
	bool var_465_bool;
	func_1472(var_465_bool, var_0_object);
	if(!var_465_bool) { //@nz
		@StopAsync();
		var_431_bool = false;
		return 8;
	}
	float var_468_float; int var_469_int;
	var_432_float = var_468_float;
	var_437_int = var_469_int;
	func_429(var_440_string, var_468_float, var_469_int);
	bool var_438_bool;
	@HasAnimation(var_438_bool, "all", ("attack_middle" + var_437_int));
	if(var_438_bool != 0) {
		func_1882();
		@PlayAnimation("all", ("attack_middle" + var_437_int));
		@WaitForAnimEnd();
		func_807(var_440_string);
		bool var_557_bool;
		func_1472(var_557_bool, var_0_object);
		if(!var_557_bool) { //@nz
			@StopAsync();
			var_431_bool = false;
			return 8;
		}
		float var_560_float; int var_561_int;
		var_432_float = var_560_float;
		func_429(var_440_string, var_560_float, var_561_int);
		var_439_int = 1;

		for(;;) {
			var_440_string = (("attack_middle" + var_561_int) + "_") + var_439_int;
			@HasAnimation(var_438_bool, "all", var_440_string);
			if(!var_438_bool) { //@nz
			} else {
				func_1882();
				@PlayAnimation("all", var_440_string);
				@WaitForAnimEnd();
				func_807(var_440_string);
				bool var_583_bool;
				func_1472(var_583_bool, var_0_object);
				if(!var_583_bool) { //@nz
					@StopAsync();
					var_431_bool = false;
					return 8;
				}
				float var_586_float; int var_587_int;
				var_432_float = var_586_float;
				var_437_int = var_587_int;
				func_429(var_440_string, var_586_float, var_587_int);
				var_439_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_437_int));
		bool var_572_bool;
		func_821(var_572_bool);
		if(var_572_bool != 0) {
			bool var_573_bool;
			func_605(var_573_bool, 0.75);
			@StopAsync();
		}
		var_431_bool = true;
		return 8;

	}
}


void func_1622(object var_316_object)
{
	cvector var_320_cvector;
	var_316_object->GetPosition(var_320_cvector);
	cvector var_321_cvector;
	@GetPosition(var_321_cvector);
	cvector var_322_cvector = var_320_cvector - var_321_cvector;
	var_323_float = GetByIndex(var_322_cvector, 0);
	var_324_float = GetByIndex(var_322_cvector, 2);
	@RotateAsync(var_323_float, var_324_float);
}


void func_1496(object var_26_object)
{
	string var_40_string;
	if(var_26_object == null)
		return 14;
	bool var_34_bool;
	@IsDead(var_34_bool);
	if(var_34_bool != 0)
		return 14;
	int var_35_int;
	@GetSecondaryAnimationType(var_35_int);
	if(var_35_int < 0)
		return 14;
	cvector var_36_cvector;
	var_26_object->GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_39_cvector, 0);
	var_46_float = GetByIndex(var_38_cvector, 0);
	var_48_float = GetByIndex(var_39_cvector, 2);
	var_49_float = GetByIndex(var_38_cvector, 2);
	if(((var_45_float * var_46_float) + (var_48_float * var_49_float)) >= 0)
		var_40_string = "fhit";
	else
		var_40_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_40_string + "1"), (var_40_string + "2"), -10);
	
}


void func_1882(void)
{
	object var_444_object;
	@GetScene(var_444_object);
	object var_446_object;
	func_1762(var_446_object);
	@BroadcastMessage("battle", var_446_object, var_444_object);
}
EMIT "Stack[-1] = 0";


void func_605(bool var_573_bool, float var_574_float)
{
	float var_577_float; bool var_578_bool;
	@rand(var_577_float);
	if(var_577_float < var_574_float) {

		for(;;) {
			@IsAnimationPlaying(var_578_bool);
			if(!var_578_bool) { //@nz
			} else {
				bool var_581_bool;
				func_703(var_581_bool);
				if(var_581_bool != 0) {
					var_573_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_573_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_807(var_578_bool);
}


void func_1633(object var_30_object, object var_31_object, int var_32_int, object var_33_object)
{
	object var_43_object; int var_44_int;
	object var_45_object;
	func_1802(var_45_object);
	object var_40_object;
	var_45_object = var_40_object;
	int var_41_int;
	var_31_object->GetItemCount(var_41_int, var_32_int);
	int var_42_int = 0;
	
	while(var_42_int < var_41_int) {
		var_31_object->GetItem(var_43_object, var_42_int, var_32_int);
		var_40_object->add(var_43_object);
		var_31_object->GetItemAmount(var_44_int, var_42_int, var_32_int);
		var_33_object->add(var_44_int);
		var_43_object = null;
		var_42_int += 1;
	}
	
	var_40_object = var_30_object;
}
EMIT "Stack[-5] = 0";


void func_1762(object var_165_object)
{
	object var_167_object;
	@self(var_167_object);
	var_167_object = var_165_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1893(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(2);
	func_1083(var_11_object);
	TaskReturn();
}


void func_1768(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


// @pe
void func_1778(float var_520_float, float var_521_float, float var_522_float)
{
	if(var_521_float < var_522_float)
		var_521_float = var_520_float;
	else
		var_522_float = var_520_float;
	
}


void func_632(object var_0_object, bool var_370_bool, float var_371_float)
{
	bool var_377_bool; cvector var_378_cvector; cvector var_379_cvector; cvector var_380_cvector; float var_381_float;
	
	for(;;) {
		@IsAnimationPlaying(var_377_bool);
		if(!var_377_bool) //@nz
			break;
		bool var_383_bool;
		func_703(var_383_bool);
		if(var_383_bool != 0) {
			var_370_bool = true;
			return 10;
		}
		bool var_426_bool;
		func_1472(var_426_bool, var_0_object);
		if(!var_426_bool) { //@nz
			var_370_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_378_cvector); //@t
		@GetPFPosition(var_379_cvector);
		var_380_cvector = var_378_cvector - var_379_cvector;
		var_381_float = var_380_cvector | var_380_cvector;
		if(var_381_float < (var_371_float * var_371_float)) {
			bool var_431_bool; float var_432_float;
			var_371_float = var_432_float;
			func_468(var_380_cvector, var_381_float, var_431_bool, var_432_float);
			var_370_bool = true;
			return 10;
		}
		@sync();
	}
	func_807(var_381_float);
	var_370_bool = false;
}


// @pe
void func_1785(float var_530_float, float var_531_float, float var_532_float, float var_533_float)
{
	if(var_531_float < var_532_float) {
		var_532_float = var_530_float;
		return 0;
	}
	if(var_531_float > var_533_float) {
		var_533_float = var_530_float;
		return 0;
	}
	var_531_float = var_530_float;
}


void func_1658(object var_75_object, object var_76_object, int var_77_int)
{
	object var_82_object; bool var_85_bool;
	@CreateIntVector(var_82_object);
	int var_83_int;
	var_76_object->GetItemCount(var_83_int, var_77_int);
	int var_84_int = 0;
	
	while(var_84_int < var_83_int) {
		var_76_object->IsItemSelected(var_85_bool, var_84_int, var_77_int);
		if(var_85_bool != 0)
			var_82_object->add(var_84_int);
		var_84_int += 1;
	}
	
	var_82_object = var_75_object;
}
EMIT "Stack[-4] = 0";


void func_764(object var_0_object, bool var_333_bool)
{
	bool var_335_bool;
	var_338_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_338_bool != 0) {
		var_0_object->IsAttacking(var_335_bool); //@t
		var_335_bool = var_333_bool;
	}
	var_333_bool = false;
}


void func_890(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1056(var_9_object);
}


