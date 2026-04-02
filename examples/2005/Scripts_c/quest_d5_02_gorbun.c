// @GLOBALS: 0:string:,1:bool:,2:object:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int)
	{
		var_0_bool = true;
		func_145();
		func_1659();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, float var_7_float, float var_8_float, int var_9_int)
	{
		bool var_11_bool;
		@IsOverrideActive(var_11_bool);
		if(!var_11_bool) { //@nz
			func_145();
			disable OnUse;
			bool var_13_bool; object var_14_object;
			var_9_int = var_14_object;
			func_1393(var_13_bool, var_14_object);
			enable OnUse;
			object var_27_object;
			var_9_int = var_27_object;
			func_1989(var_27_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, float var_7_float, float var_8_float, int var_9_int, object var_10_object, object var_11_object, object var_31_object)
		{
		bool var_33_bool;
		@IsPlayerActor(var_31_object, var_33_bool);
		if(var_33_bool != 0) {
			func_145();
			object var_35_object;
			var_31_object = var_35_object;
			TaskCall(2);
			func_148(var_35_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, float var_7_float, float var_8_float, int var_9_int)
	{
		object var_11_object;
		if(var_9_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_9_int == 21)) goto Label_144;
			if(true == 0) goto Label_144;
			@FindActor(var_11_object, "player");
			bool var_19_bool = false;
			if(var_11_object != 0) {
				float var_21_float; object var_22_object;
				var_11_object = var_22_object;
				func_1368(var_21_float, var_22_object);
				if(var_21_float <= 62500.0)
					var_19_bool = true;
			}
			if(var_19_bool != 0) {
				object var_31_object;
				var_11_object = var_31_object;
				func_89();
			}
			var_11_object = null;
		}
	Label_144:
	
	}

}


task task_2
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int)
	{
		func_193();
		func_1659();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, float var_7_float, float var_8_float, int var_9_int)
	{
		bool var_11_bool;
		@IsOverrideActive(var_11_bool);
		if(!var_11_bool) { //@nz
			func_193();
			disable OnUse;
			bool var_13_bool; object var_14_object;
			var_9_int = var_14_object;
			func_1393(var_13_bool, var_14_object);
			enable OnUse;
			object var_27_object;
			var_9_int = var_27_object;
			func_1989(var_27_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int)
	{
		func_1659();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, float var_8_float, float var_9_float, int var_10_int)
	{
		if(1 != 0) {
			func_1516();
			if(var_10_int == 13144) {
				object var_15_object; object var_16_object;
				var_15_object = var_1_object;
				var_16_object = var_0_bool;
				func_1692();
				object var_58_object = var_1_object;
				func_1667(var_0_bool);
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_1677();
			}
			if(var_10_int == 16800) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_bool;
				func_1683();
			}
			if(var_10_int == 13151) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_bool;
				func_1683();
			}
			if(var_10_int == 16809) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_bool;
				func_1683();
			}
			if(var_10_int == 13661) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_bool;
				func_1692();
				object var_109_object = var_1_object;
				func_1667(var_0_bool);
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_bool;
				func_1677();
			}
			if(var_10_int == 13170) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_bool;
				func_1777();
				object var_119_object = var_1_object;
				func_1783(var_0_bool);
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_bool;
				func_1677();
			}
			if(var_10_int == 13154) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_bool;
				func_1771();
			}
			if(var_10_int == 13172) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_bool;
				func_1721();
			}
			if(var_10_int == 16820) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_bool;
				func_1721();
			}
			if(var_9_float == 13133) {
				bool var_167_bool = false;
				bool var_168_bool;
				func_1793(var_1_object);
				if(var_168_bool != 0) {
					bool var_176_bool;
					func_1805(var_1_object);
					if(var_176_bool != 0)
						var_167_bool = true;
				}
				if(var_167_bool != 0) {
					object var_182_object; object var_183_object;
					var_182_object = var_1_object;
					var_183_object = var_0_bool;
					func_1715();
					func_506(var_10_int, "Neutral");
					var_0_bool->SetMessage(511917); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(515734, 16793, 16792); //@t
					var_0_bool->AddReply(515732, 16791, 16790); //@t
					return 0;
				}
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511935); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_207_bool;
				func_1793(var_1_object);
				if(var_207_bool != 0)
					var_0_bool->AddReply(512489, 13660, 13658); //@t
				bool var_212_bool = false;
				bool var_213_bool = false;
				bool var_214_bool;
				func_1817(var_1_object);
				if(var_214_bool != 0) {
					bool var_220_bool;
					func_1829(var_1_object);
					if(!var_220_bool) //@nz
						var_213_bool = true;
				}
				if(var_213_bool != 0) {
					bool var_227_bool;
					func_1853(var_1_object);
					if(var_227_bool != 0)
						var_212_bool = true;
				}
				if(var_212_bool != 0)
					var_0_bool->AddReply(511936, 13155, 13153); //@t
				bool var_236_bool = false;
				bool var_237_bool;
				func_1829(var_1_object);
				if(var_237_bool != 0) {
					bool var_239_bool;
					func_1841(var_1_object);
					if(var_239_bool != 0)
						var_236_bool = true;
				}
				if(var_236_bool != 0)
					var_0_bool->AddReply(511937, 13156, 13154); //@t
				var_0_bool->AddReply(512490, -1, 13659); //@t
				return 0;
			}
			if(var_9_float == 13156) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511939); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511947, 13165, 13164); //@t
				return 0;
			}
			if(var_9_float == 13165) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511948); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511949, 13167, 13166); //@t
				var_0_bool->AddReply(515752, 13167, 16816); //@t
				return 0;
			}
			if(var_9_float == 13167) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511950); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511951, 13171, 13168); //@t
				return 0;
			}
			if(var_9_float == 13171) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511954); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511955, -1, 13172); //@t
				var_0_bool->AddReply(515754, -1, 16820); //@t
				return 0;
			}
			if(var_9_float == 13155) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511938); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511940, 13158, 13157); //@t
				var_0_bool->AddReply(515753, 13160, 16818); //@t
				return 0;
			}
			if(var_9_float == 13158) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511941); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511942, 13160, 13159); //@t
				var_0_bool->AddReply(515749, 13160, 16811); //@t
				return 0;
			}
			if(var_9_float == 13160) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511943); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511944, 13162, 13161); //@t
				return 0;
			}
			if(var_9_float == 13162) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511945); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511946, 13169, 13163); //@t
				return 0;
			}
			if(var_9_float == 13169) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511952); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511953, -1, 13170); //@t
				return 0;
			}
			if(var_9_float == 13660) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(512491); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512492, -1, 13661); //@t
				return 0;
			}
			if(var_9_float == 16791) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(515733); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515737, 16793, 16795); //@t
				return 0;
			}
			if(var_9_float == 16793) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(515735); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511918, 13135, 13134); //@t
				var_0_bool->AddReply(515736, 16797, 16794); //@t
				return 0;
			}
			if(var_9_float == 16797) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(515738); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515739, 13137, 16798); //@t
				return 0;
			}
			if(var_9_float == 13135) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511919); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511920, 13137, 13136); //@t
				var_0_bool->AddReply(515743, 16805, 16804); //@t
				return 0;
			}
			if(var_9_float == 16805) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(515744); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515745, 16807, 16806); //@t
				return 0;
			}
			if(var_9_float == 16807) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(515746); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515747, 13137, 16808); //@t
				var_0_bool->AddReply(515748, -1, 16809); //@t
				return 0;
			}
			if(var_9_float == 13137) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511921); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511924, 13141, 13140); //@t
				var_0_bool->AddReply(511922, 13139, 13138); //@t
				return 0;
			}
			if(var_9_float == 13139) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511923); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511929, 13141, 13145); //@t
				return 0;
			}
			if(var_9_float == 13141) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511925); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511926, 13143, 13142); //@t
				var_0_bool->AddReply(511930, 13148, 13147); //@t
				return 0;
			}
			if(var_9_float == 13148) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511931); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511932, 13150, 13149); //@t
				var_0_bool->AddReply(515741, 13150, 16801); //@t
				return 0;
			}
			if(var_9_float == 13150) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511933); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511934, -1, 13151); //@t
				var_0_bool->AddReply(515742, 13143, 16803); //@t
				return 0;
			}
			if(var_9_float == 13143) {
				func_506(var_10_int, "Neutral");
				var_0_bool->SetMessage(511927); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511928, -1, 13144); //@t
				var_0_bool->AddReply(515740, -1, 16800); //@t
				return 0;
			}
			var_3_object = true;
			bool var_441_bool;
			func_1987(var_441_bool);
			if(var_441_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x211";
	
	}

}


maintask task_6
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int)
	{
		bool var_21_bool; int var_22_int; bool var_23_bool; cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; float var_27_float; cvector var_28_cvector; bool var_29_bool; cvector var_30_cvector;
		@SensePlayerOnly(true);
		func_1308();
		object var_20_object;
		@GetScene(var_20_object);
		var_2_object = 0;
	
		for(;;) {
			string var_36_string;
			func_1622(var_36_string, var_2_object);
			var_20_object->GetLocator(var_36_string, var_21_bool);
			if(!var_21_bool) { //@nz
			} else {
			}
			bool var_46_bool;
			func_1413(var_46_bool);
			if(!var_46_bool) { //@nz
				TaskCall(0);
				func_0();
				TaskReturn();
			}
			func_1316(var_29_bool, var_30_cvector);

			for(;;) {
				@irand(var_22_int, (var_2_object + 1));
				string var_70_string; int var_71_int;
				var_22_int = var_71_int;
				func_1622(var_70_string, var_71_int);
				var_20_object->GetLocator(var_70_string, var_23_bool, var_24_cvector, var_25_cvector);
				cvector var_72_cvector;
				func_1363(var_72_cvector);
				var_26_cvector = var_24_cvector - var_72_cvector;
				float var_75_float; cvector var_76_cvector;
				var_26_cvector = var_76_cvector;
				func_1547(var_75_float, var_76_cvector);
				if(var_75_float > var_1_object) {
					@GetHeight(var_27_float);
					var_85_float = GetByIndex(var_28_cvector, 1);
					SetByIndex(var_28_cvector, 1) = (var_85_float + var_27_float);
					@CanReachByPF(var_29_bool, var_28_cvector);
					if(var_29_bool != 0) {
						var_88_float = sqrt(var_26_cvector | var_26_cvector);
						var_30_cvector = var_28_cvector - (var_26_cvector * (var_0_bool / var_88_float));
						bool var_91_bool; cvector var_92_cvector; cvector var_93_cvector;
						var_30_cvector = var_92_cvector;
						var_25_cvector = var_93_cvector;
						TaskCall(1);
						func_13(var_94_bool, var_91_bool, var_92_cvector, var_93_cvector);
						TaskReturn();
						if(var_94_bool != 0) {
							int var_118_int;
							var_22_int = var_118_int;
							TaskCall(3);
							func_198(var_118_int);
							TaskReturn();
						}
					}
				}
				@Sleep(1);
			}

		}
	}
	EMIT "Return(); Pop(22)";
	EMIT "Stack[-11] = 0";

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int)
	{
		func_1659();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int, object var_9_object)
	{
		bool var_11_bool;
		@IsOverrideActive(var_11_bool);
		if(!var_11_bool) { //@nz
			disable OnUse;
			bool var_13_bool; object var_14_object;
			var_9_object = var_14_object;
			func_1393(var_13_bool, var_14_object);
			enable OnUse;
			object var_27_object;
			var_9_object = var_27_object;
			func_1989(var_27_object);
		}
	}

}


void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int, string var_9_string)
{
	bool var_11_bool;
	if(var_9_string == "cleanup") {
		var_14_bool = GlobalVars[1];
		GlobalVars[1] = true;
		@IsLoaded(var_11_bool);
		if(!var_11_bool) { //@nz
			object var_16_object;
			func_1523(var_16_object);
			@RemoveActor(var_16_object);
		}
	} else if(var_9_string == "restore") {
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
	}
	
}


void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, float var_6_float, float var_7_float, int var_8_int)
{
	var_9_bool = GlobalVars[1];
	if(var_9_bool != 0) {
		object var_10_object;
		func_1523(var_10_object);
		@RemoveActor(var_10_object);
	}
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_50_bool;
	func_1413(var_50_bool);
	if(!var_50_bool) goto Label_0; //@nz
}


// @pe
void func_256(string var_143_string, string var_144_string, int var_145_int)
{
	if(var_145_int == 0) {
	} else {
		var_143_string += var_145_int;
	}
	
}


// @pe
void func_1793(bool var_107_bool)
{
	int var_109_int;
	func_1557(var_109_int, "d5q02");
	if(var_109_int == 1)
		var_107_bool = true;
	var_107_bool = false;
}


// @pe
void func_1539(float var_64_float, float var_65_float)
{
	if(var_65_float < 0)
		var_64_float = -var_65_float;
	else
		var_65_float = var_64_float;
	
}


void func_264(int var_136_int, string var_137_string)
{
	int var_140_int; bool var_141_bool;
	var_140_int = 0;
	
	for(;;) {
		string var_143_string; string var_144_string; int var_145_int;
		var_137_string = var_144_string;
		var_140_int = var_145_int;
		func_256(var_143_string, var_144_string, var_145_int);
		@HasAnimation(var_141_bool, "all", var_143_string);
		if(!var_141_bool) //@nz
			break;
		var_140_int += 1;
	}
	var_140_int = var_136_int;
}


// @pe
void func_1547(float var_75_float, cvector var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_80_float = GetByIndex(var_76_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_75_float = sqrt((var_77_float * var_78_float) + (var_80_float * var_81_float));
}


// @pe
void func_1805(bool var_115_bool)
{
	int var_117_int;
	func_1557(var_117_int, "ood5Gorbun1");
	if(var_117_int == 0) {
		var_115_bool = true;
		return 0;
	}
	var_115_bool = false;
}


void func_13(bool var_0_bool, bool var_91_bool, cvector var_92_cvector, cvector var_93_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_19:
	for(;;) {
		bool var_99_bool; cvector var_100_cvector;
		var_92_cvector = var_100_cvector;
		func_1383(var_99_bool, var_100_cvector);
		var_109_bool = !var_99_bool; //@nz
		if(var_109_bool == 0) goto Label_26;
	}
	
Label_26:
	bool var_96_bool;
	@MovePoint(var_92_cvector, false, var_96_bool);
	if(var_96_bool != 0) {
	} else {
		goto Label_19;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_96_bool);
	if(!var_96_bool) { //@nz
		var_91_bool = false;
		return 2;
	}
	var_115_float = GetByIndex(var_93_cvector, 0);
	var_116_float = GetByIndex(var_93_cvector, 2);
	@Rotate(var_115_float, var_116_float, var_96_bool);
	if(!var_96_bool) { //@nz
		var_91_bool = false;
		return 2;
	}
	var_91_bool = true;
	
}


void func_1557(int var_109_int, string var_110_string)
{
	int var_112_int;
	@GetVariable(var_110_string, var_112_int);
	var_112_int = var_109_int;
}


// @pe
void func_1817(bool var_166_bool)
{
	int var_168_int;
	func_1557(var_168_int, "d5q02");
	if(var_168_int == 4)
		var_166_bool = true;
	var_166_bool = false;
}


void func_1562(int var_74_int, int var_75_int)
{
	object var_77_object;
	@CreateIntVector(var_77_object);
	var_77_object->add(var_74_int);
	var_77_object->add(var_75_int);
	@SendWorldWndMessage(3, var_77_object);
}
EMIT "Stack[-1] = 0";


void func_282(bool var_0_bool, int var_28_int, object var_29_object)
{
	var_0_bool = var_29_object;
	bool var_39_bool; object var_40_object;
	var_29_object = var_40_object;
	func_1418(var_39_bool, var_40_object, 100.0);
	if(!var_39_bool) { //@nz
		var_28_int = -2;
		return 8;
	}
	object var_35_object;
	@CreateDialog(var_35_object);
	int var_86_int;
	func_1981(var_86_int);
	var_35_object->SetNPCName(var_86_int);
	int var_87_int;
	func_1979(var_87_int);
	var_35_object->SetNPCDescription(var_87_int);
	string var_88_string;
	func_1983(var_88_string);
	var_35_object->SetPhoto(var_88_string);
	string var_89_string;
	func_1985(var_89_string);
	var_35_object->SetPhoto2(var_89_string);
	int var_90_int;
	func_1962(var_90_int);
	var_35_object->SetPlayerName(var_90_int);
	bool var_36_bool;
	@IsOverrideActive(var_36_bool);
	if(var_36_bool != 0) {
		var_28_int = -2;
		return 8;
	}
	@DoDialog(var_35_object);
	object var_99_object; object var_100_object;
	var_29_object = var_99_object;
	var_35_object = var_100_object;
	TaskCall(5);
	func_356(var_101_object, var_102_object, var_103_string, var_104_bool, var_99_object, var_100_object);
	TaskReturn();
	bool var_38_bool;
	var_35_object->IsDialogEnd(var_38_bool);
	
	for(;;) {
		var_203_bool = !var_38_bool; //@nz
		if(var_203_bool == 0) goto Label_345;
		@sync();
		var_35_object->IsDialogEnd(var_38_bool);
	}
	
Label_345:
	object var_204_object;
	var_29_object = var_204_object;
	func_1486();
	@StopDialog(var_35_object);
	var_35_object->GetReturnValue(-1);
	int var_37_int = var_28_int;
}
EMIT "Stack[-4] = 0";


void func_1308(void)
{
	string var_33_string;
	@GetProperty("loc", var_33_string);
	var_35_string = GlobalVars[0];
	var_33_string = var_35_string;
	GlobalVars[0] = var_35_string;
}


void func_1316(bool var_0_bool, object var_1_object)
{
	cvector var_54_cvector;
	@GetAnimationOffset(var_54_cvector, "all", "walk_stopl");
	cvector var_55_cvector;
	@GetAnimationOffset(var_55_cvector, "all", "walk_stopr");
	var_60_float = GetByIndex(var_54_cvector, 2);
	var_61_float = GetByIndex(var_55_cvector, 2);
	float var_64_float;
	var_66_float = GetByIndex(var_54_cvector, 2);
	func_1539(var_64_float, (var_66_float - ((var_60_float + var_61_float) / 2.0)));
	var_1_object = var_64_float + 40;
}


// @pe
void func_1829(bool var_172_bool)
{
	int var_174_int;
	func_1557(var_174_int, "d5q02KnowNudeIsDead");
	if(var_174_int == 1)
		var_172_bool = true;
	var_172_bool = false;
}


void func_1574(object var_61_object, int var_62_int)
{
	int var_64_int;
	object var_65_object;
	var_61_object = var_65_object;
	int var_67_int;
	func_1376(var_65_object, "money", var_67_int);
	if(var_67_int > 0) {
		@GetInvItemByName(var_64_int, "Money");
		int var_74_int; int var_75_int;
		var_64_int = var_74_int;
		var_62_int = var_75_int;
		func_1562(var_74_int, var_75_int);
	}
}


// @pe
void func_1841(bool var_191_bool)
{
	int var_193_int;
	func_1557(var_193_int, "ood5Gorbun2");
	if(var_193_int == 0) {
		var_191_bool = true;
		return 0;
	}
	var_191_bool = false;
}


void func_1593(float var_32_float)
{
	float var_34_float;
	@GetGameTime(var_34_float);
	var_34_float = var_32_float;
}


// @pe
void func_1853(bool var_179_bool)
{
	int var_181_int;
	func_1557(var_181_int, "ood5Gorbun3");
	if(var_181_int == 0) {
		var_179_bool = true;
		return 0;
	}
	var_179_bool = false;
}


void func_1598(string var_160_string, int var_161_int)
{
	string var_163_string = "idle";
	if(var_161_int != 0)
		var_163_string += var_161_int;
	var_163_string = var_160_string;
}


void func_1605(int var_154_int)
{
	int var_157_int; bool var_158_bool;
	var_157_int = 0;
	
	for(;;) {
		string var_160_string; int var_161_int;
		var_157_int = var_161_int;
		func_1598(var_160_string, var_161_int);
		@HasAnimation(var_158_bool, "all", var_160_string);
		if(!var_158_bool) //@nz
			break;
		var_157_int += 1;
	}
	var_157_int = var_154_int;
}


void func_1865(void)
{
	object var_90_object;
	@CreateDiaryEntry(var_90_object, 715, 2, 536323);
	bool var_94_bool; object var_95_object;
	var_90_object = var_95_object;
	func_1917(var_94_bool, var_95_object, 148);
}
EMIT "Stack[-1] = 0";


void func_1363(cvector var_72_cvector)
{
	cvector var_74_cvector;
	@GetPosition(var_74_cvector);
	var_74_cvector = var_72_cvector;
}


// @pe
void func_1622(string var_36_string, int var_37_int)
{
	if(var_37_int == 0) {
		var_41_string = GlobalVars[0];
		var_36_string = "pt_" + var_41_string;
	} else {
		var_43_string = GlobalVars[0];
		var_36_string = ("pt_" + var_43_string) + var_37_int;
	}
	
}


void func_1878(void)
{
	object var_36_object;
	@CreateDiaryEntry(var_36_object, 150, 2, 515356);
	bool var_40_bool; object var_41_object;
	var_36_object = var_41_object;
	func_1917(var_40_bool, var_41_object, 148);
}
EMIT "Stack[-1] = 0";


void func_1368(float var_21_float, object var_22_object)
{
	cvector var_26_cvector;
	@GetPosition(var_26_cvector);
	cvector var_27_cvector;
	var_22_object->GetPosition(var_27_cvector);
	var_21_float = (var_27_cvector - var_26_cvector) | (var_27_cvector - var_26_cvector);
}


void func_1376(object var_65_object, string var_66_string, int var_67_int)
{
	int var_69_int;
	var_65_object->GetProperty(var_66_string, var_69_int);
	var_65_object->SetProperty(var_66_string, (var_69_int + var_67_int));
}


void func_1891(void)
{
	object var_154_object;
	@CreateDiaryEntry(var_154_object, 153, 2, 515359);
	bool var_158_bool; object var_159_object;
	var_154_object = var_159_object;
	func_1917(var_158_bool, var_159_object, 148);
}
EMIT "Stack[-1] = 0";


// @pe
void func_356(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_99_object, object var_100_object)
{
	var_0_bool = var_100_object;
	var_1_object = var_99_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_106_bool = false;
		bool var_107_bool;
		func_1793(var_1_object);
		if(var_107_bool != 0) {
			bool var_115_bool;
			func_1805(var_1_object);
			if(var_115_bool != 0)
				var_106_bool = true;
		}
		if(var_106_bool != 0) {
			object var_121_object; object var_122_object;
			var_121_object = var_1_object;
			var_122_object = var_0_bool;
			func_1715();
			func_506(var_100_object, "Neutral");
			var_0_bool->SetMessage(511917); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(515734, 16793, 16792); //@t
			var_0_bool->AddReply(515732, 16791, 16790); //@t
		} else {
					func_506(var_100_object, "Neutral");
					var_0_bool->SetMessage(511935); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_159_bool;
					func_1793(var_1_object);
					if(var_159_bool != 0)
						var_0_bool->AddReply(512489, 13660, 13658); //@t
					bool var_164_bool = false;
					bool var_165_bool = false;
					bool var_166_bool;
					func_1817(var_1_object);
					if(var_166_bool != 0) {
						bool var_172_bool;
						func_1829(var_1_object);
						if(!var_172_bool) //@nz
							var_165_bool = true;
					}
					if(var_165_bool != 0) {
						bool var_179_bool;
						func_1853(var_1_object);
						if(var_179_bool != 0)
							var_164_bool = true;
					}
					if(var_164_bool != 0)
						var_0_bool->AddReply(511936, 13155, 13153); //@t
					bool var_188_bool = false;
					bool var_189_bool;
					func_1829(var_1_object);
					if(var_189_bool != 0) {
						bool var_191_bool;
						func_1841(var_1_object);
						if(var_191_bool != 0)
							var_188_bool = true;
					}
					if(var_188_bool != 0)
						var_0_bool->AddReply(511937, 13156, 13154); //@t
					var_0_bool->AddReply(512490, -1, 13659); //@t
		}
	}
	for(;;) {
		bool var_144_bool;
		func_1987(var_144_bool);
		if(var_144_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1503(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_505;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_505:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x168";


void func_1383(bool var_99_bool, cvector var_100_cvector)
{
	cvector var_104_cvector;
	@GetPosition(var_104_cvector);
	cvector var_105_cvector = var_100_cvector - var_104_cvector;
	var_107_float = GetByIndex(var_105_cvector, 0);
	var_108_float = GetByIndex(var_105_cvector, 2);
	bool var_106_bool;
	@Rotate(var_107_float, var_108_float, var_106_bool);
	var_106_bool = var_99_bool;
}


void func_1904(object var_49_object)
{
	object var_51_object;
	@GetDiaryRoot(var_51_object);
	if(!var_51_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_49_object = false;
	}
	var_51_object = var_49_object;
}
EMIT "Stack[-1] = 0";


void func_1393(bool var_13_bool, object var_14_object)
{
	cvector var_16_cvector;
	var_14_object->GetPosition(var_16_cvector);
	bool var_17_bool; cvector var_18_cvector;
	var_16_cvector = var_18_cvector;
	func_1383(var_17_bool, var_18_cvector);
	var_17_bool = var_13_bool;
}


void func_1402(object var_39_object)
{
	cvector var_43_cvector;
	var_39_object->GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_44_cvector;
	var_46_float = GetByIndex(var_45_cvector, 0);
	var_47_float = GetByIndex(var_45_cvector, 2);
	@RotateAsync(var_46_float, var_47_float);
}


void func_1917(bool var_40_bool, object var_41_object, int var_42_int)
{
	object var_49_object;
	func_1904(var_49_object);
	object var_46_object;
	var_49_object = var_46_object;
	object var_47_object;
	var_46_object->Find(var_42_int, var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_42_int);
		var_40_bool = false;
	}
	var_47_object->AddChild(var_41_object);
	@SendWorldWndMessage(7);
	int var_48_int;
	var_41_object->GetCategory(var_48_int);
	@SetDiarySection(var_48_int);
	var_40_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1667(object var_58_object)
{
	@Trace("money10000 is given");
	object var_61_object;
	var_58_object = var_61_object;
	func_1574(var_61_object, 10000);
}


void func_1413(bool var_46_bool)
{
	bool var_48_bool;
	@IsLoaded(var_48_bool);
	var_48_bool = var_46_bool;
}


void func_1418(bool var_39_bool, object var_40_object, float var_41_float)
{
	cvector var_52_cvector; bool var_59_bool;
	var_40_object->GetPosition(var_52_cvector);
	float var_51_float;
	var_40_object->GetEyesHeight(var_51_float);
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (var_60_float + var_51_float);
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	@GetEyesHeight(var_51_float);
	var_61_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (var_61_float + var_51_float);
	cvector var_54_cvector = var_52_cvector - var_53_cvector;
	var_62_float = GetByIndex(var_54_cvector, 1);
	SetByIndex(var_54_cvector, 1) = (float)0;
	var_64_float = sqrt(var_54_cvector | var_54_cvector);
	var_54_cvector /= var_64_float;
	cvector var_55_cvector = -var_54_cvector;
	cvector var_66_cvector;
	func_1529(var_66_cvector, (var_55_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_56_cvector = ((var_54_cvector * var_41_float) + (var_66_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_58_bool;
	@IsOverrideActive(var_58_bool);
	if(var_58_bool != 0)
		var_39_bool = false;
	@StopWorld();
	@CameraTransit((var_53_cvector + var_56_cvector), var_55_cvector);
	var_79_float = GetByIndex(var_56_cvector, 0);
	var_80_float = GetByIndex(var_56_cvector, 2);
	@Rotate(var_79_float, var_80_float);
	bool var_81_bool;
	func_1987(var_81_bool);
	if(var_81_bool != 0) {
	} else {
		@HasAnimationTrack(var_59_bool, "head");
		if(var_59_bool == 0) goto Label_1480;
		@LookAsyncCamera("head");
	}
Label_1480:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_39_bool = true;
	
}


// @pe
void func_1677(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_145(void)
{
	@Stop();
}


// @pe
void func_1683(void)
{
	@SetVariable("d5q02", -1);
	func_1865();
}


void func_148(object var_35_object)
{
	bool var_37_bool;
	@WaitForAnimEnd(var_37_bool);
	if(!var_37_bool) { //@nz
	}
	object var_39_object;
	var_35_object = var_39_object;
	func_1402(var_39_object);
	@Sleep(6);
}


void func_1945(object var_21_object)
{
	object var_24_object; object var_25_object;
	@GetMainOutdoorScene(var_24_object);
	if(var_24_object == null) {
		@Trace("Can't find main outdoor scene");
		var_25_object = null;
		var_25_object = var_21_object;
	}
	var_24_object->GetMap(var_25_object);
	var_25_object = var_21_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1692(void)
{
	@SetVariable("d5q02", 2);
	object var_21_object;
	func_1945(var_21_object);
	object var_18_object;
	var_21_object = var_18_object;
	float var_32_float;
	func_1593(var_32_float);
	var_18_object->AddMark("d5q02GorbunFindTheDaughter", "pt_map_gorbun", 0, 515362, var_32_float);
	func_1878();
}
EMIT "Stack[-1] = 0";


void func_1962(int var_90_int)
{
	int var_92_int;
	@GetVariable("branch", var_92_int);
	if(var_92_int == 0) {
		var_90_int = 1;
		return 2;
	EMIT "GOTO 0x7b9";
	}
	if(var_92_int == 1) {
		var_90_int = 2;
		return 2;
	}
	var_90_int = 3;
}


// @pe
void func_1715(void)
{
	@SetVariable("ood5Gorbun1", 1);
}


void func_1721(void)
{
	@SetVariable("d5q02", 1000);
	object var_142_object;
	func_1945(var_142_object);
	object var_138_object;
	var_142_object = var_138_object;
	object var_139_object;
	var_138_object->FindMark(var_139_object, "d5q02AnnaGotoGorbun");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d5q02AnnaGotoGorbunSelf");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d5q02AnnaGotoKabak");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d5q02GorbunFindTheDaughter");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d5q02NudeMeeting");
	if(var_139_object != 0)
		var_139_object->Remove();
	func_1891();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1979(int var_87_int)
{
	var_87_int = 515594;
}


void func_1981(int var_86_int)
{
	var_86_int = 512583;
}


void func_1983(string var_88_string)
{
	var_88_string = "ui/NPC_Citizen3.png";
}


void func_193(void)
{
	@StopGroup0();
	@StopAnimation();
}


void func_1985(string var_89_string)
{
	var_89_string = "ui/NPC_Citizen3_b.png";
}


void func_1987(bool var_81_bool)
{
	var_81_bool = false;
}


// @pe
void func_1989(object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	TaskCall(4);
	int var_28_int;
	func_282(var_30_object, var_28_int, var_29_object);
	TaskReturn();
}


void func_198(int var_118_int)
{
	string var_126_string; string var_128_string; int var_129_int; int var_130_int; int var_131_int; int var_132_int;
	if(var_118_int != 0)
		var_126_string = "ptidle" + var_118_int;
	else
		var_126_string = "ptidle";
	bool var_127_bool;
	@HasProperty(var_126_string, var_127_bool);
	if(var_127_bool != 0) {
		@GetProperty(var_126_string, var_128_string);
		int var_136_int; string var_137_string;
		var_128_string = var_137_string;
		func_264(var_136_int, var_137_string);
		var_136_int = var_129_int;
		@irand(var_130_int, var_129_int);
		string var_151_string; string var_152_string; int var_153_int;
		var_128_string = var_152_string;
		var_130_int = var_153_int;
		func_256(var_151_string, var_152_string, var_153_int);
		@PlayAnimation("all", var_151_string);
		@WaitForAnimEnd();
	} else {
		int var_154_int;
		func_1605(var_154_int);
		var_154_int = var_131_int;
		if(var_131_int == 0) goto Label_246;
		@irand(var_132_int, var_131_int);
		string var_169_string; int var_170_int;
		var_132_int = var_170_int;
		func_1598(var_169_string, var_170_int);
		@PlayAnimation("all", var_169_string);
		@WaitForAnimEnd();

	}
Label_246:
	
}


void func_1486(void)
{
	bool var_206_bool;
	@CameraSwitchToNormal();
	bool var_207_bool;
	func_1987(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		@HasAnimationTrack(var_206_bool, "head");
		if(var_206_bool == 0) goto Label_1502;
		@UnlookAsync("head");
	}
Label_1502:
	
}


void func_1503(string var_146_string)
{
	float var_149_float; float var_150_float;
	@lshGetAnimTimes(var_146_string, var_149_float, var_150_float);
	@lshPlayAnimation(var_149_float, var_150_float, false);
}


void func_1510(string var_129_string, bool var_130_bool)
{
	float var_135_float; float var_136_float;
	@lshGetAnimTimes(var_129_string, var_135_float, var_136_float);
	@lshPlayAnimation(var_135_float, var_136_float, var_130_bool);
}


// @pe
void func_1771(void)
{
	@SetVariable("ood5Gorbun2", 1);
}


void func_1516(void)
{
	bool var_12_bool;
	func_1987(var_12_bool);
	if(var_12_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1777(void)
{
	@SetVariable("ood5Gorbun3", 1);
}


void func_1523(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1783(object var_119_object)
{
	@Trace("money 50000 is given");
	object var_122_object;
	var_119_object = var_122_object;
	func_1574(var_122_object, 50000);
}


void func_1529(cvector var_66_cvector, cvector var_67_cvector)
{
	float var_70_float = sqrt(var_67_cvector | var_67_cvector);
	if(var_70_float < 0.000001)
		var_66_cvector = [0.0, 0.0, 0.0];
	var_66_cvector = var_67_cvector / var_70_float;
}


// @pe
void func_506(object var_2_object, string var_125_string)
{
	bool var_126_bool;
	func_1987(var_126_bool);
	if(!var_126_bool) //@nz
		return 0;
	if(var_125_string == var_2_object)
		return 0;
	string var_129_string; bool var_130_bool;
	var_125_string = var_129_string;
	if(var_125_string == "")
		var_130_bool = false;
	else
		var_130_bool = true;
	func_1510(var_129_string, var_130_bool);
	var_2_object = var_125_string;
	
}


