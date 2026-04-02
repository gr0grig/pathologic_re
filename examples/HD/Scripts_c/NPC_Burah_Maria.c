// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2254();
			if(var_26_bool == 19160) {
				func_139(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518027); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518028, 29772, 19161); //@t
				var_0_object->AddReply(528396, 29772, 29771); //@t
				return 0;
			}
			if(var_26_bool == 29772) {
				func_139(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528397); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528398, -1, 29773); //@t
				var_0_object->AddReply(528399, -1, 29774); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_2395(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2254();
			if(var_27_cvector == 22521) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2397();
				object var_97_object = var_1_object;
				func_2458(var_0_object);
			}
			if(var_27_cvector == 22528) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_2397();
				object var_127_object = var_1_object;
				func_2458(var_0_object);
			}
			if(var_27_cvector == 22525) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_2432();
			}
			if(var_27_cvector == 22530) {
				object var_137_object = var_1_object;
				func_2444(var_0_object);
				object var_154_object = var_1_object;
				func_2492(var_0_object);
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_2502();
			}
			if(var_27_cvector == 29751) {
				object var_181_object = var_1_object;
				func_2444(var_0_object);
				object var_183_object = var_1_object;
				func_2492(var_0_object);
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_2502();
			}
			if(var_26_bool == 22520) {
				bool var_189_bool;
				func_2532(var_1_object);
				if(!var_189_bool) { //@nz
					object var_198_object; object var_199_object;
					var_198_object = var_1_object;
					var_199_object = var_0_object;
					func_2438();
					func_415(var_27_cvector, "Neutral");
					var_0_object->SetMessage(521326); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528379, 29753, 29752); //@t
					return 0;
				}
				func_415(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521329); //@t
				var_0_object->ClearReplies(); //@t
				bool var_225_bool;
				func_2520(var_1_object);
				if(var_225_bool != 0)
					var_0_object->AddReply(521330, 22527, 22524); //@t
				bool var_234_bool = false;
				bool var_235_bool;
				func_2544(var_235_bool, var_1_object);
				if(var_235_bool != 0) {
					bool var_244_bool;
					func_2508(var_1_object);
					if(var_244_bool != 0)
						var_234_bool = true;
				}
				if(var_234_bool != 0)
					var_0_object->AddReply(521331, 22529, 22525); //@t
				var_0_object->AddReply(521332, -1, 22526); //@t
				return 0;
			}
			if(var_26_bool == 22529) {
				func_415(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521335); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521336, -1, 22530); //@t
				var_0_object->AddReply(528376, 29750, 29749); //@t
				return 0;
			}
			if(var_26_bool == 29750) {
				func_415(var_27_cvector, "Angry");
				var_0_object->SetMessage(528377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528378, -1, 29751); //@t
				return 0;
			}
			if(var_26_bool == 22527) {
				func_415(var_27_cvector, "Staring");
				var_0_object->SetMessage(521333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528374, 29748, 29747); //@t
				return 0;
			}
			if(var_26_bool == 29748) {
				func_415(var_27_cvector, "Staring");
				var_0_object->SetMessage(528375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521334, -1, 22528); //@t
				return 0;
			}
			if(var_26_bool == 29753) {
				func_415(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528381, 29755, 29754); //@t
				return 0;
			}
			if(var_26_bool == 29755) {
				func_415(var_27_cvector, "Staring");
				var_0_object->SetMessage(528382); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528383, 29757, 29756); //@t
				var_0_object->AddReply(528386, 29760, 29759); //@t
				return 0;
			}
			if(var_26_bool == 29760) {
				func_415(var_27_cvector, "Staring");
				var_0_object->SetMessage(528387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528388, 29762, 29761); //@t
				return 0;
			}
			if(var_26_bool == 29762) {
				func_415(var_27_cvector, "Staring");
				var_0_object->SetMessage(528389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528390, 29757, 29763); //@t
				var_0_object->AddReply(528391, 29765, 29764); //@t
				var_0_object->AddReply(528394, -1, 29768); //@t
				return 0;
			}
			if(var_26_bool == 29765) {
				func_415(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528393, 29757, 29766); //@t
				return 0;
			}
			if(var_26_bool == 29757) {
				func_415(var_27_cvector, "Staring");
				var_0_object->SetMessage(528384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521327, -1, 22521); //@t
				var_0_object->AddReply(528395, -1, 29770); //@t
				return 0;
			}
			var_3_string = true;
			bool var_341_bool;
			func_2395(var_341_bool);
			if(var_341_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b6";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2254();
			if(var_27_cvector == 24381) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2474();
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_2486();
			}
			if(var_27_cvector == 24390) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_2480();
			}
			if(var_26_bool == 24380) {
				func_978(var_27_cvector, "Neutral");
				var_0_object->SetMessage(523177); //@t
				var_0_object->ClearReplies(); //@t
				bool var_66_bool;
				func_2579(var_1_object);
				if(var_66_bool != 0)
					var_0_object->AddReply(523178, 24382, 24381); //@t
				bool var_77_bool = false;
				bool var_78_bool = false;
				bool var_79_bool;
				func_2555(var_1_object);
				if(!var_79_bool) { //@nz
					bool var_86_bool;
					func_2567(var_1_object);
					if(!var_86_bool) //@nz
						var_78_bool = true;
				}
				if(var_78_bool != 0) {
					bool var_93_bool;
					func_2591(var_1_object);
					if(var_93_bool != 0)
						var_77_bool = true;
				}
				if(var_77_bool != 0)
					var_0_object->AddReply(523187, 42102, 24390); //@t
				var_0_object->AddReply(523186, -1, 24389); //@t
				return 0;
			}
			if(var_26_bool == 42102) {
				func_978(var_27_cvector, "Rage");
				var_0_object->SetMessage(540130); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540131, 24391, 42103); //@t
				return 0;
			}
			if(var_26_bool == 24391) {
				func_978(var_27_cvector, "Rage");
				var_0_object->SetMessage(523188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523189, -1, 24392); //@t
				return 0;
			}
			if(var_26_bool == 24382) {
				func_978(var_27_cvector, "Angry");
				var_0_object->SetMessage(523179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523180, 24384, 24383); //@t
				var_0_object->AddReply(540132, -1, 42104); //@t
				return 0;
			}
			if(var_26_bool == 24384) {
				func_978(var_27_cvector, "Rage");
				var_0_object->SetMessage(523181); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523182, 24386, 24385); //@t
				var_0_object->AddReply(540133, -1, 42105); //@t
				return 0;
			}
			if(var_26_bool == 24386) {
				func_978(var_27_cvector, "Rage");
				var_0_object->SetMessage(523183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523184, 24388, 24387); //@t
				var_0_object->AddReply(540134, -1, 42106); //@t
				return 0;
			}
			if(var_26_bool == 24388) {
				func_978(var_27_cvector, "Rage");
				var_0_object->SetMessage(523185); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523190, -1, 24393); //@t
				var_0_object->AddReply(523191, -1, 24394); //@t
				return 0;
			}
			var_3_string = true;
			bool var_159_bool;
			func_2395(var_159_bool);
			if(var_159_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3e9";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2254();
			if(var_26_bool == 36906) {
				func_1370(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_26_bool == 36953) {
				func_1370(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_26_bool == 36957) {
				func_1370(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_79_bool;
			func_2395(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x571";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2254();
			if(var_26_int == 42560) {
				func_1624(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2395(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x66f";
	
	}

}


maintask task_10
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1692(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1757();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1978(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1726(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1706(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2261(var_72_object);
					var_72_object = var_71_object;
					func_2128(var_70_bool, var_71_object);
				}
			} else {
				func_1721(var_26_int);
				func_1748();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1939();
		func_1757();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		func_1757();
		func_2208("Neutral");
		func_1748();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1748();
		else
			func_2208("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1939();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1969(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2756(var_44_object);
			func_2208("Neutral");
			func_1757();
			func_1748();
		}
	}

}


void func_0(object var_0_object, int var_51_int, object var_52_object)
{
	var_0_object = var_52_object;
	bool var_62_bool; object var_63_object;
	var_52_object = var_63_object;
	func_1983(var_62_bool, var_63_object, 70.0);
	if(!var_62_bool) { //@nz
		var_51_int = -2;
		return 8;
	}
	object var_58_object;
	@CreateDialog(var_58_object);
	int var_110_int;
	func_2389(var_110_int);
	var_58_object->SetNPCName(var_110_int);
	int var_111_int;
	func_2387(var_111_int);
	var_58_object->SetNPCDescription(var_111_int);
	string var_112_string;
	func_2391(var_112_string);
	var_58_object->SetPhoto(var_112_string);
	string var_113_string;
	func_2393(var_113_string);
	var_58_object->SetPhoto2(var_113_string);
	int var_114_int;
	func_2733(var_114_int);
	var_58_object->SetPlayerName(var_114_int);
	bool var_59_bool;
	@IsOverrideActive(var_59_bool);
	if(var_59_bool != 0) {
		var_51_int = -2;
		return 8;
	}
	@DoDialog(var_58_object);
	bool var_123_bool; object var_124_object;
	object var_125_object;
	func_2261(var_125_object);
	var_125_object = var_124_object;
	func_2070(var_123_bool, var_124_object);
	object var_218_object; object var_219_object;
	var_52_object = var_218_object;
	var_58_object = var_219_object;
	TaskCall(1);
	func_81(var_220_object, var_221_object, var_222_string, var_223_bool, var_218_object, var_219_object);
	TaskReturn();
	bool var_61_bool;
	var_58_object->IsDialogEnd(var_61_bool);
	
	for(;;) {
		var_267_bool = !var_61_bool; //@nz
		if(var_267_bool == 0) goto Label_70;
		@sync();
		var_58_object->IsDialogEnd(var_61_bool);
	}
	
Label_70:
	object var_268_object;
	var_52_object = var_268_object;
	func_2052();
	@StopDialog(var_58_object);
	var_58_object->GetReturnValue(-1);
	int var_60_int = var_51_int;
}
EMIT "Stack[-4] = 0";


void func_2305(object var_157_object, int var_158_int)
{
	int var_160_int;
	object var_161_object;
	var_157_object = var_161_object;
	int var_163_int;
	func_1952(var_161_object, "money", var_163_int);
	if(var_163_int > 0) {
		@GetInvItemByName(var_160_int, "Money");
		int var_170_int; int var_171_int;
		var_160_int = var_170_int;
		var_158_int = var_171_int;
		func_2293(var_170_int, var_171_int);
	}
}


void func_2052(void)
{
	bool var_270_bool;
	@CameraSwitchToNormal(true);
	bool var_272_bool;
	func_2395(var_272_bool);
	if(var_272_bool != 0) {
	} else {
		@HasAnimationTrack(var_270_bool, "head");
		if(var_270_bool == 0) goto Label_2069;
		@UnlookAsync("head");
	}
Label_2069:
	
}


// @pe
void func_2567(bool var_446_bool)
{
	int var_448_int;
	func_2277(var_448_int, "game_final");
	if(var_448_int == 0) {
		var_446_bool = true;
		return 0;
	}
	var_446_bool = false;
}


// @pe
void func_2579(bool var_428_bool)
{
	int var_430_int;
	func_2277(var_430_int, "oob12Maria1");
	if(var_430_int == 0) {
		var_428_bool = true;
		return 0;
	}
	var_428_bool = false;
}


void func_2324(bool var_359_bool, object var_360_object, string var_361_string)
{
	int var_364_int;
	@GetInvItemByName(var_364_int, var_361_string);
	bool var_365_bool;
	var_360_object->HasItem(var_364_int, var_365_bool);
	var_365_bool = var_359_bool;
}


void func_2070(bool var_123_bool, object var_124_object)
{
	int var_130_int; int var_131_int;
	@GetVariable("voice_common", var_130_int);
	if(var_130_int != 0) {
		bool var_134_bool; object var_135_object;
		var_124_object = var_135_object;
		func_2128(var_134_bool, var_135_object);
		if(!var_134_bool) { //@nz
			bool var_165_bool; object var_166_object;
			var_124_object = var_166_object;
			func_2165(var_165_bool, var_166_object);
			if(!var_165_bool) { //@nz
				var_123_bool = false;
				return 4;
			}
		}
		@irand(var_131_int, 2);
		if(var_131_int != 0)
			@SetVariable("voice_common", ((var_130_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_210_bool; object var_211_object;
		var_124_object = var_211_object;
		func_2165(var_210_bool, var_211_object);
		if(!var_210_bool) { //@nz
			bool var_213_bool; object var_214_object;
			var_124_object = var_214_object;
			func_2128(var_213_bool, var_214_object);
			if(!var_213_bool) { //@nz
				var_123_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2126;
	
Label_2126:
	var_123_bool = true;
	
}


// @pe
void func_1307(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_501_object, object var_502_object)
{
	var_0_object = var_502_object;
	var_1_object = var_501_object;
	var_3_string = false;
	if(1 != 0) {
		func_1370(var_502_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_1340;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x51f";
	}
Label_1340:
	bool var_526_bool;
	func_2395(var_526_bool);
	if(var_526_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2208(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1369;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1369:
		return 0;

	}
	
}


void func_2331(bool var_91_bool, string var_92_string, string var_93_string)
{
	object var_95_object;
	@FindActor(var_95_object, var_92_string);
	if(var_95_object == null)
		var_91_bool = false;
	@Trigger(var_95_object, var_93_string);
	var_91_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1566(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_562_object, object var_563_object)
{
	var_0_object = var_563_object;
	var_1_object = var_562_object;
	var_3_string = false;
	if(1 != 0) {
		func_1624(var_563_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1594;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x622";
	}
Label_1594:
	bool var_584_bool;
	func_2395(var_584_bool);
	if(var_584_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2208(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1623;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1623:
		return 0;

	}
	
}


// @pe
void func_2591(bool var_453_bool)
{
	int var_455_int;
	func_2277(var_455_int, "oob12Maria2");
	if(var_455_int == 0) {
		var_453_bool = true;
		return 0;
	}
	var_453_bool = false;
}


void func_804(object var_0_object, int var_388_int, object var_389_object)
{
	var_0_object = var_389_object;
	bool var_399_bool; object var_400_object;
	var_389_object = var_400_object;
	func_1983(var_399_bool, var_400_object, 70.0);
	if(!var_399_bool) { //@nz
		var_388_int = -2;
		return 8;
	}
	object var_395_object;
	@CreateDialog(var_395_object);
	int var_403_int;
	func_2389(var_403_int);
	var_395_object->SetNPCName(var_403_int);
	int var_404_int;
	func_2387(var_404_int);
	var_395_object->SetNPCDescription(var_404_int);
	string var_405_string;
	func_2391(var_405_string);
	var_395_object->SetPhoto(var_405_string);
	string var_406_string;
	func_2393(var_406_string);
	var_395_object->SetPhoto2(var_406_string);
	int var_407_int;
	func_2733(var_407_int);
	var_395_object->SetPlayerName(var_407_int);
	bool var_396_bool;
	@IsOverrideActive(var_396_bool);
	if(var_396_bool != 0) {
		var_388_int = -2;
		return 8;
	}
	@DoDialog(var_395_object);
	bool var_409_bool; object var_410_object;
	object var_411_object;
	func_2261(var_411_object);
	var_411_object = var_410_object;
	func_2070(var_409_bool, var_410_object);
	object var_412_object; object var_413_object;
	var_389_object = var_412_object;
	var_395_object = var_413_object;
	TaskCall(5);
	func_885(var_414_object, var_415_object, var_416_string, var_417_bool, var_412_object, var_413_object);
	TaskReturn();
	bool var_398_bool;
	var_395_object->IsDialogEnd(var_398_bool);
	
	for(;;) {
		var_473_bool = !var_398_bool; //@nz
		if(var_473_bool == 0) goto Label_874;
		@sync();
		var_395_object->IsDialogEnd(var_398_bool);
	}
	
Label_874:
	object var_474_object;
	var_389_object = var_474_object;
	func_2052();
	@StopDialog(var_395_object);
	var_395_object->GetReturnValue(-1);
	int var_397_int = var_388_int;
}
EMIT "Stack[-4] = 0";


void func_2343(float var_49_float)
{
	float var_51_float;
	@GetGameTime(var_51_float);
	var_51_float = var_49_float;
}


void func_2603(void)
{
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 276, 2, 521337);
	bool var_57_bool; object var_58_object;
	var_53_object = var_58_object;
	func_2655(var_57_bool, var_58_object, -1);
}
EMIT "Stack[-1] = 0";


void func_2348(int var_178_int)
{
	float var_180_float;
	@GetGameTime(var_180_float);
	var_178_int = 1 + (var_180_float / 24);
}


// @pe
void func_307(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_305_object, object var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_312_bool;
		func_2532(var_1_object);
		if(!var_312_bool) { //@nz
			object var_321_object; object var_322_object;
			var_321_object = var_1_object;
			var_322_object = var_0_object;
			func_2438();
			func_415(var_306_object, "Neutral");
			var_0_object->SetMessage(521326); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528379, 29753, 29752); //@t
		} else {
					func_415(var_306_object, "Neutral");
					var_0_object->SetMessage(521329); //@t
					var_0_object->ClearReplies(); //@t
					bool var_347_bool;
					func_2520(var_1_object);
					if(var_347_bool != 0)
						var_0_object->AddReply(521330, 22527, 22524); //@t
					bool var_356_bool = false;
					bool var_357_bool;
					func_2544(var_357_bool, var_1_object);
					if(var_357_bool != 0) {
						bool var_366_bool;
						func_2508(var_1_object);
						if(var_366_bool != 0)
							var_356_bool = true;
					}
					if(var_356_bool != 0)
						var_0_object->AddReply(521331, 22529, 22525); //@t
					var_0_object->AddReply(521332, -1, 22526); //@t
		}
	}
	for(;;) {
		bool var_337_bool;
		func_2395(var_337_bool);
		if(var_337_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2208(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_414;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_414:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x137";


// @pe
void func_2357(bool var_278_bool, int var_279_int)
{
	int var_280_int;
	func_2348(var_280_int);
	var_278_bool = var_280_int == var_279_int;
}


void func_2616(void)
{
	object var_142_object;
	@CreateDiaryEntry(var_142_object, 279, 2, 521340);
	bool var_146_bool; object var_147_object;
	var_142_object = var_147_object;
	func_2655(var_146_bool, var_147_object, 276);
}
EMIT "Stack[-1] = 0";


void func_2363(string var_50_string, int var_51_int)
{
	string var_53_string = "idle";
	if(var_51_int != 0)
		var_53_string += var_51_int;
	var_53_string = var_50_string;
}


void func_2370(int var_44_int)
{
	int var_47_int; bool var_48_bool;
	var_47_int = 0;
	
	for(;;) {
		string var_50_string; int var_51_int;
		var_47_int = var_51_int;
		func_2363(var_50_string, var_51_int);
		@HasAnimation(var_48_bool, "all", var_50_string);
		if(!var_48_bool) //@nz
			break;
		var_47_int += 1;
	}
	var_47_int = var_44_int;
}


void func_2629(void)
{
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 277, 2, 521338);
	bool var_80_bool; object var_81_object;
	var_76_object = var_81_object;
	func_2655(var_80_bool, var_81_object, 276);
}
EMIT "Stack[-1] = 0";


void func_1868(void)
{
	bool var_38_bool; int var_39_int; int var_40_int; bool var_41_bool;
	@WaitForAnimEnd();
	bool var_42_bool;
	func_1978(var_42_bool);
	if(!var_42_bool) //@nz
		return 12;
	int var_44_int;
	func_2370(var_44_int);
	int var_36_int;
	var_44_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_57_bool = false;
		if(var_37_int < 5) {
			bool var_60_bool;
			func_1978(var_60_bool);
			if(var_60_bool != 0)
				var_57_bool = true;
		}
		if(var_57_bool != 0) {
			if(!var_36_int) { //@nz
				@Sleep(3, var_38_bool);
				if(!var_38_bool) { //@nz
				} else {
			} else {
			@irand(var_39_int, var_36_int);
			@irand(var_40_int, 5);
			if(var_40_int != 0)
				var_39_int = 0;
			string var_71_string; int var_72_int;
			var_39_int = var_72_int;
			func_2363(var_71_string, var_72_int);
			@PlayAnimation("all", var_71_string);
			@WaitForAnimEnd(var_41_bool);
			var_73_bool = !var_41_bool; //@nz
			if(var_73_bool == 0) goto Label_1923;
			goto Label_1934;
			}
				Label_1923:
					bool var_64_bool;
					func_1937(var_64_bool);
					var_65_bool = !var_64_bool; //@nz
					if(var_65_bool == 0) goto Label_1929;
			}
		}
	Label_1934:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1929:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_2128(bool var_134_bool, object var_135_object)
{
	string var_141_string; bool var_143_bool; int var_144_int; string var_145_string;
	var_141_string = "c";
	int var_142_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_135_object->HasProperty((var_141_string + (var_142_int + 1)), var_143_bool);
			if(!var_143_bool) { //@nz
			} else {
				var_142_int += 1;
			}
		}
		if(!var_142_int) { //@nz
			var_134_bool = false;
			return 10;
		}
		var_144_int = 0;
		if(var_142_int > 1)
			@irand(var_144_int, var_142_int);
		var_135_object->GetProperty((var_141_string + (var_144_int + 1)), var_145_string);
		bool var_157_bool; string var_158_string;
		var_145_string = var_158_string;
		func_2239(var_157_bool, var_158_string);
		var_157_bool = var_134_bool;
		return 10;

	}
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_218_object, object var_219_object)
{
	var_0_object = var_219_object;
	var_1_object = var_218_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_219_object, "Neutral");
		var_0_object->SetMessage(518027); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518028, 29772, 19161); //@t
		var_0_object->AddReply(528396, 29772, 29771); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_249_bool;
	func_2395(var_249_bool);
	if(var_249_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2208(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_2642(object var_66_object)
{
	object var_68_object;
	@GetDiaryRoot(var_68_object);
	if(!var_68_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_66_object = false;
	}
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


void func_2387(int var_111_int)
{
	var_111_int = 515543;
}


void func_2389(int var_110_int)
{
	var_110_int = 502868;
}


void func_2391(string var_112_string)
{
	var_112_string = "ui/NPC_Maria.png";
}


// @pe
void func_1624(object var_2_object, string var_569_string)
{
	bool var_570_bool;
	func_2395(var_570_bool);
	if(!var_570_bool) //@nz
		return 0;
	if(var_569_string == var_2_object)
		return 0;
	string var_573_string; bool var_574_bool;
	var_569_string = var_573_string;
	if(var_569_string == "")
		var_574_bool = false;
	else
		var_574_bool = true;
	func_2224(var_573_string, var_574_bool);
	var_2_object = var_569_string;
	
}


void func_2393(string var_113_string)
{
	var_113_string = "ui/NPC_Maria_b.png";
}


// @pe
void func_1370(object var_2_object, string var_508_string)
{
	bool var_509_bool;
	func_2395(var_509_bool);
	if(!var_509_bool) //@nz
		return 0;
	if(var_508_string == var_2_object)
		return 0;
	string var_512_string; bool var_513_bool;
	var_508_string = var_512_string;
	if(var_508_string == "")
		var_513_bool = false;
	else
		var_513_bool = true;
	func_2224(var_512_string, var_513_bool);
	var_2_object = var_508_string;
	
}


void func_2395(bool var_105_bool)
{
	var_105_bool = true;
}


void func_2397(void)
{
	@SetVariable("b6q03", 1);
	object var_38_object;
	func_2683(var_38_object);
	object var_35_object;
	var_38_object = var_35_object;
	float var_49_float;
	func_2343(var_49_float);
	var_35_object->AddMark("b6q03MariaGotoNina", "pt_map_nina", 0, 521342, var_49_float);
	func_2603();
	func_2629();
	object var_83_object;
	func_2282(var_83_object, "quest_b6_03");
	bool var_91_bool;
	func_2331(var_91_bool, "quest_b6_03", "init_grave");
}
EMIT "Stack[-1] = 0";


void func_2655(bool var_57_bool, object var_58_object, int var_59_int)
{
	object var_66_object;
	func_2642(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	object var_64_object;
	var_63_object->Find(var_59_int, var_64_object);
	if(!var_64_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_59_int);
		var_57_bool = false;
	}
	var_64_object->AddChild(var_58_object);
	@SendWorldWndMessage(7);
	int var_65_int;
	var_58_object->GetCategory(var_65_int);
	@SetDiarySection(var_65_int);
	var_57_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2165(bool var_165_bool, object var_166_object)
{
	bool var_174_bool; int var_175_int; string var_176_string;
	int var_178_int;
	func_2348(var_178_int);
	string var_172_string = ("d" + var_178_int) + "m";
	int var_173_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_166_object->HasProperty((var_172_string + (var_173_int + 1)), var_174_bool);
			if(!var_174_bool) { //@nz
			} else {
				var_173_int += 1;
			}
		}
		if(!var_173_int) { //@nz
			var_165_bool = false;
			return 10;
		}
		var_175_int = 0;
		if(var_173_int > 1)
			@irand(var_175_int, var_173_int);
		var_166_object->GetProperty((var_172_string + (var_175_int + 1)), var_176_string);
		bool var_197_bool; string var_198_string;
		var_176_string = var_198_string;
		func_2239(var_197_bool, var_198_string);
		var_197_bool = var_165_bool;
		return 10;

	}
}


// @pe
void func_885(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_412_object, object var_413_object)
{
	var_0_object = var_413_object;
	var_1_object = var_412_object;
	var_3_string = false;
	if(1 != 0) {
		func_978(var_413_object, "Neutral");
		var_0_object->SetMessage(523177); //@t
		var_0_object->ClearReplies(); //@t
		bool var_428_bool;
		func_2579(var_1_object);
		if(var_428_bool != 0)
			var_0_object->AddReply(523178, 24382, 24381); //@t
		bool var_437_bool = false;
		bool var_438_bool = false;
		bool var_439_bool;
		func_2555(var_1_object);
		if(!var_439_bool) { //@nz
			bool var_446_bool;
			func_2567(var_1_object);
			if(!var_446_bool) //@nz
				var_438_bool = true;
		}
		if(var_438_bool != 0) {
			bool var_453_bool;
			func_2591(var_1_object);
			if(var_453_bool != 0)
				var_437_bool = true;
		}
		if(var_437_bool != 0)
			var_0_object->AddReply(523187, 42102, 24390); //@t
		var_0_object->AddReply(523186, -1, 24389); //@t
		goto Label_948;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x379";
	}
Label_948:
	bool var_465_bool;
	func_2395(var_465_bool);
	if(var_465_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2208(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_977;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_977:
		return 0;

	}
	
}


void func_2683(object var_38_object)
{
	object var_41_object; object var_42_object;
	@GetMainOutdoorScene(var_41_object);
	if(var_41_object == null) {
		@Trace("Can't find main outdoor scene");
		var_42_object = null;
		var_42_object = var_38_object;
	}
	var_41_object->GetMap(var_42_object);
	var_42_object = var_38_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2432(void)
{
	@SetVariable("oob6Maria1", 1);
}


// @pe
void func_2438(void)
{
	@SetVariable("b6q03NinaTalk", 1);
}


// @pe
void func_139(object var_2_object, string var_225_string)
{
	bool var_226_bool;
	func_2395(var_226_bool);
	if(!var_226_bool) //@nz
		return 0;
	if(var_225_string == var_2_object)
		return 0;
	string var_229_string; bool var_230_bool;
	var_225_string = var_229_string;
	if(var_225_string == "")
		var_230_bool = false;
	else
		var_230_bool = true;
	func_2224(var_229_string, var_230_bool);
	var_2_object = var_225_string;
	
}


void func_2700(object var_99_object, string var_100_string, float var_101_float)
{
	object var_109_object;
	@GetMainOutdoorScene(var_109_object);
	if(var_109_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_107_cvector;
	cvector var_108_cvector;
	bool var_110_bool;
	var_109_object->GetLocator(var_100_string, var_110_bool, var_107_cvector, var_108_cvector);
	if(!var_110_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_100_string) + " doesnt exist");
	var_109_object->GetMap(var_99_object);
	if(var_99_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_120_float = GetByIndex(var_107_cvector, 0);
	var_121_float = GetByIndex(var_107_cvector, 2);
	var_99_object->SetMapParams(var_120_float, var_121_float, var_101_float);
}
EMIT "Stack[-2] = 0";


void func_2444(object var_137_object)
{
	func_2616();
	bool var_149_bool;
	func_2331(var_149_bool, "quest_b6_03", "completed");
	int var_140_int;
	var_137_object->RemoveItemByType(var_140_int, "b6q03_diary", 1);
}


void func_1937(bool var_64_bool)
{
	var_64_bool = true;
}


void func_1939(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1944(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


// @pe
void func_2458(object var_98_object)
{
	object var_102_object;
	func_2683(var_102_object);
	object var_99_object;
	var_102_object = var_99_object;
	func_2700(var_99_object, "pt_map_nina", (float)2);
	object var_122_object;
	func_2683(var_122_object);
	var_98_object->ShowMap(var_122_object);
}


void func_1692(object var_0_object)
{
	bool var_26_bool;
	func_1978(var_26_bool);
	if(!var_26_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1868();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_415(object var_2_object, string var_325_string)
{
	bool var_326_bool;
	func_2395(var_326_bool);
	if(!var_326_bool) //@nz
		return 0;
	if(var_325_string == var_2_object)
		return 0;
	string var_329_string; bool var_330_bool;
	var_325_string = var_329_string;
	if(var_325_string == "")
		var_330_bool = false;
	else
		var_330_bool = true;
	func_2224(var_329_string, var_330_bool);
	var_2_object = var_325_string;
	
}


void func_2208(string var_251_string)
{
	bool var_255_bool; float var_256_float; float var_257_float;
	@lshHasAnimation(var_255_bool, var_251_string);
	if(var_255_bool != 0) {
		@lshGetAnimTimes(var_251_string, var_256_float, var_257_float);
		@lshPlayAnimation(var_256_float, var_257_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_251_string);
	}
	
}


void func_1952(object var_161_object, string var_162_string, int var_163_int)
{
	int var_165_int;
	var_161_object->GetProperty(var_162_string, var_165_int);
	var_161_object->SetProperty(var_162_string, (var_165_int + var_163_int));
}


void func_1959(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


void func_1706(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1969(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2474(void)
{
	@SetVariable("oob12Maria1", 1);
}


void func_2733(int var_114_int)
{
	int var_116_int;
	@GetVariable("branch", var_116_int);
	if(var_116_int == 0) {
		var_114_int = 1;
		return 2;
	EMIT "GOTO 0xabc";
	}
	if(var_116_int == 1) {
		var_114_int = 2;
		return 2;
	}
	var_114_int = 3;
}


void func_2224(string var_229_string, bool var_230_bool)
{
	bool var_236_bool; float var_237_float; float var_238_float;
	@lshHasAnimation(var_236_bool, var_229_string);
	if(var_236_bool != 0) {
		@lshGetAnimTimes(var_229_string, var_237_float, var_238_float);
		@lshPlayAnimation(var_237_float, var_238_float, var_230_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_229_string);
	}
	
}


// @pe
void func_2480(void)
{
	@SetVariable("oob12Maria2", 1);
}


void func_1969(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1959(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


// @pe
void func_2486(void)
{
	@SetVariable("b12q01MariaFinalTalk", 1);
}


void func_1721(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_1978(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


// @pe
void func_2492(object var_154_object)
{
	@Trace("money2000 is given");
	object var_157_object;
	var_154_object = var_157_object;
	func_2305(var_157_object, 2000);
}


void func_1726(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1944(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_2239(bool var_157_bool, string var_158_string)
{
	bool var_160_bool;
	bool var_161_bool;
	func_2395(var_161_bool);
	if(var_161_bool != 0) {
		@lshHasSpeech(var_160_bool, var_158_string);
		if(var_160_bool != 0) {
			@lshPlaySpeech(var_158_string);
			var_157_bool = true;
		}
	}
	var_157_bool = false;
}


void func_2750(int var_382_int)
{
	int var_384_int;
	@GetVariable("game_final", var_384_int);
	var_384_int = var_382_int;
}


void func_1983(bool var_62_bool, object var_63_object, float var_64_float)
{
	cvector var_75_cvector; bool var_82_bool;
	var_63_object->GetPosition(var_75_cvector);
	float var_74_float;
	var_63_object->GetEyesHeight(var_74_float);
	var_83_float = GetByIndex(var_75_cvector, 1);
	SetByIndex(var_75_cvector, 1) = (var_83_float + var_74_float);
	cvector var_76_cvector;
	@GetPosition(var_76_cvector);
	@GetEyesHeight(var_74_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	SetByIndex(var_76_cvector, 1) = (var_84_float + var_74_float);
	cvector var_77_cvector = var_75_cvector - var_76_cvector;
	var_85_float = GetByIndex(var_77_cvector, 1);
	SetByIndex(var_77_cvector, 1) = (float)0;
	var_87_float = sqrt(var_77_cvector | var_77_cvector);
	var_77_cvector /= var_87_float;
	cvector var_78_cvector = -var_77_cvector;
	cvector var_89_cvector;
	func_2267(var_89_cvector, (var_78_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_79_cvector = ((var_77_cvector * var_64_float) + (var_89_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_81_bool;
	@IsOverrideActive(var_81_bool);
	if(var_81_bool != 0)
		var_62_bool = false;
	@StopWorld();
	@CameraTransit((var_76_cvector + var_79_cvector), var_78_cvector, true);
	var_103_float = GetByIndex(var_79_cvector, 0);
	var_104_float = GetByIndex(var_79_cvector, 2);
	@Rotate(var_103_float, var_104_float);
	bool var_105_bool;
	func_2395(var_105_bool);
	if(var_105_bool != 0) {
	} else {
		@HasAnimationTrack(var_82_bool, "head");
		if(var_82_bool == 0) goto Label_2046;
		@LookAsyncCamera("head");
	}
Label_2046:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_62_bool = true;
	
}


void func_2756(object var_44_object)
{
	int var_47_int; int var_48_int;
	@GetVariable("mt_maria", var_47_int);
	if(!var_47_int) { //@nz
		int var_51_int; object var_52_object;
		var_44_object = var_52_object;
		TaskCall(0);
		func_0(var_53_object, var_51_int, var_52_object);
		TaskReturn();
		@SetVariable("mt_maria", 1);
	}
	bool var_278_bool;
	func_2357(var_278_bool, 6);
	if(var_278_bool != 0) {
		int var_281_int; object var_282_object;
		var_44_object = var_282_object;
		TaskCall(2);
		func_226(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 4;
	}
	bool var_380_bool;
	func_2357(var_380_bool, 12);
	if(var_380_bool != 0) {
		int var_382_int;
		func_2750(var_382_int);
		if(var_382_int != 0) {
			int var_388_int; object var_389_object;
			var_44_object = var_389_object;
			TaskCall(4);
			func_804(var_390_object, var_388_int, var_389_object);
			TaskReturn();
		} else {
			@GetVariable("d12_maria", var_48_int);
			var_476_bool = !var_48_int; //@nz
			if(var_476_bool == 0) goto Label_2817;
			int var_477_int; object var_478_object;
			var_44_object = var_478_object;
			TaskCall(6);
			func_1226(var_479_object, var_477_int, var_478_object);
			TaskReturn();
			@SetVariable("d12_maria", 1);
	}
		int var_538_int; object var_539_object;
		var_44_object = var_539_object;
		TaskCall(8);
		func_1485(var_540_object, var_538_int, var_539_object);
		TaskReturn();
		return 4;
	}
Label_2817:
	
}


// @pe
void func_2502(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_1226(object var_0_object, int var_477_int, object var_478_object)
{
	var_0_object = var_478_object;
	bool var_488_bool; object var_489_object;
	var_478_object = var_489_object;
	func_1983(var_488_bool, var_489_object, 70.0);
	if(!var_488_bool) { //@nz
		var_477_int = -2;
		return 8;
	}
	object var_484_object;
	@CreateDialog(var_484_object);
	int var_492_int;
	func_2389(var_492_int);
	var_484_object->SetNPCName(var_492_int);
	int var_493_int;
	func_2387(var_493_int);
	var_484_object->SetNPCDescription(var_493_int);
	string var_494_string;
	func_2391(var_494_string);
	var_484_object->SetPhoto(var_494_string);
	string var_495_string;
	func_2393(var_495_string);
	var_484_object->SetPhoto2(var_495_string);
	int var_496_int;
	func_2733(var_496_int);
	var_484_object->SetPlayerName(var_496_int);
	bool var_485_bool;
	@IsOverrideActive(var_485_bool);
	if(var_485_bool != 0) {
		var_477_int = -2;
		return 8;
	}
	@DoDialog(var_484_object);
	bool var_498_bool; object var_499_object;
	object var_500_object;
	func_2261(var_500_object);
	var_500_object = var_499_object;
	func_2070(var_498_bool, var_499_object);
	object var_501_object; object var_502_object;
	var_478_object = var_501_object;
	var_484_object = var_502_object;
	TaskCall(7);
	func_1307(var_503_object, var_504_object, var_505_string, var_506_bool, var_501_object, var_502_object);
	TaskReturn();
	bool var_487_bool;
	var_484_object->IsDialogEnd(var_487_bool);
	
	for(;;) {
		var_534_bool = !var_487_bool; //@nz
		if(var_534_bool == 0) goto Label_1296;
		@sync();
		var_484_object->IsDialogEnd(var_487_bool);
	}
	
Label_1296:
	object var_535_object;
	var_478_object = var_535_object;
	func_2052();
	@StopDialog(var_484_object);
	var_484_object->GetReturnValue(-1);
	int var_486_int = var_477_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2508(bool var_366_bool)
{
	int var_368_int;
	func_2277(var_368_int, "oob6Maria1");
	if(var_368_int == 0) {
		var_366_bool = true;
		return 0;
	}
	var_366_bool = false;
}


void func_1485(object var_0_object, int var_538_int, object var_539_object)
{
	var_0_object = var_539_object;
	bool var_549_bool; object var_550_object;
	var_539_object = var_550_object;
	func_1983(var_549_bool, var_550_object, 70.0);
	if(!var_549_bool) { //@nz
		var_538_int = -2;
		return 8;
	}
	object var_545_object;
	@CreateDialog(var_545_object);
	int var_553_int;
	func_2389(var_553_int);
	var_545_object->SetNPCName(var_553_int);
	int var_554_int;
	func_2387(var_554_int);
	var_545_object->SetNPCDescription(var_554_int);
	string var_555_string;
	func_2391(var_555_string);
	var_545_object->SetPhoto(var_555_string);
	string var_556_string;
	func_2393(var_556_string);
	var_545_object->SetPhoto2(var_556_string);
	int var_557_int;
	func_2733(var_557_int);
	var_545_object->SetPlayerName(var_557_int);
	bool var_546_bool;
	@IsOverrideActive(var_546_bool);
	if(var_546_bool != 0) {
		var_538_int = -2;
		return 8;
	}
	@DoDialog(var_545_object);
	bool var_559_bool; object var_560_object;
	object var_561_object;
	func_2261(var_561_object);
	var_561_object = var_560_object;
	func_2070(var_559_bool, var_560_object);
	object var_562_object; object var_563_object;
	var_539_object = var_562_object;
	var_545_object = var_563_object;
	TaskCall(9);
	func_1566(var_564_object, var_565_object, var_566_string, var_567_bool, var_562_object, var_563_object);
	TaskReturn();
	bool var_548_bool;
	var_545_object->IsDialogEnd(var_548_bool);
	
	for(;;) {
		var_592_bool = !var_548_bool; //@nz
		if(var_592_bool == 0) goto Label_1555;
		@sync();
		var_545_object->IsDialogEnd(var_548_bool);
	}
	
Label_1555:
	object var_593_object;
	var_539_object = var_593_object;
	func_2052();
	@StopDialog(var_545_object);
	var_545_object->GetReturnValue(-1);
	int var_547_int = var_538_int;
}
EMIT "Stack[-4] = 0";


void func_2254(void)
{
	bool var_29_bool;
	func_2395(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_978(object var_2_object, string var_419_string)
{
	bool var_420_bool;
	func_2395(var_420_bool);
	if(!var_420_bool) //@nz
		return 0;
	if(var_419_string == var_2_object)
		return 0;
	string var_423_string; bool var_424_bool;
	var_419_string = var_423_string;
	if(var_419_string == "")
		var_424_bool = false;
	else
		var_424_bool = true;
	func_2224(var_423_string, var_424_bool);
	var_2_object = var_419_string;
	
}


void func_1748(void)
{
	float var_597_float;
	@rand(var_597_float, 8, 16);
	@SetTimer(10, var_597_float);
}


void func_2261(object var_125_object)
{
	object var_127_object;
	@self(var_127_object);
	var_127_object = var_125_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2520(bool var_347_bool)
{
	int var_349_int;
	func_2277(var_349_int, "b6q03");
	if(var_349_int == 0) {
		var_347_bool = true;
		return 0;
	}
	var_347_bool = false;
}


void func_2267(cvector var_89_cvector, cvector var_90_cvector)
{
	float var_93_float = sqrt(var_90_cvector | var_90_cvector);
	if(var_93_float < 0.000001)
		var_89_cvector = [0.0, 0.0, 0.0];
	var_89_cvector = var_90_cvector / var_93_float;
}


void func_1757(void)
{
	@KillTimer(10);
}


void func_226(object var_0_object, int var_281_int, object var_282_object)
{
	var_0_object = var_282_object;
	bool var_292_bool; object var_293_object;
	var_282_object = var_293_object;
	func_1983(var_292_bool, var_293_object, 70.0);
	if(!var_292_bool) { //@nz
		var_281_int = -2;
		return 8;
	}
	object var_288_object;
	@CreateDialog(var_288_object);
	int var_296_int;
	func_2389(var_296_int);
	var_288_object->SetNPCName(var_296_int);
	int var_297_int;
	func_2387(var_297_int);
	var_288_object->SetNPCDescription(var_297_int);
	string var_298_string;
	func_2391(var_298_string);
	var_288_object->SetPhoto(var_298_string);
	string var_299_string;
	func_2393(var_299_string);
	var_288_object->SetPhoto2(var_299_string);
	int var_300_int;
	func_2733(var_300_int);
	var_288_object->SetPlayerName(var_300_int);
	bool var_289_bool;
	@IsOverrideActive(var_289_bool);
	if(var_289_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	@DoDialog(var_288_object);
	bool var_302_bool; object var_303_object;
	object var_304_object;
	func_2261(var_304_object);
	var_304_object = var_303_object;
	func_2070(var_302_bool, var_303_object);
	object var_305_object; object var_306_object;
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(3);
	func_307(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	bool var_291_bool;
	var_288_object->IsDialogEnd(var_291_bool);
	
	for(;;) {
		var_378_bool = !var_291_bool; //@nz
		if(var_378_bool == 0) goto Label_296;
		@sync();
		var_288_object->IsDialogEnd(var_291_bool);
	}
	
Label_296:
	object var_379_object;
	var_282_object = var_379_object;
	func_2052();
	@StopDialog(var_288_object);
	var_288_object->GetReturnValue(-1);
	int var_290_int = var_281_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2532(bool var_312_bool)
{
	int var_314_int;
	func_2277(var_314_int, "b6q03NinaTalk");
	if(var_314_int != 0) {
		var_312_bool = true;
		return 0;
	}
	var_312_bool = false;
}


void func_2277(int var_314_int, string var_315_string)
{
	int var_317_int;
	@GetVariable(var_315_string, var_317_int);
	var_317_int = var_314_int;
}


void func_2282(object var_83_object, string var_84_string)
{
	object var_87_object;
	@GetMainOutdoorScene(var_87_object);
	object var_88_object;
	@AddBlankActorFromXml(var_88_object, var_87_object, var_84_string, (var_84_string + ".xml"));
	var_88_object = var_83_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2544(bool var_357_bool, object var_358_object)
{
	object var_360_object;
	var_358_object = var_360_object;
	bool var_359_bool;
	func_2324(var_359_bool, var_360_object, "b6q03_diary");
	if(var_359_bool != 0) {
		var_357_bool = true;
		return 0;
	}
	var_357_bool = false;
}


void func_2293(int var_170_int, int var_171_int)
{
	object var_173_object;
	@CreateIntVector(var_173_object);
	var_173_object->add(var_170_int);
	var_173_object->add(var_171_int);
	@SendWorldWndMessage(3, var_173_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2555(bool var_439_bool)
{
	int var_441_int;
	func_2277(var_441_int, "game_final");
	if(var_441_int == 2)
		var_439_bool = true;
	var_439_bool = false;
}


