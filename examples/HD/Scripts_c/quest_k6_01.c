maintask task_0
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		var_0_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, string var_12_string)
	{
		object var_23_object; object var_24_object; object var_25_object; object var_26_object; int var_27_int; int var_28_int; object var_29_object; float var_30_float; object var_31_object; int var_32_int;
		@Trace(var_12_string);
		if(var_12_string == "lock_danko") {
			func_593("icot_eva_door", true);
			@GetSceneByName(var_23_object, "cot_eva");
			@Trigger(var_23_object, "danko");
			var_23_object = null;
		} else if(var_12_string == "teleport") {
				func_5();
				@GetScene(var_24_object);
				@GetSceneByName(var_25_object, "cot_eva");
				func_593("icot_eva_door", false);
				func_576("icot_eva@door1", true);
				@PlaySound("door_close");
				if(var_1_object != 0)
					@Trigger(var_1_object, "cleanup");
				if(var_24_object != var_25_object) {
					object var_71_object;
					object var_74_object;
					func_514(var_74_object);
					var_74_object = var_71_object;
					func_645(var_71_object, "cot_eva", "pt_k6q01_klara");
					@sync();
				}
				@FindActor(var_26_object, "player");
				bool var_96_bool = false;
				if(var_26_object != 0) {
					if(var_0_bool != 0)
						var_96_bool = true;
				}
				if(var_96_bool != 0) {
					object var_99_object;
					var_26_object = var_99_object;
					func_669(var_99_object, var_4_object, var_5_object);
					object var_128_object;
					var_26_object = var_128_object;
					func_669(var_128_object, var_8_object, var_9_object);
					object var_131_object;
					var_26_object = var_131_object;
					func_669(var_131_object, var_10_object, var_11_object);
				}
				var_26_object = null;
				var_25_object = null;
				var_24_object = null;
		}
	Label_334:
		for(;;) {

		}
	
		if(var_12_string == "cot_eva_load") {
			@GetVariable("k6q01", var_27_int);
			@GetVariable("k6q01DoorWasLocked", var_28_int);
			bool var_138_bool = false;
			if(var_27_int == 2) {
				if(!var_28_int) //@nz
					var_138_bool = true;
			}
			if(var_138_bool != 0) {
				func_576("icot_eva@door1", true);
				@SetVariable("k6q01DoorWasLocked", 1);
				@PlaySound("door_close");
			}
		} else if(var_12_string == "unlock_eva") {
			func_576("icot_eva@door1", false);
			@PlaySound("door_open");
			@SetVariable("k6q01ItemsRemoved", 1);
			@CreateIntVector(var_3_object);
			@CreateIntVector(var_5_object);
			@CreateIntVector(var_7_object);
			@CreateIntVector(var_9_object);
			@CreateIntVector(var_11_object);
			@FindActor(var_29_object, "player");
			if(var_29_object != 0) {
				object var_156_object; object var_157_object;
				var_29_object = var_157_object;
				func_521(var_156_object, var_157_object, 1, var_5_object);
				var_4_object = var_156_object;
				object var_175_object; object var_176_object;
				var_29_object = var_176_object;
				func_521(var_175_object, var_176_object, 3, var_9_object);
				var_8_object = var_175_object;
				object var_179_object; object var_180_object;
				var_29_object = var_180_object;
				func_521(var_179_object, var_180_object, 4, var_11_object);
				var_10_object = var_179_object;
				var_29_object->ClearSubContainer(1);
				var_29_object->ClearSubContainer(3);
				var_29_object->ClearSubContainer(4);
				var_29_object->SelectWeapon();
				var_0_bool = true;
			}
			var_29_object = null;
		}
		if(var_12_string == "place_danko") {
			@GetGameTime(var_30_float);
			if(var_30_float < 134) {
				@GetSceneByName(var_31_object, "cot_anna");
				object var_191_object; object var_192_object;
				func_558(var_191_object, var_192_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				var_1_object = var_191_object;
				@SetTimeEvent(1, 134);
				@SetTimeEvent(2, 136);
				@SetTimeEvent(3, 138);
				@SetVariable("k6q01DankoPos", 1);
			} else if(var_30_float < 136) {
					@GetSceneByName(var_192_object, "cot_lara");
					object var_220_object; object var_221_object;
					var_31_object = var_221_object;
					func_558(var_220_object, var_221_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
					var_1_object = var_220_object;
					@SetTimeEvent(2, 136);
					@SetTimeEvent(3, 138);
					@SetVariable("k6q01DankoPos", 2);
			}
		Label_302:
			for(;;) {
				goto Label_334;

			}

			if(var_30_float < 138) {
				@GetSceneByName(Obj(), "dt_house_1_04");
				object var_234_object; object var_235_object;
				var_31_object = var_235_object;
				func_558(var_234_object, var_235_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				var_1_object = var_234_object;
				@SetTimeEvent(3, 138);
				@SetVariable("k6q01DankoPos", 3);
				goto Label_302;
			}
			func_593("icot_eva_door", false);
			func_5();
			@SetVariable("k6q01DankoPos", 4);
		}
		if(var_12_string == "fail") {
			func_466();
		} else if(var_12_string == "completed") {
			func_474();
		} else if(var_12_string == "cleanup") {
			@GetVariable("k6q01", var_32_int);
			if(var_32_int != 1000) {
			func_466();
			goto Label_334;
		}
		}
		func_479(var_32_int);
	}

	void OnGameTime(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, int var_12_int, float var_13_float)
	{
		int var_20_int; object var_21_object; object var_22_object; object var_23_object; object var_24_object; object var_25_object;
		@GetVariable("k6q01DankoPos", var_20_int);
		if(var_12_int == 1) {
			if(var_20_int != 1)
				return 12;
			@GetScene(var_21_object);
			@GetSceneByName(var_22_object, "cot_lara");
			if(var_1_object != 0)
				@Trigger(var_1_object, "cleanup");
			if(var_21_object != var_22_object) {
				var_22_object = var_21_object;
				@Trace("0: placing danko to lara");
				@SetVariable("k6q01DankoPos", 2);
			} else {
					@GetSceneByName(var_21_object, "dt_house_1_04");
					@Trace("0: placing danko to ospina");
					@SetVariable("k6q01DankoPos", 3);
		}
				if(var_12_int == 2) {
					if(var_20_int != 2)
						return 12;
					@GetScene(var_23_object);
					@GetSceneByName(var_24_object, "dt_house_1_04");
					if(var_1_object != 0)
						@Trigger(var_1_object, "cleanup");
					if(var_23_object != var_24_object) {
						object var_68_object; object var_69_object;
						var_24_object = var_69_object;
						func_558(var_68_object, var_69_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
						var_1_object = var_68_object;
						@Trace("1: placing danko to ospina");
						@SetVariable("k6q01DankoPos", 3);
					} else {
					func_593("icot_eva_door", false);
					func_5();
					@SetVariable("k6q01DankoPos", 4);
					@Trace("1: placing danko to eva");
					var_25_object = null;
				}
				if(!(var_12_int == 3)) goto Label_465;
				@Trace("placing danko from ospina to eva");
				if(var_1_object != 0)
					@Trigger(var_1_object, "cleanup");
				func_5();
				func_593("icot_eva_door", false);
				@SetVariable("k6q01DankoPos", 4);
				}
				var_24_object = null;
				var_23_object = null;
		}
		object var_38_object; object var_39_object;
		var_21_object = var_39_object;
		func_558(var_38_object, var_39_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
		var_1_object = var_38_object;
		var_22_object = null;
		var_21_object = null;
		goto Label_465;
	
	Label_465:
		for(;;) {
			return 12;

		}
	
	}

}


void func_576(string var_57_string, bool var_58_bool)
{
	object var_60_object;
	@FindActor(var_60_object, var_57_string);
	if(!var_60_object) //@nz
		@Trace(("Door " + var_57_string) + " not found");
	else
		var_60_object->SetProperty("locked", var_58_bool);
	
}
EMIT "Stack[-1] = 0";


void func_514(object var_74_object)
{
	object var_76_object;
	@FindActor(var_76_object, "player");
	var_76_object = var_74_object;
}
EMIT "Stack[-1] = 0";


void func_546(object var_263_object)
{
	object var_265_object;
	@self(var_265_object);
	var_265_object = var_263_object;
}
EMIT "Stack[-1] = 0";


void func_5(void)
{
	object var_88_object;
	@GetSceneByName(var_88_object, "cot_eva");
	@Trigger(var_88_object, "noeva");
}
EMIT "Stack[-1] = 0";


void func_645(object var_71_object, string var_72_string, string var_73_string)
{
	if(!var_71_object) { //@nz
	}
	object var_82_object;
	@GetSceneByName(var_82_object, var_72_string);
	bool var_83_bool;
	cvector var_84_cvector;
	cvector var_85_cvector;
	var_82_object->GetLocator(var_73_string, var_83_bool, var_84_cvector, var_85_cvector);
	if(!var_83_bool) //@nz
		@Trace(((("Teleport location '" + var_73_string) + "' not found in scene '") + var_72_string) + "'");
	else
		@Teleport(var_71_object, var_82_object, var_84_cvector, var_85_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_614(int var_122_int, int var_123_int)
{
	object var_125_object;
	@CreateIntVector(var_125_object);
	var_125_object->add(var_122_int);
	var_125_object->add(var_123_int);
	@SendWorldWndMessage(3, var_125_object);
}
EMIT "Stack[-1] = 0";


void func_552(object var_170_object)
{
	object var_172_object;
	@CreateObjectVector(var_172_object);
	var_172_object = var_170_object;
}
EMIT "Stack[-1] = 0";


void func_521(object var_156_object, object var_157_object, int var_158_int, object var_159_object)
{
	object var_168_object; int var_169_int;
	object var_170_object;
	func_552(var_170_object);
	object var_165_object;
	var_170_object = var_165_object;
	int var_166_int;
	var_157_object->GetItemCount(var_166_int, var_158_int);
	int var_167_int = 0;
	
	while(var_167_int < var_166_int) {
		var_157_object->GetItem(var_168_object, var_167_int, var_158_int);
		var_165_object->add(var_168_object);
		var_157_object->GetItemAmount(var_169_int, var_167_int, var_158_int);
		var_159_object->add(var_169_int);
		var_168_object = null;
		var_167_int += 1;
	}
	
	var_165_object = var_156_object;
}
EMIT "Stack[-5] = 0";


void func_558(object var_38_object, object var_39_object, string var_40_string, string var_41_string, string var_42_string)
{
	bool var_47_bool; cvector var_48_cvector; cvector var_49_cvector;
	var_39_object->GetLocator(var_40_string, var_47_bool, var_48_cvector, var_49_cvector);
	if(!var_47_bool) //@nz
		@Trace(("Locator " + var_40_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_41_string, var_39_object, var_48_cvector, var_49_cvector, var_42_string);
	object var_50_object = var_38_object;
	
}
EMIT "Stack[-1] = 0";


void func_593(string var_76_string, bool var_77_bool)
{
	object var_79_object;
	@FindActor(var_79_object, var_76_string);
	if(!var_79_object) { //@nz
		@Trace(("Door " + var_76_string) + " not found");
	} else {
		if(var_77_bool != 0)
			var_79_object->Close();
		var_79_object->SetProperty("locked", var_77_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_466(void)
{
	@SetVariable("k6q01", -1);
	func_479(var_32_int);
}


void func_626(object var_111_object, object var_112_object, int var_113_int)
{
	int var_117_int;
	var_112_object->GetItemID(var_117_int);
	int var_118_int;
	@GetInvItemProperty(var_118_int, var_117_int, "Category");
	bool var_119_bool;
	var_111_object->AddItem(var_119_bool, var_112_object, var_118_int, var_113_int);
	if(!var_119_bool) { //@nz
		var_111_object->DropItems(var_112_object, var_113_int);
	} else {
		int var_122_int; int var_123_int;
		var_117_int = var_122_int;
		var_113_int = var_123_int;
		func_614(var_122_int, var_123_int);
	}
	
}


void func_474(void)
{
	@SetVariable("k6q01", 1000);
}


void func_669(object var_99_object, object var_100_object, object var_101_object)
{
	int var_106_int; object var_108_object; int var_109_int;
	var_100_object->size(var_106_int);
	int var_107_int = 0;
	
	while(var_107_int < var_106_int) {
		var_100_object->get(var_108_object, var_107_int);
		var_101_object->get(var_109_int, var_107_int);
		object var_111_object; object var_112_object; int var_113_int;
		var_99_object = var_111_object;
		var_108_object = var_112_object;
		var_109_int = var_113_int;
		func_626(var_111_object, var_112_object, var_113_int);
		var_108_object = null;
		var_107_int += 1;
	}
	
}


void func_479(object var_1_object)
{
	func_593("icot_eva_door", false);
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	int var_252_int;
	@GetVariable("k6q01", var_252_int);
	func_576("icot_eva@door1", false);
	if(var_252_int == 1000)
		@PlaySound("door_open");
	func_5();
	object var_263_object;
	func_546(var_263_object);
	@RemoveActor(var_263_object);
}


