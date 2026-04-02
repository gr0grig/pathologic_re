// @GLOBALS: 0:float:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
		bool var_11_bool; float var_12_float;
		@HasProperty("health", var_11_bool);
		if(var_11_bool != 0) {
			@GetProperty("health", var_12_float);
			var_16_float = GlobalVars[0];
			GlobalVars[0] = var_16_float;
		}
		for(;;) {
			func_83(var_11_bool, var_16_float);
		}
	}
	EMIT "Return(); Pop(4)";

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool; object var_11_object;
		func_1217(var_10_bool, var_11_object);
		if(var_10_bool != 0) {
			func_154(var_8_bool, var_11_object);
			object var_53_object;
			var_9_object = var_53_object;
			func_1224(var_53_object);
		}
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool; object var_12_object; string var_13_string;
		func_1251(var_11_bool, var_12_object, var_13_string);
		if(var_11_bool != 0)
			func_154(var_12_object, var_13_string);
		object var_59_object; string var_60_string;
		var_9_bool = var_59_object;
		var_10_object = var_60_string;
		func_1278(var_59_object, var_60_string);
	}

	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool; object var_11_object;
		func_1032(var_10_bool, var_11_object);
		if(!var_10_bool) { //@nz
		}
		func_154(var_8_bool, var_11_object);
		object var_45_object;
		var_9_object = var_45_object;
		func_1234(var_45_object);
	}

	// @pe
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		object var_10_object;
		var_9_object = var_10_object;
		func_1328(var_10_object);
	}

	// @pe
	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		if(var_10_object == "player_shot") {
			func_154(var_9_bool, var_10_object);
			object var_13_object;
			var_9_bool = var_13_object;
			TaskCall(5);
			func_607(var_17_object, var_13_object);
			TaskReturn();
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		@RequestClearPath(var_9_object);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		func_154(var_8_bool, var_9_object);
		object var_10_object;
		var_9_object = var_10_object;
		func_1309();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
	}

}


task task_3
{
	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		object var_12_object;
		var_9_bool = var_12_object;
		string var_13_string;
		var_10_object = var_13_string;
		bool var_11_bool;
		func_1251(var_11_bool, var_12_object, var_13_string);
		if(var_11_bool != 0)
			func_340();
		object var_59_object; string var_60_string;
		var_9_bool = var_59_object;
		var_10_object = var_60_string;
		func_1278(var_59_object, var_60_string);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		func_340();
		object var_10_object;
		var_9_object = var_10_object;
		func_1309();
	}

	// @pe
	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		if(var_10_object == "player_shot") {
			func_340();
			object var_13_object;
			var_9_bool = var_13_object;
			TaskCall(5);
			func_607(var_17_object, var_13_object);
			TaskReturn();
		}
	}

}


task task_4
{
	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		object var_12_object;
		var_9_bool = var_12_object;
		string var_13_string;
		var_10_object = var_13_string;
		bool var_11_bool;
		func_1251(var_11_bool, var_12_object, var_13_string);
		if(var_11_bool != 0)
			func_419();
		object var_61_object; string var_62_string;
		var_9_bool = var_61_object;
		var_10_object = var_62_string;
		func_1278(var_61_object, var_62_string);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		func_419();
		object var_12_object;
		var_9_object = var_12_object;
		func_1309();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		if(var_9_object == 111) {
			@Speak("run");
			func_389();
		} else {
			int var_19_int;
			func_567(var_8_bool, var_19_int, var_19_int);
		}
	
	}

	// @pe
	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		if(var_10_object == "player_shot") {
			func_419();
			object var_15_object;
			var_9_bool = var_15_object;
			TaskCall(5);
			func_607(var_19_object, var_15_object);
			TaskReturn();
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		@RequestClearPath(var_9_object);
	}

}


task task_5
{
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int)
	{
		cvector var_11_cvector; cvector var_12_cvector; cvector var_13_cvector;
		if(var_9_int == 110) {
			bool var_16_bool;
			func_1032(var_16_bool, var_3_bool);
			if(!var_16_bool) { //@nz
				func_675();
			} else {
				@GetPosition(var_12_cvector);
				var_3_bool->GetPosition(var_13_cvector); //@t
				float var_53_float; cvector var_54_cvector; cvector var_55_cvector;
				var_12_cvector = var_54_cvector;
				var_13_cvector = var_55_cvector;
				func_1113(var_53_float, var_54_cvector, var_55_cvector);
				if(!(var_53_float >= 2250000.0)) goto Label_653;
				func_675();
		}
			int var_60_int;
			var_9_int = var_60_int;
			func_800(var_11_cvector, var_12_cvector, var_13_cvector, var_60_int);
		}
	Label_653:
		goto Label_658;
	
	Label_658:
	
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, string var_10_string)
	{
		object var_12_object;
		var_9_object = var_12_object;
		string var_13_string;
		var_10_string = var_13_string;
		bool var_11_bool;
		func_1251(var_11_bool, var_12_object, var_13_string);
		if(var_11_bool != 0)
			func_675();
		object var_61_object; string var_62_string;
		var_9_object = var_61_object;
		var_10_string = var_62_string;
		func_1278(var_61_object, var_62_string);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object)
	{
		func_675();
		object var_12_object;
		var_9_object = var_12_object;
		func_1309();
	}

	// @pe
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object)
	{
		object var_10_object;
		var_9_object = var_10_object;
		func_1328(var_10_object);
	}

}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_1244();
}


void func_1155(object var_19_object, object var_20_object, int var_21_int)
{
	int var_25_int;
	var_20_object->GetItemID(var_25_int);
	int var_26_int;
	@GetInvItemProperty(var_26_int, var_25_int, "Category");
	bool var_27_bool;
	var_19_object->AddItem(var_27_bool, var_20_object, var_26_int, var_21_int);
	if(!var_27_bool) { //@nz
		var_19_object->DropItems(var_20_object, var_21_int);
	} else {
		int var_30_int; int var_31_int;
		var_25_int = var_30_int;
		var_21_int = var_31_int;
		func_1143(var_30_int, var_31_int);
	}
	
}


void func_389(void)
{
	float var_14_float;
	@rand(var_14_float, 10);
	@SetTimer(111, (var_14_float + 10));
}


void func_901(bool var_72_bool, object var_73_object)
{
	bool var_75_bool;
	@IsPlayerActor(var_73_object, var_75_bool);
	var_75_bool = var_72_bool;
}


void func_1032(bool var_25_bool, object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	bool var_29_bool;
	func_996(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_47_bool; object var_48_object;
	func_906(var_47_bool, var_48_object, "noaccess");
	if(!var_47_bool) { //@nz
		var_25_bool = true;
		return 2;
	}
	int var_28_int;
	var_48_object->GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == 0;
}


void func_906(bool var_47_bool, object var_48_object, string var_49_string)
{
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", 2);
	if(!var_54_bool) { //@nz
		var_47_bool = false;
		return 2;
	}
	bool var_51_bool;
	var_48_object->HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
}


void func_142(float var_32_float)
{
	float var_34_float;
	@GetCameraFarDistance(var_34_float);
	var_34_float = var_32_float;
}


void func_399(void)
{
	@KillTimer(111);
}


void func_894(cvector var_117_cvector, object var_118_object)
{
	cvector var_121_cvector;
	@GetPosition(var_121_cvector);
	cvector var_122_cvector;
	var_118_object->GetPosition(var_122_cvector);
	var_117_cvector = var_122_cvector - var_121_cvector;
}


void func_1174(float var_153_float)
{
	object var_155_object;
	@CreateFloatVector(var_155_object);
	var_155_object->add(var_153_float);
	if(var_153_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_155_object);
}
EMIT "Stack[-1] = 0";


void func_918(float var_100_float, object var_101_object, float var_102_float, int var_103_int)
{
	int var_110_int; int var_112_int;
	object var_117_object;
	var_101_object = var_117_object;
	bool var_116_bool;
	func_906(var_116_bool, var_117_object, "health");
	if(!var_116_bool) //@nz
		var_100_float = 0.0;
	bool var_120_bool; object var_121_object;
	func_906(var_120_bool, var_121_object, "armor");
	if(!var_120_bool) //@nz
		var_110_int = 0;
	else
		var_121_object->GetProperty("armor", var_110_int);
	string var_125_string; int var_126_int;
	var_103_int = var_126_int;
	func_875(var_125_string, var_126_int);
	string var_111_string = "armor_" + var_125_string;
	bool var_131_bool; object var_132_object; string var_133_string;
	var_101_object = var_132_object;
	func_906(var_131_bool, var_132_object, var_133_string);
	if(!var_131_bool) //@nz
		var_112_int = 0;
	else
		var_101_object->GetProperty(var_133_string, var_112_int);

	float var_135_float;
	func_1117(var_135_float, ((var_110_int + var_112_int) / 100.0), (float)1);
	float var_113_float;
	var_135_float = var_113_float;
	float var_114_float;
	var_101_object->GetProperty("health", var_114_float);
	float var_115_float = var_102_float * (1 - var_113_float);
	float var_145_float;
	func_1124(var_145_float, (var_114_float - var_115_float), (float)0, (float)1);
	var_101_object->SetProperty("health", var_145_float);
	bool var_151_bool; object var_152_object;
	var_101_object = var_152_object;
	func_901(var_151_bool, var_152_object);
	if(var_151_bool != 0) {
		float var_153_float = -var_115_float;
		func_1174(var_153_float);
	}
	var_115_float = var_100_float;
	
}


void func_154(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1056(string var_14_string)
{
	bool var_23_bool; int var_24_int; bool var_25_bool; int var_26_int; bool var_27_bool; float var_28_float; cvector var_29_cvector; cvector var_30_cvector;
	@IsExisting3DSound(var_23_bool, var_14_string);
	if(!var_23_bool) { //@nz
		var_24_int = 0;

		for(;;) {
			@IsExisting3DSound(var_25_bool, (var_14_string + (var_24_int + 1)));
			if(!var_25_bool) { //@nz
				break;
			Label_1076:
				@irand(var_26_int, var_24_int);
				var_14_string += (var_26_int + 1);
	}
			@Is3DSoundLoaded(var_27_bool, var_14_string);
			if(var_27_bool != 0) {
				@GetEyesHeight(var_28_float);
				@GetDirection(var_29_cvector);
				var_30_cvector = var_29_cvector * 50;
				var_41_float = GetByIndex(var_30_cvector, 1);
				SetByIndex(var_30_cvector, 1) = (var_41_float + var_28_float);
				@PlayGlobalSound(var_14_string, var_30_cvector);
			}
		}
		var_24_int += 1;
	}
	var_36_bool = !var_24_int; //@nz
	if(var_36_bool == 0) goto Label_1076;
}


void func_800(bool var_0_bool, bool var_1_bool, object var_2_object, int var_60_int)
{
	cvector var_65_cvector; float var_66_float; cvector var_67_cvector; float var_68_float;
	if(var_60_int != 120) {
	}
	if(var_0_bool == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_65_cvector);
		@FindDirLength(var_66_float, var_65_cvector, 7000.0);
		cvector var_74_cvector;
		func_697(var_68_float, var_74_cvector, 1.7453294);
		var_74_cvector = var_67_cvector;
		var_68_float = var_67_cvector | var_67_cvector;
		bool var_104_bool = false;
		if(var_68_float >= 2500.0) {
			bool var_107_bool;
			var_111_bool = var_68_float >= ((var_66_float * var_66_float) * 2.25);
			if(var_111_bool != 1) {
				bool var_112_bool;
				func_859(true, var_112_bool);
				if(var_112_bool != 1)
					var_107_bool = false;
			}
			if(var_107_bool != 0)
				var_104_bool = true;
		}
		if(var_104_bool == 0) goto Label_851;
		@Stop();
		cvector var_132_cvector;
		func_889(var_132_cvector);
		var_1_bool = var_132_cvector + var_67_cvector;
	}
Label_851:
	
}


void func_1315(object var_97_object)
{
	float var_100_float; object var_101_object;
	func_918(var_100_float, var_101_object, 0.025, 0);
	float var_99_float;
	var_100_float = var_99_float;
	@ReportHit(var_101_object, 7, var_99_float, 0.025);
}


// @pe
void func_419(void)
{
	func_399();
	func_589(var_10_object);
}


void func_675(void)
{
	@KillTimer(110);
	func_852(var_9_object);
}


void func_1191(void)
{
	object var_85_object;
	@GetScene(var_85_object);
	object var_87_object;
	func_1097(var_87_object);
	@BroadcastMessage("battle", var_87_object, var_85_object);
}
EMIT "Stack[-1] = 0";


void func_170(bool var_42_bool)
{
	var_42_bool = false;
}


void func_172(object var_36_object, cvector var_37_cvector)
{
	object var_39_object;
	@FindShiftedPathTo(var_39_object, var_37_cvector);
	var_39_object = var_36_object;
}
EMIT "Stack[-1] = 0";


void func_1328(object var_10_object)
{
	object var_13_object;
	@CreateInvItem(var_13_object);
	var_13_object->SetItemName("rat");
	float var_14_float;
	@rand(var_14_float, 0.25, 0.5);
	var_13_object->SetProperty("quality", var_14_float);
	object var_19_object; object var_20_object;
	var_10_object = var_19_object;
	var_13_object = var_20_object;
	func_1155(var_19_object, var_20_object, 1);
	object var_35_object;
	func_1097(var_35_object);
	@RemoveActor(var_35_object);
}
EMIT "Stack[-2] = 0";


void func_178(void)
{
}


// @pe
void func_1202(bool var_67_bool, object var_68_object)
{
	object var_70_object;
	var_68_object = var_70_object;
	bool var_69_bool;
	func_1032(var_69_bool, var_70_object);
	if(!var_69_bool) //@nz
		var_67_bool = false;
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_901(var_72_bool, var_73_object);
	var_72_bool = var_67_bool;
}


void func_179(void)
{
	@Speak("death");
	func_187("die");
}


// @pe
void func_567(bool var_0_bool, bool var_1_bool, int var_19_int)
{
	if(var_19_int != 0)
		return 0;
	bool var_22_bool;
	func_596(var_22_bool, var_1_bool);
	if(!var_22_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_697(bool var_0_bool, cvector var_94_cvector, float var_95_float)
{
	cvector var_102_cvector;
	@GetPosition(var_102_cvector);
	cvector var_103_cvector;
	var_0_bool->GetPosition(var_103_cvector); //@t
	cvector var_104_cvector;
	@GetDirection(var_104_cvector);
	cvector var_108_cvector;
	cvector var_110_cvector;
	func_1103(var_110_cvector, (var_102_cvector - var_103_cvector));
	func_1103(var_108_cvector, (var_110_cvector + (var_104_cvector * 0.75)));
	cvector var_105_cvector;
	var_108_cvector = var_105_cvector;
	cvector var_106_cvector;
	float var_107_float;
	@FindLongestDir(var_106_cvector, var_107_float, var_105_cvector, var_95_float, 32, 7000.0);
	if((var_107_float - 100) < 0)
		var_107_float = 0;
	var_94_cvector = var_106_cvector * var_107_float;
}


// @pe
void func_187(string var_12_string)
{
	string var_13_string;
	var_12_string = var_13_string;
	func_196(var_13_string);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1217(bool var_10_bool, object var_11_object)
{
	object var_13_object;
	var_11_object = var_13_object;
	bool var_12_bool;
	func_1202(var_12_bool, var_13_object);
	var_12_bool = var_10_bool;
}


// @pe
void func_196(string var_13_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_14_string;
	var_13_string = var_14_string;
	func_1056(var_14_string);
	@PlayAnimation("all", var_13_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_13_string);
	@RemoveEnvelope();
}


// @pe
void func_1224(object var_53_object)
{
	TaskCall(3);
	object var_54_object;
	func_228(var_54_object, var_55_object, var_54_object);
	TaskReturn();
	@ResetAAS();
}


void func_1097(object var_35_object)
{
	object var_37_object;
	@self(var_37_object);
	var_37_object = var_35_object;
}
EMIT "Stack[-1] = 0";


void func_589(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1103(cvector var_110_cvector, cvector var_111_cvector)
{
	float var_113_float = sqrt(var_111_cvector | var_111_cvector);
	if(var_113_float < 0.000001)
		var_110_cvector = [0.0, 0.0, 0.0];
	var_110_cvector = var_111_cvector / var_113_float;
}


void func_465(bool var_0_bool, bool var_1_bool, bool var_181_bool, object var_182_object, float var_183_float, float var_184_float, bool var_185_bool, bool var_186_bool)
{
	bool var_196_bool; object var_198_object; cvector var_199_cvector; cvector var_200_cvector; float var_202_float; object var_203_object;
	var_0_bool = false;
	var_1_bool = var_182_object;
	bool var_197_bool;
	var_186_bool = var_197_bool;
	
	for(;;) {
		bool var_204_bool; object var_205_object;
		var_182_object = var_205_object;
		func_596(var_204_bool, var_205_object);
		if(!var_204_bool) { //@nz
			var_181_bool = false;
			return 16;
		}
		var_182_object->GetPosition(var_199_cvector);
		@GetPosition(var_200_cvector);
		var_202_float = (var_199_cvector - var_200_cvector) | (var_199_cvector - var_200_cvector);
		bool var_209_bool = false;
		if(var_184_float > 0) {
			if(var_202_float > (var_184_float * var_184_float))
				var_209_bool = true;
		}
		if(var_209_bool != 0) {
			@Stop();
			var_181_bool = false;
			return 16;
		}
		if(var_202_float > (var_183_float * var_183_float)) {
			var_182_object->GetPFPosition(var_199_cvector);
			@FindPathTo(var_203_object, var_199_cvector);
			if(var_203_object != null) {
				var_203_object = var_198_object;
				var_203_object = null;
			}
			if(var_198_object != null) {
				if(var_197_bool == 0) goto Label_518;
				var_197_bool = false;
				@RotatePath(var_198_object, var_196_bool);
				if(!var_196_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_222_string;
						func_603(var_222_string);
						string var_223_string;
						func_605(var_223_string);
						@FollowPath(var_198_object, var_185_bool, var_196_bool, var_222_string, var_223_string);
						if(!var_196_bool) { //@nz
							if(var_0_bool == 0) goto Label_537;
							var_198_object = null;
						}
					EMIT "GOTO 0x21a";

					Label_537:
						} else {
					var_198_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_196_bool);
					if(!var_196_bool) { //@nz
						if(var_0_bool != 0) {
							var_198_object = null;
							goto Label_565;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_565;
		}
			var_203_object = null;
			goto Label_563;

		Label_563:
			var_198_object = null;

		}
	Label_565:
		for(;;) {
			var_181_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_1234(object var_45_object)
{
	TaskCall(3);
	object var_46_object;
	func_228(var_46_object, var_47_object, var_46_object);
	TaskReturn();
	@ResetAAS();
}


void func_83(bool var_0_bool, bool var_1_bool)
{
	float var_23_float; cvector var_24_cvector; cvector var_25_cvector; bool var_26_bool; object var_27_object; bool var_28_bool;
	@rand(var_23_float, 0.5);
	@Sleep(var_23_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_95:
				@GetPosition(var_25_cvector);
				float var_32_float;
				func_142(var_32_float);
				@GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool);
				if(var_26_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_95;
			}
				var_1_bool = false;
		}
		}
		goto Label_111;

	Label_111:
		object var_36_object; cvector var_37_cvector;
		var_24_cvector = var_37_cvector;
		func_172(var_36_object, var_37_cvector);
		var_36_object = var_27_object;
		if(var_27_object != null) {
			@RotatePath(var_27_object, var_28_bool);
			if(var_28_bool != 0) {
				bool var_42_bool;
				func_170(var_42_bool);
				@FollowPath(var_27_object, var_42_bool, var_28_bool);
				var_27_object = null;
				if(var_28_bool != 0) {
					TaskCall(1);
					func_178();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_27_object = null;
	}
	
}


void func_340(void)
{
	@Stop();
	@StopAnimation();
	@StopAsync();
}


// @pe
void func_596(bool var_22_bool, object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	bool var_24_bool;
	func_1032(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
}


void func_852(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_727(bool var_0_bool, bool var_1_bool, object var_2_object, object var_83_object)
{
	float var_90_float; cvector var_92_cvector; float var_93_float;
	cvector var_94_cvector;
	func_697(var_93_float, var_94_cvector, 1.7453294);
	cvector var_89_cvector;
	var_94_cvector = var_89_cvector;
	if((var_89_cvector | var_89_cvector) < 2500.0) {
		cvector var_126_cvector;
		func_697(var_93_float, var_126_cvector, 2.6179938);
		var_126_cvector = var_89_cvector;
		var_90_float = var_89_cvector | var_89_cvector;
		if(var_90_float < 2500.0) {
			var_131_float = sqrt(var_90_float);
			@Trace("Can't retreat, distance: " + var_131_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_134_float = GetByIndex(var_89_cvector, 0);
	var_135_float = GetByIndex(var_89_cvector, 2);
	@Rotate(var_134_float, var_135_float);
	cvector var_136_cvector;
	func_889(var_136_cvector);
	@SetTimer(120, 0.5);
	
Label_769:
	bool var_91_bool;
	@MovePoint((var_136_cvector + var_89_cvector), 1, var_91_bool);
	if(var_91_bool != 0) {
		if(var_83_object == null) {
			goto Label_799;
		EMIT "GOTO 0x31d";

		Label_799:
			for(;;) {
				return 10;
		}
			cvector var_144_cvector;
			func_697(var_93_float, var_144_cvector, 2.6179938);
			var_144_cvector = var_92_cvector;
			if((var_92_cvector | var_92_cvector) >= 2500.0) {
				cvector var_148_cvector;
				func_889(var_148_cvector);
				var_1_bool = var_148_cvector + var_92_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_769; //@nz

	}
}


void func_1113(float var_53_float, cvector var_54_cvector, cvector var_55_cvector)
{
	var_53_float = (var_55_cvector - var_54_cvector) | (var_55_cvector - var_54_cvector);
}


void func_603(string var_222_string)
{
	var_222_string = "walk";
}


void func_859(bool var_0_bool, bool var_112_bool)
{
	cvector var_115_cvector;
	@GetDirection(var_115_cvector);
	cvector var_117_cvector;
	func_894(var_117_cvector, var_0_bool);
	cvector var_116_cvector;
	var_117_cvector = var_116_cvector;
	float var_123_float; cvector var_124_cvector; cvector var_125_cvector;
	var_115_cvector = var_124_cvector;
	var_116_cvector = var_125_cvector;
	func_1135(var_123_float, var_124_cvector, var_125_cvector);
	var_112_bool = var_123_float >= -0.34202012;
}


void func_605(string var_223_string)
{
	var_223_string = "run";
}


// @pe
void func_1117(float var_135_float, float var_136_float, float var_137_float)
{
	if(var_136_float < var_137_float)
		var_136_float = var_135_float;
	else
		var_137_float = var_135_float;
	
}


// @pe
void func_607(bool var_3_bool, object var_75_object)
{
	var_3_bool = var_75_object;
	@Speak("retreat");
	@SetTimer(110, 1);
	object var_83_object;
	func_727(var_78_bool, var_79_object, var_83_object, var_83_object);
	@KillTimer(110);
}


void func_991(bool var_40_bool, object var_41_object)
{
	bool var_43_bool;
	var_41_object->IsDead(var_43_bool);
	var_43_bool = var_40_bool;
}


// @pe
void func_1244(void)
{
	TaskCall(2);
	func_179();
	TaskReturn();
}


void func_1251(bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_16_float; bool var_17_bool;
	if(var_13_string == "health") {
		@GetProperty("health", var_16_float);
		var_21_float = GlobalVars[0];
		var_17_bool = var_16_float < var_21_float;
		var_22_float = GlobalVars[0];
		var_16_float = var_22_float;
		GlobalVars[0] = var_22_float;
		bool var_23_bool = false;
		if(var_17_bool != 0) {
			bool var_25_bool; object var_26_object;
			var_12_object = var_26_object;
			func_1032(var_25_bool, var_26_object);
			if(var_25_bool != 0)
				var_23_bool = true;
		}
		if(var_23_bool != 0)
			var_11_bool = true;
	}
	var_11_bool = false;
}


// @pe
void func_1124(float var_145_float, float var_146_float, float var_147_float, float var_148_float)
{
	if(var_146_float < var_147_float) {
		var_147_float = var_145_float;
		return 0;
	}
	if(var_146_float > var_148_float) {
		var_148_float = var_145_float;
		return 0;
	}
	var_146_float = var_145_float;
}


void func_996(bool var_29_bool, object var_30_object)
{
	if(var_30_object == null) {
		var_29_bool = false;
		return 4;
	}
	bool var_36_bool = false;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", 1);
	if(var_39_bool != 0) {
		bool var_40_bool; object var_41_object;
		var_30_object = var_41_object;
		func_991(var_40_bool, var_41_object);
		if(var_40_bool != 0)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		var_29_bool = false;
		return 4;
	}
	object var_33_object;
	@GetScene(var_33_object);
	if(var_33_object == null) {
		var_29_bool = false;
		return 4;
	}
	object var_34_object;
	var_30_object->GetScene(var_34_object);
	if(var_33_object != var_34_object) {
		var_29_bool = false;
		return 4;
	}
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_228(bool var_0_bool, object var_46_object, bool var_171_bool)
{
	float var_58_float; bool var_59_bool; cvector var_60_cvector; cvector var_61_cvector; int var_64_int; object var_65_object;
	var_0_bool = var_46_object;
	float var_57_float;
	@GetAttackDistance(var_57_float);
	@Face(var_0_bool);
	
	for(;;) {
		bool var_67_bool;
		func_1202(var_67_bool, var_0_bool);
		if(var_67_bool != 0) {
			var_0_bool->GetPosition(var_60_cvector); //@t
			@GetPosition(var_61_cvector);
			if(((var_60_cvector - var_61_cvector) | (var_60_cvector - var_61_cvector)) < ((var_57_float + 10) * (var_57_float + 10))) {
				@irand(var_64_int, 2);
				@Speak("attack" + (var_64_int + 1));
				@SetAttackState(true);
				func_1191();
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd(var_59_bool);
				if(!var_59_bool) { //@nz
					@SetAttackState(false);
				} else {
						bool var_94_bool;
						func_1032(var_94_bool, var_0_bool);
						if(var_94_bool != 0) {
							@GetVictim(var_57_float, var_65_object);
							@ReportAttack(var_0_bool);
							if(var_65_object == var_0_bool)
								func_1315(var_0_bool);
							var_65_object = null;
						}
						@SetAttackState(false);
						@PlayAnimation("all", "attack_end");
						@WaitForAnimEnd(var_59_bool);
						var_167_bool = !var_59_bool; //@nz
						if(var_167_bool == 0) goto Label_305;
				}
		}
		Label_321:
			for(;;) {
				@StopAsync();

			}

		Label_305:
		} else {
		@StopAsync();
		bool var_168_bool; float var_170_float;
		var_58_float = var_170_float;
		TaskCall(4);
		func_370(var_168_bool, var_0_bool, var_170_float);
		TaskReturn();
		if(!var_171_bool) { //@nz
			goto Label_321;
		}
		@Face(var_0_bool);
		}
	}
	
}


// @pe
void func_875(string var_125_string, int var_126_int)
{
	if(var_126_int == 2) {
		var_125_string = "fire";
		return 0;
	EMIT "GOTO 0x377";
	}
	if(var_126_int == 1) {
		var_125_string = "bullet";
		return 0;
	}
	var_125_string = "phys";
}


// @pe
void func_1135(float var_123_float, cvector var_124_cvector, cvector var_125_cvector)
{
	var_130_float = sqrt((var_124_cvector | var_124_cvector) * (var_125_cvector | var_125_cvector));
	var_123_float = (var_124_cvector | var_125_cvector) / var_130_float;
}


void func_370(bool var_168_bool, object var_169_object, float var_170_float)
{
	func_389();
	bool var_181_bool; object var_182_object;
	var_169_object = var_182_object;
	bool var_173_bool;
	bool var_174_bool;
	func_465(var_173_bool, var_174_bool, var_181_bool, var_182_object, (var_170_float * 0.9), (float)5000, true, true);
	var_181_bool = var_174_bool;
	func_399();
	var_174_bool = var_168_bool;
}


void func_1143(int var_30_int, int var_31_int)
{
	object var_33_object;
	@CreateIntVector(var_33_object);
	var_33_object->add(var_30_int);
	var_33_object->add(var_31_int);
	@SendWorldWndMessage(3, var_33_object);
}
EMIT "Stack[-1] = 0";


void func_889(cvector var_136_cvector)
{
	cvector var_138_cvector;
	@GetPosition(var_138_cvector);
	var_138_cvector = var_136_cvector;
}


void func_1278(object var_61_object, string var_62_string)
{
	float var_64_float;
	if(var_62_string == "health") {
		@GetProperty("health", var_64_float);
		if(var_64_float <= 0)
			@SignalDeath(var_61_object);
		bool var_70_bool = false;
		var_71_float = GlobalVars[0];
		if(var_64_float < var_71_float) {
			bool var_73_bool; object var_74_object;
			var_61_object = var_74_object;
			func_1032(var_73_bool, var_74_object);
			if(var_73_bool != 0)
				var_70_bool = true;
		}
		if(var_70_bool != 0) {
			object var_75_object;
			var_61_object = var_75_object;
			TaskCall(5);
			func_607(var_79_object, var_75_object);
			TaskReturn();
		}
	}
}


