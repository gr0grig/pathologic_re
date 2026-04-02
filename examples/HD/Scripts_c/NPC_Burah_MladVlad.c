// @GLOBALS: 0:string:,1:object:,2:bool:,3:bool:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		var_0_bool = true;
		func_145();
		func_5201();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, float var_47_float, float var_48_float, int var_49_int)
	{
		bool var_51_bool;
		@IsOverrideActive(var_51_bool);
		if(!var_51_bool) { //@nz
			func_145();
			disable OnUse;
			bool var_53_bool; object var_54_object;
			var_49_int = var_54_object;
			func_4657(var_53_bool, var_54_object);
			enable OnUse;
			object var_67_object;
			var_49_int = var_67_object;
			func_5904(var_67_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, float var_47_float, float var_48_float, int var_49_int, object var_50_object, object var_51_object, object var_71_object)
		{
		bool var_73_bool;
		@IsPlayerActor(var_71_object, var_73_bool);
		if(var_73_bool != 0) {
			func_145();
			object var_75_object;
			var_71_object = var_75_object;
			TaskCall(2);
			func_148(var_75_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, float var_47_float, float var_48_float, int var_49_int)
	{
		object var_51_object;
		if(var_49_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_49_int == 21)) goto Label_144;
			if(true == 0) goto Label_144;
			@FindActor(var_51_object, "player");
			bool var_59_bool = false;
			if(var_51_object != 0) {
				float var_61_float; object var_62_object;
				var_51_object = var_62_object;
				func_4625(var_61_float, var_62_object);
				if(var_61_float <= 62500.0)
					var_59_bool = true;
			}
			if(var_59_bool != 0) {
				object var_71_object;
				var_51_object = var_71_object;
				func_89();
			}
			var_51_object = null;
		}
	Label_144:
	
	}

}


task task_2
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		func_193();
		func_5201();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, float var_47_float, float var_48_float, int var_49_int)
	{
		bool var_51_bool;
		@IsOverrideActive(var_51_bool);
		if(!var_51_bool) { //@nz
			func_193();
			disable OnUse;
			bool var_53_bool; object var_54_object;
			var_49_int = var_54_object;
			func_4657(var_53_bool, var_54_object);
			enable OnUse;
			object var_67_object;
			var_49_int = var_67_object;
			func_5904(var_67_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		func_5201();
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_50_int == 21076) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5250();
			}
			if(var_50_int == 21082) {
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_bool;
				func_5234();
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_5532();
			}
			if(var_50_int == 21085) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_bool;
				func_5234();
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_bool;
				func_5532();
			}
			if(var_49_float == 21224) {
				bool var_91_bool;
				func_5609(var_1_object);
				if(var_91_bool != 0) {
					func_481(var_50_int, "Untrust");
					var_0_bool->SetMessage(520042); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(520043, 21227, 21225); //@t
					var_0_bool->AddReply(520044, -1, 21226); //@t
					return 0;
				}
				bool var_123_bool;
				func_5621(var_1_object);
				if(var_123_bool != 0) {
					object var_129_object; object var_130_object;
					var_129_object = var_1_object;
					var_130_object = var_0_bool;
					func_5228();
					func_481(var_50_int, "Neutral");
					var_0_bool->SetMessage(519876); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(519877, 21042, 21041); //@t
					var_0_bool->AddReply(519905, 21042, 21073); //@t
					return 0;
				}
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519906); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_143_bool;
				func_5633(var_1_object);
				if(var_143_bool != 0)
					var_0_bool->AddReply(519907, 21077, 21076); //@t
				var_0_bool->AddReply(519917, -1, 21086); //@t
				return 0;
			}
			if(var_49_float == 21077) {
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519908); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_159_bool;
				func_5597(var_1_object);
				if(!var_159_bool) //@nz
					var_0_bool->AddReply(519909, 21079, 21078); //@t
				bool var_169_bool;
				func_5597(var_1_object);
				if(var_169_bool != 0)
					var_0_bool->AddReply(519914, 21084, 21083); //@t
				return 0;
			}
			if(var_49_float == 21084) {
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519915); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519916, -1, 21085); //@t
				return 0;
			}
			if(var_49_float == 21079) {
				func_481(var_50_int, "Untrust");
				var_0_bool->SetMessage(519910); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519911, 21081, 21080); //@t
				return 0;
			}
			if(var_49_float == 21081) {
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519912); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519913, -1, 21082); //@t
				return 0;
			}
			if(var_49_float == 21042) {
				func_481(var_50_int, "Untrust");
				var_0_bool->SetMessage(519878); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519879, 21044, 21043); //@t
				var_0_bool->AddReply(519902, 21070, 21069); //@t
				return 0;
			}
			if(var_49_float == 21070) {
				func_481(var_50_int, "Untrust");
				var_0_bool->SetMessage(519903); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519904, 21044, 21071); //@t
				return 0;
			}
			if(var_49_float == 21044) {
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519880); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519881, 21046, 21045); //@t
				var_0_bool->AddReply(519897, 21064, 21063); //@t
				return 0;
			}
			if(var_49_float == 21064) {
				func_481(var_50_int, "Sly");
				var_0_bool->SetMessage(519898); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519899, 21066, 21065); //@t
				return 0;
			}
			if(var_49_float == 21066) {
				func_481(var_50_int, "Sly");
				var_0_bool->SetMessage(519900); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519901, 21046, 21067); //@t
				return 0;
			}
			if(var_49_float == 21046) {
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519882); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519883, 21048, 21047); //@t
				var_0_bool->AddReply(519896, 21048, 21061); //@t
				return 0;
			}
			if(var_49_float == 21048) {
				func_481(var_50_int, "Untrust");
				var_0_bool->SetMessage(519884); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519885, 21050, 21049); //@t
				var_0_bool->AddReply(519893, 21058, 21057); //@t
				return 0;
			}
			if(var_49_float == 21058) {
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519894); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519895, 21052, 21059); //@t
				return 0;
			}
			if(var_49_float == 21050) {
				func_481(var_50_int, "Sly");
				var_0_bool->SetMessage(519886); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519887, 21052, 21051); //@t
				return 0;
			}
			if(var_49_float == 21052) {
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519888); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519889, 21054, 21053); //@t
				return 0;
			}
			if(var_49_float == 21054) {
				func_481(var_50_int, "Neutral");
				var_0_bool->SetMessage(519890); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519891, -1, 21055); //@t
				var_0_bool->AddReply(519892, -1, 21056); //@t
				return 0;
			}
			if(var_49_float == 21227) {
				func_481(var_50_int, "Untrust");
				var_0_bool->SetMessage(520045); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520046, -1, 21228); //@t
				return 0;
			}
			var_3_object = true;
			bool var_294_bool;
			func_5210(var_294_bool);
			if(var_294_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1f8";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_50_int == 21192) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5256();
				object var_75_object = var_1_object;
				func_5212(var_0_bool);
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_bool;
				func_5276();
			}
			if(var_50_int == 21193) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_bool;
				func_5256();
				object var_117_object = var_1_object;
				func_5212(var_0_bool);
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_bool;
				func_5276();
			}
			if(var_50_int == 21194) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_bool;
				func_5256();
				object var_125_object = var_1_object;
				func_5212(var_0_bool);
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_bool;
				func_5276();
			}
			if(var_50_int == 21204) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_bool;
				func_5283();
			}
			if(var_50_int == 21212) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_bool;
				func_5289();
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_bool;
				func_5532();
			}
			if(var_50_int == 21213) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_bool;
				func_5289();
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_bool;
				func_5532();
			}
			if(var_49_float == 21181) {
				bool var_177_bool;
				func_5645(var_1_object);
				if(!var_177_bool) { //@nz
					object var_184_object; object var_185_object;
					var_184_object = var_1_object;
					var_185_object = var_0_bool;
					func_5459();
					func_1152(var_50_int, "Neutral");
					var_0_bool->SetMessage(520000); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(520001, 21183, 21182); //@t
					var_0_bool->AddReply(520017, 21183, 21199); //@t
					return 0;
				}
				func_1152(var_50_int, "Neutral");
				var_0_bool->SetMessage(520019); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_218_bool = false;
				bool var_219_bool;
				func_5657(var_1_object);
				if(var_219_bool != 0) {
					bool var_225_bool;
					func_5645(var_1_object);
					if(var_225_bool != 0)
						var_218_bool = true;
				}
				if(var_218_bool != 0)
					var_0_bool->AddReply(520020, 21205, 21204); //@t
				var_0_bool->AddReply(520030, -1, 21214); //@t
				return 0;
			}
			if(var_49_float == 21205) {
				func_1152(var_50_int, "Neutral");
				var_0_bool->SetMessage(520021); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520022, 21207, 21206); //@t
				var_0_bool->AddReply(527733, 29085, 29084); //@t
				return 0;
			}
			if(var_49_float == 29085) {
				func_1152(var_50_int, "Neutral");
				var_0_bool->SetMessage(527734); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520029, -1, 21213); //@t
				return 0;
			}
			if(var_49_float == 21207) {
				func_1152(var_50_int, "Untrust");
				var_0_bool->SetMessage(520023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520024, 21209, 21208); //@t
				return 0;
			}
			if(var_49_float == 21209) {
				func_1152(var_50_int, "Neutral");
				var_0_bool->SetMessage(520025); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520026, 21211, 21210); //@t
				var_0_bool->AddReply(527735, 29087, 29086); //@t
				return 0;
			}
			if(var_49_float == 29087) {
				func_1152(var_50_int, "Untrust");
				var_0_bool->SetMessage(527736); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527737, 21211, 29088); //@t
				return 0;
			}
			if(var_49_float == 21211) {
				func_1152(var_50_int, "Neutral");
				var_0_bool->SetMessage(520027); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520028, -1, 21212); //@t
				return 0;
			}
			if(var_49_float == 21183) {
				func_1152(var_50_int, "Untrust");
				var_0_bool->SetMessage(520002); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520003, 21185, 21184); //@t
				var_0_bool->AddReply(527725, 29074, 29073); //@t
				return 0;
			}
			if(var_49_float == 29074) {
				func_1152(var_50_int, "Rage");
				var_0_bool->SetMessage(527726); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527727, 21185, 29075); //@t
				return 0;
			}
			if(var_49_float == 21185) {
				func_1152(var_50_int, "Sly");
				var_0_bool->SetMessage(520004); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520005, 21187, 21186); //@t
				var_0_bool->AddReply(520015, 21187, 21196); //@t
				return 0;
			}
			if(var_49_float == 21187) {
				func_1152(var_50_int, "Untrust");
				var_0_bool->SetMessage(520006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520007, 21189, 21188); //@t
				var_0_bool->AddReply(527728, 29079, 29078); //@t
				return 0;
			}
			if(var_49_float == 29079) {
				func_1152(var_50_int, "Neutral");
				var_0_bool->SetMessage(527729); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527730, 29081, 29080); //@t
				return 0;
			}
			if(var_49_float == 29081) {
				func_1152(var_50_int, "Neutral");
				var_0_bool->SetMessage(527731); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527732, 21189, 29082); //@t
				return 0;
			}
			if(var_49_float == 21189) {
				func_1152(var_50_int, "Neutral");
				var_0_bool->SetMessage(520008); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520009, 21191, 21190); //@t
				var_0_bool->AddReply(520013, -1, 21194); //@t
				return 0;
			}
			if(var_49_float == 21191) {
				func_1152(var_50_int, "Sly");
				var_0_bool->SetMessage(520010); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520011, -1, 21192); //@t
				var_0_bool->AddReply(520012, -1, 21193); //@t
				return 0;
			}
			var_3_object = true;
			bool var_352_bool;
			func_5210(var_352_bool);
			if(var_352_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x497";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_50_int == 21333) {
				object var_55_object = var_1_object;
				func_5386(var_0_bool);
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_5482();
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_bool;
				func_5340();
			}
			if(var_50_int == 21335) {
				object var_137_object = var_1_object;
				func_5386(var_0_bool);
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_bool;
				func_5482();
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_bool;
				func_5340();
			}
			if(var_50_int == 21349) {
				object var_145_object = var_1_object;
				func_5376(var_0_bool);
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_bool;
				func_5476();
				object var_167_object = var_1_object;
				func_5386(var_0_bool);
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_bool;
				func_5340();
				object var_171_object = var_1_object;
				func_5466(var_0_bool);
			}
			if(var_50_int == 21350) {
				object var_178_object = var_1_object;
				func_5386(var_0_bool);
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_bool;
				func_5482();
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_bool;
				func_5340();
			}
			if(var_50_int == 21361) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_bool;
				func_5366();
				object var_199_object = var_1_object;
				func_5494(var_0_bool);
				object var_204_object = var_1_object;
				func_5504(var_0_bool);
				object var_210_object = var_1_object;
				func_5515(var_0_bool);
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_bool;
				func_5482();
			}
			if(var_49_float == 21322) {
				bool var_220_bool;
				func_5669(var_1_object);
				if(var_220_bool != 0) {
					object var_228_object; object var_229_object;
					var_228_object = var_1_object;
					var_229_object = var_0_bool;
					func_5334();
					object var_232_object; object var_233_object;
					var_232_object = var_1_object;
					var_233_object = var_0_bool;
					func_5488();
					func_1820(var_50_int, "Rage");
					var_0_bool->SetMessage(520138); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(520139, 21324, 21323); //@t
					return 0;
				}
				func_1820(var_50_int, "Rage");
				var_0_bool->SetMessage(520157); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_259_bool;
				func_5681(var_1_object);
				if(var_259_bool != 0)
					var_0_bool->AddReply(520158, 21346, 21345); //@t
				bool var_268_bool;
				func_5693(var_1_object);
				if(var_268_bool != 0)
					var_0_bool->AddReply(520164, 21352, 21351); //@t
				var_0_bool->AddReply(520180, -1, 21370); //@t
				return 0;
			}
			if(var_49_float == 21352) {
				func_1820(var_50_int, "Neutral");
				var_0_bool->SetMessage(520165); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520166, 21354, 21353); //@t
				var_0_bool->AddReply(520179, 21354, 21368); //@t
				return 0;
			}
			if(var_49_float == 21354) {
				func_1820(var_50_int, "Neutral");
				var_0_bool->SetMessage(520167); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520168, 21356, 21355); //@t
				var_0_bool->AddReply(520178, 21360, 21366); //@t
				return 0;
			}
			if(var_49_float == 21356) {
				func_1820(var_50_int, "Fear");
				var_0_bool->SetMessage(520169); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520170, 21358, 21357); //@t
				return 0;
			}
			if(var_49_float == 21358) {
				func_1820(var_50_int, "Fear");
				var_0_bool->SetMessage(520171); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520172, 21360, 21359); //@t
				var_0_bool->AddReply(520175, 21363, 21362); //@t
				return 0;
			}
			if(var_49_float == 21363) {
				func_1820(var_50_int, "Sly");
				var_0_bool->SetMessage(520176); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520177, 21360, 21364); //@t
				return 0;
			}
			if(var_49_float == 21360) {
				func_1820(var_50_int, "Neutral");
				var_0_bool->SetMessage(520173); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520174, -1, 21361); //@t
				return 0;
			}
			if(var_49_float == 21346) {
				func_1820(var_50_int, "Sly");
				var_0_bool->SetMessage(520159); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520160, 21348, 21347); //@t
				var_0_bool->AddReply(520163, -1, 21350); //@t
				return 0;
			}
			if(var_49_float == 21348) {
				func_1820(var_50_int, "Neutral");
				var_0_bool->SetMessage(520161); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520162, -1, 21349); //@t
				return 0;
			}
			if(var_49_float == 21324) {
				func_1820(var_50_int, "Rage");
				var_0_bool->SetMessage(520140); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520141, 21326, 21325); //@t
				var_0_bool->AddReply(520154, 21341, 21340); //@t
				return 0;
			}
			if(var_49_float == 21341) {
				func_1820(var_50_int, "Sly");
				var_0_bool->SetMessage(520155); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520156, 21326, 21342); //@t
				return 0;
			}
			if(var_49_float == 21326) {
				func_1820(var_50_int, "Rage");
				var_0_bool->SetMessage(520142); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520143, 21328, 21327); //@t
				var_0_bool->AddReply(520153, 21330, 21338); //@t
				return 0;
			}
			if(var_49_float == 21328) {
				func_1820(var_50_int, "Sly");
				var_0_bool->SetMessage(520144); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520145, 21330, 21329); //@t
				var_0_bool->AddReply(520152, 21330, 21336); //@t
				return 0;
			}
			if(var_49_float == 21330) {
				func_1820(var_50_int, "Sly");
				var_0_bool->SetMessage(520146); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520147, 21332, 21331); //@t
				var_0_bool->AddReply(520151, -1, 21335); //@t
				return 0;
			}
			if(var_49_float == 21332) {
				func_1820(var_50_int, "Neutral");
				var_0_bool->SetMessage(520148); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520149, -1, 21333); //@t
				var_0_bool->AddReply(520150, -1, 21334); //@t
				return 0;
			}
			var_3_object = true;
			bool var_405_bool;
			func_5210(var_405_bool);
			if(var_405_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x733";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_49_float == 21982) {
				func_2475(var_50_int, "Neutral");
				var_0_bool->SetMessage(520768); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520769, 21984, 21983); //@t
				var_0_bool->AddReply(520772, 21987, 21986); //@t
				return 0;
			}
			if(var_49_float == 21987) {
				func_2475(var_50_int, "Neutral");
				var_0_bool->SetMessage(520773); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520774, -1, 21988); //@t
				return 0;
			}
			if(var_49_float == 21984) {
				func_2475(var_50_int, "Neutral");
				var_0_bool->SetMessage(520770); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520771, -1, 21985); //@t
				return 0;
			}
			var_3_object = true;
			bool var_93_bool;
			func_5210(var_93_bool);
			if(var_93_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9c2";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_50_int == 22403) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5397();
			}
			if(var_49_float == 22399) {
				func_2714(var_50_int, "Untrust");
				var_0_bool->SetMessage(521202); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521203, 22402, 22400); //@t
				var_0_bool->AddReply(521204, -1, 22401); //@t
				return 0;
			}
			if(var_49_float == 22402) {
				func_2714(var_50_int, "Untrust");
				var_0_bool->SetMessage(521205); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528423, 29808, 29806); //@t
				var_0_bool->AddReply(528424, 29808, 29807); //@t
				return 0;
			}
			if(var_49_float == 29808) {
				func_2714(var_50_int, "Sly");
				var_0_bool->SetMessage(528425); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521206, -1, 22403); //@t
				return 0;
			}
			var_3_object = true;
			bool var_124_bool;
			func_5210(var_124_bool);
			if(var_124_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xab1";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_50_int == 22637) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5408();
			}
			if(var_50_int == 22643) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_bool;
				func_5408();
			}
			if(var_50_int == 22646) {
				object var_104_object = var_1_object;
				func_5424(var_0_bool);
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_bool;
				func_5526();
				object var_128_object = var_1_object;
				func_5376(var_0_bool);
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_bool;
				func_5476();
			}
			if(var_50_int == 25069) {
				object var_155_object = var_1_object;
				func_5424(var_0_bool);
			}
			if(var_49_float == 22634) {
				bool var_159_bool;
				func_5538(var_1_object);
				if(var_159_bool != 0) {
					object var_167_object; object var_168_object;
					var_167_object = var_1_object;
					var_168_object = var_0_bool;
					func_5438();
					func_3026(var_50_int, "Rage");
					var_0_bool->SetMessage(521469); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(523789, 25055, 25054); //@t
					var_0_bool->AddReply(523804, 25055, 25070); //@t
					return 0;
				}
				func_3026(var_50_int, "Rage");
				var_0_bool->SetMessage(521474); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_197_bool;
				func_5550(var_1_object);
				if(var_197_bool != 0)
					var_0_bool->AddReply(521475, 22642, 22640); //@t
				bool var_206_bool = false;
				bool var_207_bool;
				func_5550(var_1_object);
				if(!var_207_bool) { //@nz
					bool var_210_bool;
					func_5562(var_210_bool, var_1_object);
					if(var_210_bool != 0)
						var_206_bool = true;
				}
				if(var_206_bool != 0)
					var_0_bool->AddReply(521479, 22645, 22644); //@t
				var_0_bool->AddReply(523837, 25111, 25110); //@t
				var_0_bool->AddReply(521476, -1, 22641); //@t
				return 0;
			}
			if(var_49_float == 25111) {
				func_3026(var_50_int, "Untrust");
				var_0_bool->SetMessage(523838); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523839, 25113, 25112); //@t
				return 0;
			}
			if(var_49_float == 25113) {
				func_3026(var_50_int, "Fear");
				var_0_bool->SetMessage(523840); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523841, 25115, 25114); //@t
				return 0;
			}
			if(var_49_float == 25115) {
				func_3026(var_50_int, "Untrust");
				var_0_bool->SetMessage(523842); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523843, 25117, 25116); //@t
				return 0;
			}
			if(var_49_float == 25117) {
				func_3026(var_50_int, "Untrust");
				var_0_bool->SetMessage(523844); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523845, -1, 25118); //@t
				return 0;
			}
			if(var_49_float == 22645) {
				func_3026(var_50_int, "Sly");
				var_0_bool->SetMessage(521480); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523798, 25065, 25063); //@t
				var_0_bool->AddReply(523799, 25066, 25064); //@t
				return 0;
			}
			if(var_49_float == 25066) {
				func_3026(var_50_int, "Neutral");
				var_0_bool->SetMessage(523801); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523802, 25065, 25067); //@t
				return 0;
			}
			if(var_49_float == 25065) {
				func_3026(var_50_int, "Neutral");
				var_0_bool->SetMessage(523800); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521481, -1, 22646); //@t
				var_0_bool->AddReply(523803, -1, 25069); //@t
				return 0;
			}
			if(var_49_float == 22642) {
				func_3026(var_50_int, "Neutral");
				var_0_bool->SetMessage(521477); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521478, -1, 22643); //@t
				return 0;
			}
			if(var_49_float == 25055) {
				func_3026(var_50_int, "Rage");
				var_0_bool->SetMessage(523790); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523791, 25057, 25056); //@t
				var_0_bool->AddReply(523805, 25057, 25072); //@t
				return 0;
			}
			if(var_49_float == 25057) {
				func_3026(var_50_int, "Rage");
				var_0_bool->SetMessage(523792); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523793, 25059, 25058); //@t
				var_0_bool->AddReply(523797, 25059, 25062); //@t
				return 0;
			}
			if(var_49_float == 25059) {
				func_3026(var_50_int, "Rage");
				var_0_bool->SetMessage(523794); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523795, 25075, 25060); //@t
				var_0_bool->AddReply(523810, 25080, 25079); //@t
				return 0;
			}
			if(var_49_float == 25080) {
				func_3026(var_50_int, "Rage");
				var_0_bool->SetMessage(523811); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523812, 25075, 25081); //@t
				return 0;
			}
			if(var_49_float == 25075) {
				func_3026(var_50_int, "Rage");
				var_0_bool->SetMessage(523806); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523807, 25077, 25076); //@t
				return 0;
			}
			if(var_49_float == 25077) {
				func_3026(var_50_int, "Sly");
				var_0_bool->SetMessage(523808); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523809, 22636, 25078); //@t
				return 0;
			}
			if(var_49_float == 22636) {
				func_3026(var_50_int, "Rage");
				var_0_bool->SetMessage(521471); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523813, 25084, 25083); //@t
				var_0_bool->AddReply(523815, 25084, 25085); //@t
				return 0;
			}
			if(var_49_float == 25084) {
				func_3026(var_50_int, "Fear");
				var_0_bool->SetMessage(523814); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521472, -1, 22637); //@t
				var_0_bool->AddReply(521473, -1, 22638); //@t
				return 0;
			}
			var_3_object = true;
			bool var_361_bool;
			func_5210(var_361_bool);
			if(var_361_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbe9";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_50_int == 24800) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5453();
			}
			if(var_50_int == 23247) {
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_bool;
				func_5444();
			}
			if(var_49_float == 23248) {
				func_3669(var_50_int, "Fear");
				var_0_bool->SetMessage(522079); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_108_bool;
				func_5585(var_1_object);
				if(var_108_bool != 0)
					var_0_bool->AddReply(523566, 24801, 24800); //@t
				var_0_bool->AddReply(523569, 24804, 24803); //@t
				var_0_bool->AddReply(522080, -1, 23249); //@t
				return 0;
			}
			if(var_49_float == 24804) {
				func_3669(var_50_int, "Sly");
				var_0_bool->SetMessage(523570); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523571, 24807, 24805); //@t
				var_0_bool->AddReply(523572, -1, 24806); //@t
				return 0;
			}
			if(var_49_float == 24807) {
				func_3669(var_50_int, "Fear");
				var_0_bool->SetMessage(523573); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523574, 24809, 24808); //@t
				var_0_bool->AddReply(523576, 24811, 24810); //@t
				return 0;
			}
			if(var_49_float == 24811) {
				func_3669(var_50_int, "Rage");
				var_0_bool->SetMessage(523577); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523578, 24809, 24812); //@t
				return 0;
			}
			if(var_49_float == 24809) {
				func_3669(var_50_int, "Sly");
				var_0_bool->SetMessage(523575); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_156_bool;
				func_5573(var_1_object);
				if(!var_156_bool) //@nz
					var_0_bool->AddReply(522078, -1, 23247); //@t
				bool var_166_bool;
				func_5573(var_1_object);
				if(var_166_bool != 0)
					var_0_bool->AddReply(522087, 24814, 23256); //@t
				return 0;
			}
			if(var_49_float == 24814) {
				func_3669(var_50_int, "Sly");
				var_0_bool->SetMessage(523580); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523582, 24819, 24817); //@t
				var_0_bool->AddReply(523583, -1, 24818); //@t
				return 0;
			}
			if(var_49_float == 24819) {
				func_3669(var_50_int, "Sly");
				var_0_bool->SetMessage(523584); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523585, -1, 24820); //@t
				var_0_bool->AddReply(523586, -1, 24821); //@t
				return 0;
			}
			if(var_49_float == 24801) {
				func_3669(var_50_int, "Sly");
				var_0_bool->SetMessage(523567); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523568, 24822, 24802); //@t
				return 0;
			}
			if(var_49_float == 24822) {
				func_3669(var_50_int, "Sly");
				var_0_bool->SetMessage(523587); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523588, 24824, 24823); //@t
				var_0_bool->AddReply(523595, -1, 24830); //@t
				return 0;
			}
			if(var_49_float == 24824) {
				func_3669(var_50_int, "Neutral");
				var_0_bool->SetMessage(523589); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523590, 24826, 24825); //@t
				return 0;
			}
			if(var_49_float == 24826) {
				func_3669(var_50_int, "Untrust");
				var_0_bool->SetMessage(523591); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523592, 24828, 24827); //@t
				var_0_bool->AddReply(523594, -1, 24829); //@t
				return 0;
			}
			if(var_49_float == 24828) {
				func_3669(var_50_int, "Sly");
				var_0_bool->SetMessage(523593); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523596, -1, 24831); //@t
				var_0_bool->AddReply(523597, -1, 24832); //@t
				return 0;
			}
			var_3_object = true;
			bool var_235_bool;
			func_5210(var_235_bool);
			if(var_235_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe6c";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_49_float == 36906) {
				func_4152(var_50_int, "Neutral");
				var_0_bool->SetMessage(535231); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535232, 36953, 36907); //@t
				var_0_bool->AddReply(535233, -1, 36908); //@t
				var_0_bool->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_49_float == 36953) {
				func_4152(var_50_int, "Neutral");
				var_0_bool->SetMessage(535277); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535278, 36957, 36954); //@t
				var_0_bool->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_49_float == 36957) {
				func_4152(var_50_int, "Neutral");
				var_0_bool->SetMessage(535281); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535282, -1, 36958); //@t
				var_0_bool->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_object = true;
			bool var_102_bool;
			func_5210(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x104f";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4953();
			if(var_49_float == 42563) {
				func_4406(var_50_int, "Neutral");
				var_0_bool->SetMessage(540554); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540555, -1, 42564); //@t
				var_0_bool->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_object = true;
			bool var_79_bool;
			func_5210(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x114d";
	
	}

}


maintask task_22
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		var_49_bool = GlobalVars[2];
		GlobalVars[2] = false;
		func_4477(var_46_float, var_47_float, var_48_int);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		func_5201();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int, object var_49_object)
	{
		bool var_51_bool;
		@IsOverrideActive(var_51_bool);
		if(!var_51_bool) { //@nz
			disable OnUse;
			bool var_53_bool; object var_54_object;
			var_49_object = var_54_object;
			func_4657(var_53_bool, var_54_object);
			enable OnUse;
			object var_67_object;
			var_49_object = var_67_object;
			func_5904(var_67_object);
		}
	}

}


void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
{
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_91_bool;
	func_4677(var_91_bool);
	if(!var_91_bool) goto Label_0; //@nz
}


// @pe
void func_5633(bool var_381_bool)
{
	int var_383_int;
	func_4994(var_383_int, "oob1MladVlad2");
	if(var_383_int == 0) {
		var_381_bool = true;
		return 0;
	}
	var_381_bool = false;
}


void func_5120(object var_57_object, string var_58_string, string var_59_string)
{
	if(!var_57_object) { //@nz
	}
	object var_68_object;
	@GetSceneByName(var_68_object, var_58_string);
	bool var_69_bool;
	cvector var_70_cvector;
	cvector var_71_cvector;
	var_68_object->GetLocator(var_59_string, var_69_bool, var_70_cvector, var_71_cvector);
	if(!var_69_bool) //@nz
		@Trace(((("Teleport location '" + var_59_string) + "' not found in scene '") + var_58_string) + "'");
	else
		@Teleport(var_57_object, var_68_object, var_70_cvector, var_71_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_4620(cvector var_113_cvector)
{
	cvector var_115_cvector;
	@GetPosition(var_115_cvector);
	var_115_cvector = var_113_cvector;
}


// @pe
void func_5645(bool var_428_bool)
{
	int var_430_int;
	func_4994(var_430_int, "b2MladVladBurahHomeTalk");
	if(var_430_int == 1)
		var_428_bool = true;
	var_428_bool = false;
}


void func_13(bool var_0_bool, bool var_132_bool, cvector var_133_cvector, cvector var_134_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_19:
	for(;;) {
		bool var_140_bool; cvector var_141_cvector;
		var_133_cvector = var_141_cvector;
		func_4647(var_140_bool, var_141_cvector);
		var_150_bool = !var_140_bool; //@nz
		if(var_150_bool == 0) goto Label_26;
	}
	
Label_26:
	bool var_137_bool;
	@MovePoint(var_133_cvector, false, var_137_bool);
	if(var_137_bool != 0) {
	} else {
		goto Label_19;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_137_bool);
	if(!var_137_bool) { //@nz
		var_132_bool = false;
		return 2;
	}
	var_156_float = GetByIndex(var_134_cvector, 0);
	var_157_float = GetByIndex(var_134_cvector, 2);
	@Rotate(var_156_float, var_157_float, var_137_bool);
	if(!var_137_bool) { //@nz
		var_132_bool = false;
		return 2;
	}
	var_132_bool = true;
	
}


void func_2575(bool var_0_bool, int var_579_int, object var_580_object)
{
	var_0_bool = var_580_object;
	bool var_590_bool; object var_591_object;
	var_580_object = var_591_object;
	func_4682(var_590_bool, var_591_object, 70.0);
	if(!var_590_bool) { //@nz
		var_579_int = -2;
		return 8;
	}
	object var_586_object;
	@CreateDialog(var_586_object);
	int var_594_int;
	func_5204(var_594_int);
	var_586_object->SetNPCName(var_594_int);
	int var_595_int;
	func_5202(var_595_int);
	var_586_object->SetNPCDescription(var_595_int);
	string var_596_string;
	func_5206(var_596_string);
	var_586_object->SetPhoto(var_596_string);
	string var_597_string;
	func_5208(var_597_string);
	var_586_object->SetPhoto2(var_597_string);
	int var_598_int;
	func_5887(var_598_int);
	var_586_object->SetPlayerName(var_598_int);
	bool var_587_bool;
	@IsOverrideActive(var_587_bool);
	if(var_587_bool != 0) {
		var_579_int = -2;
		return 8;
	}
	@DoDialog(var_586_object);
	bool var_600_bool; object var_601_object;
	object var_602_object;
	func_4960(var_602_object);
	var_602_object = var_601_object;
	func_4769(var_600_bool, var_601_object);
	object var_603_object; object var_604_object;
	var_580_object = var_603_object;
	var_586_object = var_604_object;
	TaskCall(13);
	func_2656(var_605_object, var_606_object, var_607_string, var_608_bool, var_603_object, var_604_object);
	TaskReturn();
	bool var_589_bool;
	var_586_object->IsDialogEnd(var_589_bool);
	
	for(;;) {
		var_633_bool = !var_589_bool; //@nz
		if(var_633_bool == 0) goto Label_2645;
		@sync();
		var_586_object->IsDialogEnd(var_589_bool);
	}
	
Label_2645:
	object var_634_object;
	var_580_object = var_634_object;
	func_4751();
	@StopDialog(var_586_object);
	var_586_object->GetReturnValue(-1);
	int var_588_int = var_579_int;
}
EMIT "Stack[-4] = 0";


void func_4625(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


// @pe
void func_3601(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_762_object, object var_763_object)
{
	var_0_bool = var_763_object;
	var_3_object = false;
	if(1 != 0) {
		func_3669(var_763_object, "Fear");
		var_0_bool->SetMessage(522079); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_778_bool;
		func_5585(var_762_object);
		if(var_778_bool != 0)
			var_0_bool->AddReply(523566, 24801, 24800); //@t
		var_0_bool->AddReply(523569, 24804, 24803); //@t
		var_0_bool->AddReply(522080, -1, 23249); //@t
		goto Label_3639;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe15";
	}
Label_3639:
	bool var_793_bool;
	func_5210(var_793_bool);
	if(var_793_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4907(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3668;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3668:
		return 0;

	}
	
}


void func_5144(float var_72_float)
{
	float var_74_float;
	@GetGameTime(var_74_float);
	var_74_float = var_72_float;
}


// @pe
void func_5657(bool var_469_bool)
{
	int var_471_int;
	func_4994(var_471_int, "oob2MladVlad1");
	if(var_471_int == 0) {
		var_469_bool = true;
		return 0;
	}
	var_469_bool = false;
}


void func_4633(object var_60_object)
{
	object var_62_object;
	@FindActor(var_62_object, "player");
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1049(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_421_object, object var_422_object)
{
	var_0_bool = var_422_object;
	var_1_object = var_421_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_428_bool;
		func_5645(var_1_object);
		if(!var_428_bool) { //@nz
			object var_435_object; object var_436_object;
			var_435_object = var_1_object;
			var_436_object = var_0_bool;
			func_5459();
			func_1152(var_422_object, "Neutral");
			var_0_bool->SetMessage(520000); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(520001, 21183, 21182); //@t
			var_0_bool->AddReply(520017, 21183, 21199); //@t
		} else {
					func_1152(var_422_object, "Neutral");
					var_0_bool->SetMessage(520019); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_468_bool = false;
					bool var_469_bool;
					func_5657(var_1_object);
					if(var_469_bool != 0) {
						bool var_475_bool;
						func_5645(var_1_object);
						if(var_475_bool != 0)
							var_468_bool = true;
					}
					if(var_468_bool != 0)
						var_0_bool->AddReply(520020, 21205, 21204); //@t
					var_0_bool->AddReply(520030, -1, 21214); //@t
		}
	}
	for(;;) {
		bool var_458_bool;
		func_5210(var_458_bool);
		if(var_458_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4907(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1151;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1151:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x41d";


void func_5149(int var_197_int)
{
	float var_199_float;
	@GetGameTime(var_199_float);
	var_197_int = 1 + (var_199_float / 24);
}


void func_4640(object var_135_object, string var_136_string, int var_137_int)
{
	int var_139_int;
	var_135_object->GetProperty(var_136_string, var_139_int);
	var_135_object->SetProperty(var_136_string, (var_139_int + var_137_int));
}


// @pe
void func_5669(bool var_518_bool)
{
	int var_520_int;
	func_4994(var_520_int, "oob5MladVlad1");
	if(var_520_int == 0) {
		var_518_bool = true;
		return 0;
	}
	var_518_bool = false;
}


// @pe
void func_5158(bool var_296_bool, int var_297_int)
{
	int var_298_int;
	func_5149(var_298_int);
	var_296_bool = var_298_int == var_297_int;
}


void func_4647(bool var_140_bool, cvector var_141_cvector)
{
	cvector var_145_cvector;
	@GetPosition(var_145_cvector);
	cvector var_146_cvector = var_141_cvector - var_145_cvector;
	var_148_float = GetByIndex(var_146_cvector, 0);
	var_149_float = GetByIndex(var_146_cvector, 2);
	bool var_147_bool;
	@Rotate(var_148_float, var_149_float, var_147_bool);
	var_147_bool = var_140_bool;
}


void func_5164(string var_201_string, int var_202_int)
{
	string var_204_string = "idle";
	if(var_202_int != 0)
		var_204_string += var_202_int;
	var_204_string = var_201_string;
}


void func_4657(bool var_53_bool, object var_54_object)
{
	cvector var_56_cvector;
	var_54_object->GetPosition(var_56_cvector);
	bool var_57_bool; cvector var_58_cvector;
	var_56_cvector = var_58_cvector;
	func_4647(var_57_bool, var_58_cvector);
	var_57_bool = var_53_bool;
}


// @pe
void func_5681(bool var_554_bool)
{
	int var_556_int;
	func_4994(var_556_int, "b5q02");
	if(var_556_int == 0) {
		var_554_bool = true;
		return 0;
	}
	var_554_bool = false;
}


void func_5171(int var_195_int)
{
	int var_198_int; bool var_199_bool;
	var_198_int = 0;
	
	for(;;) {
		string var_201_string; int var_202_int;
		var_198_int = var_202_int;
		func_5164(var_201_string, var_202_int);
		@HasAnimation(var_199_bool, "all", var_201_string);
		if(!var_199_bool) //@nz
			break;
		var_198_int += 1;
	}
	var_198_int = var_195_int;
}


// @pe
void func_4152(object var_2_object, string var_839_string)
{
	bool var_840_bool;
	func_5210(var_840_bool);
	if(!var_840_bool) //@nz
		return 0;
	if(var_839_string == var_2_object)
		return 0;
	string var_843_string; bool var_844_bool;
	var_839_string = var_843_string;
	if(var_839_string == "")
		var_844_bool = false;
	else
		var_844_bool = true;
	func_4923(var_843_string, var_844_bool);
	var_2_object = var_839_string;
	
}


void func_4666(object var_79_object)
{
	cvector var_83_cvector;
	var_79_object->GetPosition(var_83_cvector);
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	cvector var_85_cvector = var_83_cvector - var_84_cvector;
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 2);
	@RotateAsync(var_86_float, var_87_float);
}


// @pe
void func_5693(bool var_563_bool)
{
	int var_565_int;
	func_4994(var_565_int, "b5q02");
	if(var_565_int == 2)
		var_563_bool = true;
	var_563_bool = false;
}


// @pe
void func_5188(string var_77_string, int var_78_int)
{
	if(var_78_int == 0) {
		var_82_string = GlobalVars[0];
		var_77_string = "pt_" + var_82_string;
	} else {
		var_84_string = GlobalVars[0];
		var_77_string = ("pt_" + var_84_string) + var_78_int;
	}
	
}


void func_4677(bool var_87_bool)
{
	bool var_89_bool;
	@IsLoaded(var_89_bool);
	var_89_bool = var_87_bool;
}


void func_5705(void)
{
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 315, 1, 522057);
	bool var_70_bool; object var_71_object;
	var_66_object = var_71_object;
	func_5809(var_70_bool, var_71_object, 313);
}
EMIT "Stack[-1] = 0";


void func_4682(bool var_81_bool, object var_82_object, float var_83_float)
{
	cvector var_94_cvector; bool var_101_bool;
	var_82_object->GetPosition(var_94_cvector);
	float var_93_float;
	var_82_object->GetEyesHeight(var_93_float);
	var_102_float = GetByIndex(var_94_cvector, 1);
	SetByIndex(var_94_cvector, 1) = (var_102_float + var_93_float);
	cvector var_95_cvector;
	@GetPosition(var_95_cvector);
	@GetEyesHeight(var_93_float);
	var_103_float = GetByIndex(var_95_cvector, 1);
	SetByIndex(var_95_cvector, 1) = (var_103_float + var_93_float);
	cvector var_96_cvector = var_94_cvector - var_95_cvector;
	var_104_float = GetByIndex(var_96_cvector, 1);
	SetByIndex(var_96_cvector, 1) = (float)0;
	var_106_float = sqrt(var_96_cvector | var_96_cvector);
	var_96_cvector /= var_106_float;
	cvector var_97_cvector = -var_96_cvector;
	cvector var_108_cvector;
	func_4966(var_108_cvector, (var_97_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_98_cvector = ((var_96_cvector * var_83_float) + (var_108_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_100_bool;
	@IsOverrideActive(var_100_bool);
	if(var_100_bool != 0)
		var_81_bool = false;
	@StopWorld();
	@CameraTransit((var_95_cvector + var_98_cvector), var_97_cvector, true);
	var_122_float = GetByIndex(var_98_cvector, 0);
	var_123_float = GetByIndex(var_98_cvector, 2);
	@Rotate(var_122_float, var_123_float);
	bool var_124_bool;
	func_5210(var_124_bool);
	if(var_124_bool != 0) {
	} else {
		@HasAnimationTrack(var_101_bool, "head");
		if(var_101_bool == 0) goto Label_4745;
		@LookAsyncCamera("head");
	}
Label_4745:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_81_bool = true;
	
}


void func_5202(int var_130_int)
{
	var_130_int = 515547;
}


void func_5204(int var_129_int)
{
	var_129_int = 502872;
}


// @pe
void func_3669(object var_2_object, string var_769_string)
{
	bool var_770_bool;
	func_5210(var_770_bool);
	if(!var_770_bool) //@nz
		return 0;
	if(var_769_string == var_2_object)
		return 0;
	string var_773_string; bool var_774_bool;
	var_769_string = var_773_string;
	if(var_769_string == "")
		var_774_bool = false;
	else
		var_774_bool = true;
	func_4923(var_773_string, var_774_bool);
	var_2_object = var_769_string;
	
}


void func_5206(string var_131_string)
{
	var_131_string = "ui/NPC_MladVlad.png";
}


void func_5718(void)
{
	object var_88_object;
	@CreateDiaryEntry(var_88_object, 249, 2, 520665);
	bool var_92_bool; object var_93_object;
	var_88_object = var_93_object;
	func_5809(var_92_bool, var_93_object, -1);
}
EMIT "Stack[-1] = 0";


void func_5208(string var_132_string)
{
	var_132_string = "ui/NPC_MladVlad_b.png";
}


void func_5210(bool var_124_bool)
{
	var_124_bool = true;
}


// @pe
void func_5212(object var_76_object)
{
	object var_80_object;
	func_5837(var_80_object);
	object var_77_object;
	var_80_object = var_77_object;
	func_5854(var_77_object, "pt_map_burah_home", (float)2);
	object var_100_object;
	func_5837(var_100_object);
	var_76_object->ShowMap(var_100_object);
}


// @pe
void func_2656(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_603_object, object var_604_object)
{
	var_0_bool = var_604_object;
	var_1_object = var_603_object;
	var_3_object = false;
	if(1 != 0) {
		func_2714(var_604_object, "Untrust");
		var_0_bool->SetMessage(521202); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(521203, 22402, 22400); //@t
		var_0_bool->AddReply(521204, -1, 22401); //@t
		goto Label_2684;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa64";
	}
Label_2684:
	bool var_625_bool;
	func_5210(var_625_bool);
	if(var_625_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4907(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2713;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2713:
		return 0;

	}
	
}


void func_5731(void)
{
	object var_189_object;
	@CreateDiaryEntry(var_189_object, 252, 2, 520668);
	bool var_193_bool; object var_194_object;
	var_189_object = var_194_object;
	func_5809(var_193_bool, var_194_object, 249);
}
EMIT "Stack[-1] = 0";


void func_1636(bool var_0_bool, int var_487_int, object var_488_object)
{
	var_0_bool = var_488_object;
	bool var_498_bool; object var_499_object;
	var_488_object = var_499_object;
	func_4682(var_498_bool, var_499_object, 70.0);
	if(!var_498_bool) { //@nz
		var_487_int = -2;
		return 8;
	}
	object var_494_object;
	@CreateDialog(var_494_object);
	int var_502_int;
	func_5204(var_502_int);
	var_494_object->SetNPCName(var_502_int);
	int var_503_int;
	func_5202(var_503_int);
	var_494_object->SetNPCDescription(var_503_int);
	string var_504_string;
	func_5206(var_504_string);
	var_494_object->SetPhoto(var_504_string);
	string var_505_string;
	func_5208(var_505_string);
	var_494_object->SetPhoto2(var_505_string);
	int var_506_int;
	func_5887(var_506_int);
	var_494_object->SetPlayerName(var_506_int);
	bool var_495_bool;
	@IsOverrideActive(var_495_bool);
	if(var_495_bool != 0) {
		var_487_int = -2;
		return 8;
	}
	@DoDialog(var_494_object);
	bool var_508_bool; object var_509_object;
	object var_510_object;
	func_4960(var_510_object);
	var_510_object = var_509_object;
	func_4769(var_508_bool, var_509_object);
	object var_511_object; object var_512_object;
	var_488_object = var_511_object;
	var_494_object = var_512_object;
	TaskCall(9);
	func_1717(var_513_object, var_514_object, var_515_string, var_516_bool, var_511_object, var_512_object);
	TaskReturn();
	bool var_497_bool;
	var_494_object->IsDialogEnd(var_497_bool);
	
	for(;;) {
		var_575_bool = !var_497_bool; //@nz
		if(var_575_bool == 0) goto Label_1706;
		@sync();
		var_494_object->IsDialogEnd(var_497_bool);
	}
	
Label_1706:
	object var_576_object;
	var_488_object = var_576_object;
	func_4751();
	@StopDialog(var_494_object);
	var_494_object->GetReturnValue(-1);
	int var_496_int = var_487_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5228(void)
{
	@SetVariable("oob1MladVlad1", 1);
}


void func_5744(void)
{
	object var_111_object;
	@CreateDiaryEntry(var_111_object, 250, 2, 520666);
	bool var_115_bool; object var_116_object;
	var_111_object = var_116_object;
	func_5809(var_115_bool, var_116_object, 249);
}
EMIT "Stack[-1] = 0";


void func_5234(void)
{
	object var_65_object;
	func_5837(var_65_object);
	object var_64_object;
	var_65_object = var_64_object;
	float var_76_float;
	func_5144(var_76_float);
	var_64_object->AddMark("b1MladVladGotoGrif", "pt_map_grif", 3, 520047, var_76_float);
}
EMIT "Stack[-1] = 0";


void func_5757(void)
{
	object var_60_object;
	@CreateDiaryEntry(var_60_object, 293, 2, 521491);
	bool var_64_bool; object var_65_object;
	var_60_object = var_65_object;
	func_5809(var_64_bool, var_65_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1152(object var_2_object, string var_443_string)
{
	bool var_444_bool;
	func_5210(var_444_bool);
	if(!var_444_bool) //@nz
		return 0;
	if(var_443_string == var_2_object)
		return 0;
	string var_447_string; bool var_448_bool;
	var_443_string = var_447_string;
	if(var_443_string == "")
		var_448_bool = false;
	else
		var_448_bool = true;
	func_4923(var_447_string, var_448_bool);
	var_2_object = var_443_string;
	
}


// @pe
void func_5250(void)
{
	@SetVariable("oob1MladVlad2", 1);
}


void func_5256(void)
{
	@SetVariable("b2MladVladBurahHomeTalk", 1);
	object var_61_object;
	func_5837(var_61_object);
	object var_58_object;
	var_61_object = var_58_object;
	float var_72_float;
	func_5144(var_72_float);
	var_58_object->AddMark("b2BurahHome", "pt_map_burah_home", 3, 520460, var_72_float);
}
EMIT "Stack[-1] = 0";


void func_5770(void)
{
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 296, 2, 521494);
	bool var_113_bool; object var_114_object;
	var_109_object = var_114_object;
	func_5809(var_113_bool, var_114_object, 293);
}
EMIT "Stack[-1] = 0";


void func_4751(void)
{
	bool var_289_bool;
	@CameraSwitchToNormal(true);
	bool var_291_bool;
	func_5210(var_291_bool);
	if(var_291_bool != 0) {
	} else {
		@HasAnimationTrack(var_289_bool, "head");
		if(var_289_bool == 0) goto Label_4768;
		@UnlookAsync("head");
	}
Label_4768:
	
}


void func_145(void)
{
	@Stop();
}


void func_148(object var_75_object)
{
	bool var_77_bool;
	@WaitForAnimEnd(var_77_bool);
	if(!var_77_bool) { //@nz
	}
	object var_79_object;
	var_75_object = var_79_object;
	func_4666(var_79_object);
	@Sleep(6);
}


void func_5783(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 294, 2, 521492);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_5809(var_87_bool, var_88_object, 293);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2714(object var_2_object, string var_610_string)
{
	bool var_611_bool;
	func_5210(var_611_bool);
	if(!var_611_bool) //@nz
		return 0;
	if(var_610_string == var_2_object)
		return 0;
	string var_614_string; bool var_615_bool;
	var_610_string = var_614_string;
	if(var_610_string == "")
		var_615_bool = false;
	else
		var_615_bool = true;
	func_4923(var_614_string, var_615_bool);
	var_2_object = var_610_string;
	
}


// @pe
void func_5276(void)
{
	func_5021("burah_home@door1", false);
}


void func_4769(bool var_142_bool, object var_143_object)
{
	int var_149_int; int var_150_int;
	@GetVariable("voice_common", var_149_int);
	if(var_149_int != 0) {
		bool var_153_bool; object var_154_object;
		var_143_object = var_154_object;
		func_4827(var_153_bool, var_154_object);
		if(!var_153_bool) { //@nz
			bool var_184_bool; object var_185_object;
			var_143_object = var_185_object;
			func_4864(var_184_bool, var_185_object);
			if(!var_184_bool) { //@nz
				var_142_bool = false;
				return 4;
			}
		}
		@irand(var_150_int, 2);
		if(var_150_int != 0)
			@SetVariable("voice_common", ((var_149_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_229_bool; object var_230_object;
		var_143_object = var_230_object;
		func_4864(var_229_bool, var_230_object);
		if(!var_229_bool) { //@nz
			bool var_232_bool; object var_233_object;
			var_143_object = var_233_object;
			func_4827(var_232_bool, var_233_object);
			if(!var_232_bool) { //@nz
				var_142_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4825;
	
Label_4825:
	var_142_bool = true;
	
}


// @pe
void func_5283(void)
{
	@SetVariable("oob2MladVlad1", 1);
}


void func_5796(object var_79_object)
{
	object var_81_object;
	@GetDiaryRoot(var_81_object);
	if(!var_81_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_79_object = false;
	}
	var_81_object = var_79_object;
}
EMIT "Stack[-1] = 0";


void func_5289(void)
{
	object var_140_object;
	int var_141_int;
	func_4994(var_141_int, "b2TravnikMark");
	if(var_141_int == 0) {
		@SetVariable("b2TravnikMark", 1);
		object var_149_object;
		func_5837(var_149_object);
		var_149_object = var_140_object;
		float var_154_float;
		func_5144(var_154_float);
		var_140_object->AddMark("b2Travnik1", "pt_map_gatherer1", 3, 520463, var_154_float);
		float var_159_float;
		func_5144(var_159_float);
		var_140_object->AddMark("b2Travnik2", "pt_map_gatherer2", 3, 520464, var_159_float);
		float var_164_float;
		func_5144(var_164_float);
		var_140_object->AddMark("b2Travnik3", "pt_map_gatherer3", 3, 520465, var_164_float);
		var_140_object = null;
	}
}


void func_4267(bool var_0_bool, int var_868_int, object var_869_object)
{
	var_0_bool = var_869_object;
	bool var_879_bool; object var_880_object;
	var_869_object = var_880_object;
	func_4682(var_879_bool, var_880_object, 70.0);
	if(!var_879_bool) { //@nz
		var_868_int = -2;
		return 8;
	}
	object var_875_object;
	@CreateDialog(var_875_object);
	int var_883_int;
	func_5204(var_883_int);
	var_875_object->SetNPCName(var_883_int);
	int var_884_int;
	func_5202(var_884_int);
	var_875_object->SetNPCDescription(var_884_int);
	string var_885_string;
	func_5206(var_885_string);
	var_875_object->SetPhoto(var_885_string);
	string var_886_string;
	func_5208(var_886_string);
	var_875_object->SetPhoto2(var_886_string);
	int var_887_int;
	func_5887(var_887_int);
	var_875_object->SetPlayerName(var_887_int);
	bool var_876_bool;
	@IsOverrideActive(var_876_bool);
	if(var_876_bool != 0) {
		var_868_int = -2;
		return 8;
	}
	@DoDialog(var_875_object);
	bool var_889_bool; object var_890_object;
	object var_891_object;
	func_4960(var_891_object);
	var_891_object = var_890_object;
	func_4769(var_889_bool, var_890_object);
	object var_892_object; object var_893_object;
	var_869_object = var_892_object;
	var_875_object = var_893_object;
	TaskCall(21);
	func_4348(var_894_object, var_895_object, var_896_string, var_897_bool, var_892_object, var_893_object);
	TaskReturn();
	bool var_878_bool;
	var_875_object->IsDialogEnd(var_878_bool);
	
	for(;;) {
		var_922_bool = !var_878_bool; //@nz
		if(var_922_bool == 0) goto Label_4337;
		@sync();
		var_875_object->IsDialogEnd(var_878_bool);
	}
	
Label_4337:
	object var_923_object;
	var_869_object = var_923_object;
	func_4751();
	@StopDialog(var_875_object);
	var_875_object->GetReturnValue(-1);
	int var_877_int = var_868_int;
}
EMIT "Stack[-4] = 0";


void func_5809(bool var_70_bool, object var_71_object, int var_72_int)
{
	object var_79_object;
	func_5796(var_79_object);
	object var_76_object;
	var_79_object = var_76_object;
	object var_77_object;
	var_76_object->Find(var_72_int, var_77_object);
	if(!var_77_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_72_int);
		var_70_bool = false;
	}
	var_77_object->AddChild(var_71_object);
	@SendWorldWndMessage(7);
	int var_78_int;
	var_71_object->GetCategory(var_78_int);
	@SetDiarySection(var_78_int);
	var_70_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1717(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_511_object, object var_512_object)
{
	var_0_bool = var_512_object;
	var_1_object = var_511_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_518_bool;
		func_5669(var_1_object);
		if(var_518_bool != 0) {
			object var_524_object; object var_525_object;
			var_524_object = var_1_object;
			var_525_object = var_0_bool;
			func_5334();
			object var_528_object; object var_529_object;
			var_528_object = var_1_object;
			var_529_object = var_0_bool;
			func_5488();
			func_1820(var_512_object, "Rage");
			var_0_bool->SetMessage(520138); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(520139, 21324, 21323); //@t
		} else {
					func_1820(var_512_object, "Rage");
					var_0_bool->SetMessage(520157); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_554_bool;
					func_5681(var_1_object);
					if(var_554_bool != 0)
						var_0_bool->AddReply(520158, 21346, 21345); //@t
					bool var_563_bool;
					func_5693(var_1_object);
					if(var_563_bool != 0)
						var_0_bool->AddReply(520164, 21352, 21351); //@t
					var_0_bool->AddReply(520180, -1, 21370); //@t
		}
	}
	for(;;) {
		bool var_544_bool;
		func_5210(var_544_bool);
		if(var_544_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4907(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1819;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1819:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x6b9";


void func_193(void)
{
	@StopGroup0();
	@StopAnimation();
}


void func_198(int var_159_int)
{
	string var_167_string; string var_169_string; int var_170_int; int var_171_int; int var_172_int; int var_173_int;
	if(var_159_int != 0)
		var_167_string = "ptidle" + var_159_int;
	else
		var_167_string = "ptidle";
	bool var_168_bool;
	@HasProperty(var_167_string, var_168_bool);
	if(var_168_bool != 0) {
		@GetProperty(var_167_string, var_169_string);
		int var_177_int; string var_178_string;
		var_169_string = var_178_string;
		func_264(var_177_int, var_178_string);
		var_177_int = var_170_int;
		@irand(var_171_int, var_170_int);
		string var_192_string; string var_193_string; int var_194_int;
		var_169_string = var_193_string;
		var_171_int = var_194_int;
		func_256(var_192_string, var_193_string, var_194_int);
		@PlayAnimation("all", var_192_string);
		@WaitForAnimEnd();
	} else {
		int var_195_int;
		func_5171(var_195_int);
		var_195_int = var_172_int;
		if(var_172_int == 0) goto Label_246;
		@irand(var_173_int, var_172_int);
		string var_210_string; int var_211_int;
		var_173_int = var_211_int;
		func_5164(var_210_string, var_211_int);
		@PlayAnimation("all", var_210_string);
		@WaitForAnimEnd();

	}
Label_246:
	
}


void func_5837(object var_61_object)
{
	object var_64_object; object var_65_object;
	@GetMainOutdoorScene(var_64_object);
	if(var_64_object == null) {
		@Trace("Can't find main outdoor scene");
		var_65_object = null;
		var_65_object = var_61_object;
	}
	var_64_object->GetMap(var_65_object);
	var_65_object = var_61_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5334(void)
{
	@SetVariable("oob5MladVlad1", 1);
}


void func_4827(bool var_153_bool, object var_154_object)
{
	string var_160_string; bool var_162_bool; int var_163_int; string var_164_string;
	var_160_string = "c";
	int var_161_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_154_object->HasProperty((var_160_string + (var_161_int + 1)), var_162_bool);
			if(!var_162_bool) { //@nz
			} else {
				var_161_int += 1;
			}
		}
		if(!var_161_int) { //@nz
			var_153_bool = false;
			return 10;
		}
		var_163_int = 0;
		if(var_161_int > 1)
			@irand(var_163_int, var_161_int);
		var_154_object->GetProperty((var_160_string + (var_163_int + 1)), var_164_string);
		bool var_176_bool; string var_177_string;
		var_164_string = var_177_string;
		func_4938(var_176_bool, var_177_string);
		var_176_bool = var_153_bool;
		return 10;

	}
}


// @pe
void func_5340(void)
{
	@SetVariable("b5q02", 1);
	func_5718();
	func_5744();
	object var_118_object;
	func_4999(var_118_object, "quest_b5_02");
	bool var_126_bool;
	func_5108(var_126_bool, "quest_b5_02", "place_prophet");
	bool var_132_bool;
	func_5108(var_132_bool, "quest_b5_02", "maze_start");
}


void func_5854(object var_77_object, string var_78_string, float var_79_float)
{
	object var_87_object;
	@GetMainOutdoorScene(var_87_object);
	if(var_87_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_85_cvector;
	cvector var_86_cvector;
	bool var_88_bool;
	var_87_object->GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector);
	if(!var_88_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_78_string) + " doesnt exist");
	var_87_object->GetMap(var_77_object);
	if(var_77_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_98_float = GetByIndex(var_85_cvector, 0);
	var_99_float = GetByIndex(var_85_cvector, 2);
	var_77_object->SetMapParams(var_98_float, var_99_float, var_79_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_5366(void)
{
	func_5731();
	bool var_196_bool;
	func_5108(var_196_bool, "quest_b5_02", "completed");
}


// @pe
void func_4348(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_892_object, object var_893_object)
{
	var_0_bool = var_893_object;
	var_1_object = var_892_object;
	var_3_object = false;
	if(1 != 0) {
		func_4406(var_893_object, "Neutral");
		var_0_bool->SetMessage(540554); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540555, -1, 42564); //@t
		var_0_bool->AddReply(540794, -1, 42843); //@t
		goto Label_4376;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1100";
	}
Label_4376:
	bool var_914_bool;
	func_5210(var_914_bool);
	if(var_914_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4907(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4405;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4405:
		return 0;

	}
	
}


void func_5887(int var_133_int)
{
	int var_135_int;
	@GetVariable("branch", var_135_int);
	if(var_135_int == 0) {
		var_133_int = 1;
		return 2;
	EMIT "GOTO 0x170e";
	}
	if(var_135_int == 1) {
		var_133_int = 2;
		return 2;
	}
	var_133_int = 3;
}


// @pe
void func_256(string var_184_string, string var_185_string, int var_186_int)
{
	if(var_186_int == 0) {
	} else {
		var_184_string += var_186_int;
	}
	
}


// @pe
void func_5376(object var_128_object)
{
	@Trace("money 4000 is given");
	object var_131_object;
	var_128_object = var_131_object;
	func_5050(var_131_object, 4000);
}


void func_4864(bool var_184_bool, object var_185_object)
{
	bool var_193_bool; int var_194_int; string var_195_string;
	int var_197_int;
	func_5149(var_197_int);
	string var_191_string = ("d" + var_197_int) + "m";
	int var_192_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_185_object->HasProperty((var_191_string + (var_192_int + 1)), var_193_bool);
			if(!var_193_bool) { //@nz
			} else {
				var_192_int += 1;
			}
		}
		if(!var_192_int) { //@nz
			var_184_bool = false;
			return 10;
		}
		var_194_int = 0;
		if(var_192_int > 1)
			@irand(var_194_int, var_192_int);
		var_185_object->GetProperty((var_191_string + (var_194_int + 1)), var_195_string);
		bool var_216_bool; string var_217_string;
		var_195_string = var_217_string;
		func_4938(var_216_bool, var_217_string);
		var_216_bool = var_184_bool;
		return 10;

	}
}


void func_264(int var_177_int, string var_178_string)
{
	int var_181_int; bool var_182_bool;
	var_181_int = 0;
	
	for(;;) {
		string var_184_string; string var_185_string; int var_186_int;
		var_178_string = var_185_string;
		var_181_int = var_186_int;
		func_256(var_184_string, var_185_string, var_186_int);
		@HasAnimation(var_182_bool, "all", var_184_string);
		if(!var_182_bool) //@nz
			break;
		var_181_int += 1;
	}
	var_181_int = var_177_int;
}


// @pe
void func_5386(object var_55_object)
{
	@Trace("kerosene50 is given");
	object var_58_object;
	var_55_object = var_58_object;
	func_5088(var_58_object, "kerosene", 50);
}


void func_2827(bool var_0_bool, int var_637_int, object var_638_object)
{
	var_0_bool = var_638_object;
	bool var_648_bool; object var_649_object;
	var_638_object = var_649_object;
	func_4682(var_648_bool, var_649_object, 70.0);
	if(!var_648_bool) { //@nz
		var_637_int = -2;
		return 8;
	}
	object var_644_object;
	@CreateDialog(var_644_object);
	int var_652_int;
	func_5204(var_652_int);
	var_644_object->SetNPCName(var_652_int);
	int var_653_int;
	func_5202(var_653_int);
	var_644_object->SetNPCDescription(var_653_int);
	string var_654_string;
	func_5206(var_654_string);
	var_644_object->SetPhoto(var_654_string);
	string var_655_string;
	func_5208(var_655_string);
	var_644_object->SetPhoto2(var_655_string);
	int var_656_int;
	func_5887(var_656_int);
	var_644_object->SetPlayerName(var_656_int);
	bool var_645_bool;
	@IsOverrideActive(var_645_bool);
	if(var_645_bool != 0) {
		var_637_int = -2;
		return 8;
	}
	@DoDialog(var_644_object);
	bool var_658_bool; object var_659_object;
	object var_660_object;
	func_4960(var_660_object);
	var_660_object = var_659_object;
	func_4769(var_658_bool, var_659_object);
	object var_661_object; object var_662_object;
	var_638_object = var_661_object;
	var_644_object = var_662_object;
	TaskCall(15);
	func_2908(var_663_object, var_664_object, var_665_string, var_666_bool, var_661_object, var_662_object);
	TaskReturn();
	bool var_647_bool;
	var_644_object->IsDialogEnd(var_647_bool);
	
	for(;;) {
		var_734_bool = !var_647_bool; //@nz
		if(var_734_bool == 0) goto Label_2897;
		@sync();
		var_644_object->IsDialogEnd(var_647_bool);
	}
	
Label_2897:
	object var_735_object;
	var_638_object = var_735_object;
	func_4751();
	@StopDialog(var_644_object);
	var_644_object->GetReturnValue(-1);
	int var_646_int = var_637_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5904(object var_67_object)
{
	var_68_bool = GlobalVars[2];
	if(!var_68_bool) { //@nz
		int var_70_int; object var_71_object;
		var_67_object = var_71_object;
		TaskCall(10);
		func_2336(var_72_object, var_70_int, var_71_object);
		TaskReturn();
		var_295_bool = GlobalVars[2];
		GlobalVars[2] = true;
	}
	bool var_296_bool;
	func_5158(var_296_bool, 1);
	if(var_296_bool != 0) {
		int var_299_int; object var_300_object;
		var_67_object = var_300_object;
		TaskCall(4);
		func_282(var_301_object, var_299_int, var_300_object);
		TaskReturn();
		return 0;
	}
	bool var_395_bool;
	func_5158(var_395_bool, 2);
	if(var_395_bool != 0) {
		int var_397_int; object var_398_object;
		var_67_object = var_398_object;
		TaskCall(6);
		func_968(var_399_object, var_397_int, var_398_object);
		TaskReturn();
		return 0;
	}
	bool var_485_bool;
	func_5158(var_485_bool, 5);
	if(var_485_bool != 0) {
		int var_487_int; object var_488_object;
		var_67_object = var_488_object;
		TaskCall(8);
		func_1636(var_489_object, var_487_int, var_488_object);
		TaskReturn();
		return 0;
	}
	bool var_577_bool;
	func_5158(var_577_bool, 6);
	if(var_577_bool != 0) {
		int var_579_int; object var_580_object;
		var_67_object = var_580_object;
		TaskCall(12);
		func_2575(var_581_object, var_579_int, var_580_object);
		TaskReturn();
		return 0;
	}
	bool var_635_bool;
	func_5158(var_635_bool, 8);
	if(var_635_bool != 0) {
		int var_637_int; object var_638_object;
		var_67_object = var_638_object;
		TaskCall(14);
		func_2827(var_639_object, var_637_int, var_638_object);
		TaskReturn();
		return 0;
	}
	bool var_736_bool;
	func_5158(var_736_bool, 11);
	if(var_736_bool != 0) {
		int var_738_int; object var_739_object;
		var_67_object = var_739_object;
		TaskCall(16);
		func_3520(var_740_object, var_738_int, var_739_object);
		TaskReturn();
		return 0;
	}
	bool var_803_bool = false;
	bool var_804_bool;
	func_5158(var_804_bool, 12);
	if(var_804_bool != 0) {
		var_806_bool = GlobalVars[3];
		if(!var_806_bool) //@nz
			var_803_bool = true;
	}
	if(var_803_bool != 0) {
		int var_808_int; object var_809_object;
		var_67_object = var_809_object;
		TaskCall(18);
		func_4008(var_810_object, var_808_int, var_809_object);
		TaskReturn();
		var_867_bool = GlobalVars[3];
		GlobalVars[3] = true;
		return 0;
	}
	int var_868_int; object var_869_object;
	var_67_object = var_869_object;
	TaskCall(20);
	func_4267(var_870_object, var_868_int, var_869_object);
	TaskReturn();
}


// @pe
void func_5397(void)
{
	object var_60_object;
	func_4633(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_5120(var_57_object, "house_vlad", "pt_maze_start");
}


void func_282(bool var_0_bool, int var_299_int, object var_300_object)
{
	var_0_bool = var_300_object;
	bool var_310_bool; object var_311_object;
	var_300_object = var_311_object;
	func_4682(var_310_bool, var_311_object, 70.0);
	if(!var_310_bool) { //@nz
		var_299_int = -2;
		return 8;
	}
	object var_306_object;
	@CreateDialog(var_306_object);
	int var_314_int;
	func_5204(var_314_int);
	var_306_object->SetNPCName(var_314_int);
	int var_315_int;
	func_5202(var_315_int);
	var_306_object->SetNPCDescription(var_315_int);
	string var_316_string;
	func_5206(var_316_string);
	var_306_object->SetPhoto(var_316_string);
	string var_317_string;
	func_5208(var_317_string);
	var_306_object->SetPhoto2(var_317_string);
	int var_318_int;
	func_5887(var_318_int);
	var_306_object->SetPlayerName(var_318_int);
	bool var_307_bool;
	@IsOverrideActive(var_307_bool);
	if(var_307_bool != 0) {
		var_299_int = -2;
		return 8;
	}
	@DoDialog(var_306_object);
	bool var_320_bool; object var_321_object;
	object var_322_object;
	func_4960(var_322_object);
	var_322_object = var_321_object;
	func_4769(var_320_bool, var_321_object);
	object var_323_object; object var_324_object;
	var_300_object = var_323_object;
	var_306_object = var_324_object;
	TaskCall(5);
	func_363(var_325_object, var_326_object, var_327_string, var_328_bool, var_323_object, var_324_object);
	TaskReturn();
	bool var_309_bool;
	var_306_object->IsDialogEnd(var_309_bool);
	
	for(;;) {
		var_393_bool = !var_309_bool; //@nz
		if(var_393_bool == 0) goto Label_352;
		@sync();
		var_306_object->IsDialogEnd(var_309_bool);
	}
	
Label_352:
	object var_394_object;
	var_300_object = var_394_object;
	func_4751();
	@StopDialog(var_306_object);
	var_306_object->GetReturnValue(-1);
	int var_308_int = var_299_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1820(object var_2_object, string var_532_string)
{
	bool var_533_bool;
	func_5210(var_533_bool);
	if(!var_533_bool) //@nz
		return 0;
	if(var_532_string == var_2_object)
		return 0;
	string var_536_string; bool var_537_bool;
	var_532_string = var_536_string;
	if(var_532_string == "")
		var_537_bool = false;
	else
		var_537_bool = true;
	func_4923(var_536_string, var_537_bool);
	var_2_object = var_532_string;
	
}


// @pe
void func_5408(void)
{
	@SetVariable("b8q02", 1);
	func_5757();
	func_5783();
	object var_90_object;
	func_5010(var_90_object, "quest_b8_02");
}


void func_2336(bool var_0_bool, int var_70_int, object var_71_object)
{
	var_0_bool = var_71_object;
	bool var_81_bool; object var_82_object;
	var_71_object = var_82_object;
	func_4682(var_81_bool, var_82_object, 70.0);
	if(!var_81_bool) { //@nz
		var_70_int = -2;
		return 8;
	}
	object var_77_object;
	@CreateDialog(var_77_object);
	int var_129_int;
	func_5204(var_129_int);
	var_77_object->SetNPCName(var_129_int);
	int var_130_int;
	func_5202(var_130_int);
	var_77_object->SetNPCDescription(var_130_int);
	string var_131_string;
	func_5206(var_131_string);
	var_77_object->SetPhoto(var_131_string);
	string var_132_string;
	func_5208(var_132_string);
	var_77_object->SetPhoto2(var_132_string);
	int var_133_int;
	func_5887(var_133_int);
	var_77_object->SetPlayerName(var_133_int);
	bool var_78_bool;
	@IsOverrideActive(var_78_bool);
	if(var_78_bool != 0) {
		var_70_int = -2;
		return 8;
	}
	@DoDialog(var_77_object);
	bool var_142_bool; object var_143_object;
	object var_144_object;
	func_4960(var_144_object);
	var_144_object = var_143_object;
	func_4769(var_142_bool, var_143_object);
	object var_237_object; object var_238_object;
	var_71_object = var_237_object;
	var_77_object = var_238_object;
	TaskCall(11);
	func_2417(var_239_object, var_240_object, var_241_string, var_242_bool, var_237_object, var_238_object);
	TaskReturn();
	bool var_80_bool;
	var_77_object->IsDialogEnd(var_80_bool);
	
	for(;;) {
		var_286_bool = !var_80_bool; //@nz
		if(var_286_bool == 0) goto Label_2406;
		@sync();
		var_77_object->IsDialogEnd(var_80_bool);
	}
	
Label_2406:
	object var_287_object;
	var_71_object = var_287_object;
	func_4751();
	@StopDialog(var_77_object);
	var_77_object->GetReturnValue(-1);
	int var_79_int = var_70_int;
}
EMIT "Stack[-4] = 0";


void func_4907(string var_270_string)
{
	bool var_274_bool; float var_275_float; float var_276_float;
	@lshHasAnimation(var_274_bool, var_270_string);
	if(var_274_bool != 0) {
		@lshGetAnimTimes(var_270_string, var_275_float, var_276_float);
		@lshPlayAnimation(var_275_float, var_276_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_270_string);
	}
	
}


void func_5424(object var_104_object)
{
	func_5770();
	bool var_116_bool;
	func_5108(var_116_bool, "quest_b8_02", "completed");
	int var_107_int;
	var_104_object->RemoveItemByType(var_107_int, "b8q02_book", 1);
}


// @pe
void func_4406(object var_2_object, string var_899_string)
{
	bool var_900_bool;
	func_5210(var_900_bool);
	if(!var_900_bool) //@nz
		return 0;
	if(var_899_string == var_2_object)
		return 0;
	string var_903_string; bool var_904_bool;
	var_899_string = var_903_string;
	if(var_899_string == "")
		var_904_bool = false;
	else
		var_904_bool = true;
	func_4923(var_903_string, var_904_bool);
	var_2_object = var_899_string;
	
}


void func_4923(string var_248_string, bool var_249_bool)
{
	bool var_255_bool; float var_256_float; float var_257_float;
	@lshHasAnimation(var_255_bool, var_248_string);
	if(var_255_bool != 0) {
		@lshGetAnimTimes(var_248_string, var_256_float, var_257_float);
		@lshPlayAnimation(var_256_float, var_257_float, var_249_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_248_string);
	}
	
}


// @pe
void func_5438(void)
{
	@SetVariable("oob8MladVlad1", 1);
}


// @pe
void func_5444(void)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	func_5705();
}


void func_4938(bool var_176_bool, string var_177_string)
{
	bool var_179_bool;
	bool var_180_bool;
	func_5210(var_180_bool);
	if(var_180_bool != 0) {
		@lshHasSpeech(var_179_bool, var_177_string);
		if(var_179_bool != 0) {
			@lshPlaySpeech(var_177_string);
			var_176_bool = true;
		}
	}
	var_176_bool = false;
}


// @pe
void func_5453(void)
{
	@SetVariable("oob11MladVlad1", 1);
}


// @pe
void func_5459(void)
{
	bool var_437_bool;
	func_5108(var_437_bool, "quest_b2_01", "place_mladvlad");
}


void func_4953(void)
{
	bool var_52_bool;
	func_5210(var_52_bool);
	if(var_52_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5466(object var_171_object)
{
	@Trace("money10000 is given");
	object var_174_object;
	var_171_object = var_174_object;
	func_5050(var_174_object, 10000);
}


// @pe
void func_2908(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_661_object, object var_662_object)
{
	var_0_bool = var_662_object;
	var_1_object = var_661_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_668_bool;
		func_5538(var_1_object);
		if(var_668_bool != 0) {
			object var_674_object; object var_675_object;
			var_674_object = var_1_object;
			var_675_object = var_0_bool;
			func_5438();
			func_3026(var_662_object, "Rage");
			var_0_bool->SetMessage(521469); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(523789, 25055, 25054); //@t
			var_0_bool->AddReply(523804, 25055, 25070); //@t
		} else {
					func_3026(var_662_object, "Rage");
					var_0_bool->SetMessage(521474); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_703_bool;
					func_5550(var_1_object);
					if(var_703_bool != 0)
						var_0_bool->AddReply(521475, 22642, 22640); //@t
					bool var_712_bool = false;
					bool var_713_bool;
					func_5550(var_1_object);
					if(!var_713_bool) { //@nz
						bool var_716_bool;
						func_5562(var_716_bool, var_1_object);
						if(var_716_bool != 0)
							var_712_bool = true;
					}
					if(var_712_bool != 0)
						var_0_bool->AddReply(521479, 22645, 22644); //@t
					var_0_bool->AddReply(523837, 25111, 25110); //@t
					var_0_bool->AddReply(521476, -1, 22641); //@t
		}
	}
	for(;;) {
		bool var_693_bool;
		func_5210(var_693_bool);
		if(var_693_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4907(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3025;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3025:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xb60";


void func_4960(object var_144_object)
{
	object var_146_object;
	@self(var_146_object);
	var_146_object = var_144_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5476(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_4966(cvector var_108_cvector, cvector var_109_cvector)
{
	float var_112_float = sqrt(var_109_cvector | var_109_cvector);
	if(var_112_float < 0.000001)
		var_108_cvector = [0.0, 0.0, 0.0];
	var_108_cvector = var_109_cvector / var_112_float;
}


// @pe
void func_5482(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_363(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_323_object, object var_324_object)
{
	var_0_bool = var_324_object;
	var_1_object = var_323_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_330_bool;
		func_5609(var_1_object);
		if(var_330_bool != 0) {
			func_481(var_324_object, "Untrust");
			var_0_bool->SetMessage(520042); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(520043, 21227, 21225); //@t
			var_0_bool->AddReply(520044, -1, 21226); //@t
		} else {
					bool var_361_bool;
					func_5621(var_1_object);
					if(var_361_bool == 0) goto Label_424;
					object var_367_object; object var_368_object;
					var_367_object = var_1_object;
					var_368_object = var_0_bool;
					func_5228();
					func_481(var_324_object, "Neutral");
					var_0_bool->SetMessage(519876); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(519877, 21042, 21041); //@t
					var_0_bool->AddReply(519905, 21042, 21073); //@t
		}
	}
Label_451:
	for(;;) {
		bool var_353_bool;
		func_5210(var_353_bool);
		if(var_353_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4907(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_480;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_480:
			return 0;

		}

	}
	
Label_424:
	func_481(var_324_object, "Neutral");
	var_0_bool->SetMessage(519906); //@t
	var_0_bool->ClearReplies(); //@t
	bool var_381_bool;
	func_5633(var_1_object);
	if(var_381_bool != 0)
		var_0_bool->AddReply(519907, 21077, 21076); //@t
	var_0_bool->AddReply(519917, -1, 21086); //@t
	goto Label_451;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16f";


// @pe
void func_5488(void)
{
	@SetVariable("b5MladVladVisit", 1);
}


// @pe
void func_2417(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_237_object, object var_238_object)
{
	var_0_bool = var_238_object;
	var_1_object = var_237_object;
	var_3_object = false;
	if(1 != 0) {
		func_2475(var_238_object, "Neutral");
		var_0_bool->SetMessage(520768); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520769, 21984, 21983); //@t
		var_0_bool->AddReply(520772, 21987, 21986); //@t
		goto Label_2445;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x975";
	}
Label_2445:
	bool var_268_bool;
	func_5210(var_268_bool);
	if(var_268_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4907(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2474;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2474:
		return 0;

	}
	
}


// @pe
void func_4976(float var_105_float, float var_106_float)
{
	if(var_106_float < 0)
		var_105_float = -var_106_float;
	else
		var_106_float = var_105_float;
	
}


// @pe
void func_5494(object var_199_object)
{
	@Trace("money 7000 is given");
	object var_202_object;
	var_199_object = var_202_object;
	func_5050(var_202_object, 7000);
}


// @pe
void func_4984(float var_116_float, cvector var_117_cvector)
{
	var_118_float = GetByIndex(var_117_cvector, 0);
	var_119_float = GetByIndex(var_117_cvector, 0);
	var_121_float = GetByIndex(var_117_cvector, 2);
	var_122_float = GetByIndex(var_117_cvector, 2);
	var_116_float = sqrt((var_118_float * var_119_float) + (var_121_float * var_122_float));
}


void func_4477(bool var_0_bool, object var_1_object, object var_2_object)
{
	bool var_62_bool; int var_63_int; bool var_64_bool; cvector var_65_cvector; cvector var_66_cvector; cvector var_67_cvector; float var_68_float; cvector var_69_cvector; bool var_70_bool; cvector var_71_cvector;
	@SensePlayerOnly(true);
	func_4565();
	object var_61_object;
	@GetScene(var_61_object);
	var_2_object = 0;
	
	for(;;) {
		string var_77_string;
		func_5188(var_77_string, var_2_object);
		var_61_object->GetLocator(var_77_string, var_62_bool);
		if(!var_62_bool) { //@nz
		} else {
		}
		bool var_87_bool;
		func_4677(var_87_bool);
		if(!var_87_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		func_4573(var_70_bool, var_71_cvector);

		for(;;) {
			@irand(var_63_int, (var_2_object + 1));
			string var_111_string; int var_112_int;
			var_63_int = var_112_int;
			func_5188(var_111_string, var_112_int);
			var_61_object->GetLocator(var_111_string, var_64_bool, var_65_cvector, var_66_cvector);
			cvector var_113_cvector;
			func_4620(var_113_cvector);
			var_67_cvector = var_65_cvector - var_113_cvector;
			float var_116_float; cvector var_117_cvector;
			var_67_cvector = var_117_cvector;
			func_4984(var_116_float, var_117_cvector);
			if(var_116_float > var_1_object) {
				@GetHeight(var_68_float);
				var_126_float = GetByIndex(var_69_cvector, 1);
				SetByIndex(var_69_cvector, 1) = (var_126_float + var_68_float);
				@CanReachByPF(var_70_bool, var_69_cvector);
				if(var_70_bool != 0) {
					var_129_float = sqrt(var_67_cvector | var_67_cvector);
					var_71_cvector = var_69_cvector - (var_67_cvector * (var_0_bool / var_129_float));
					bool var_132_bool; cvector var_133_cvector; cvector var_134_cvector;
					var_71_cvector = var_133_cvector;
					var_66_cvector = var_134_cvector;
					TaskCall(1);
					func_13(var_135_bool, var_132_bool, var_133_cvector, var_134_cvector);
					TaskReturn();
					if(var_135_bool != 0) {
						int var_159_int;
						var_63_int = var_159_int;
						TaskCall(3);
						func_198(var_159_int);
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
void func_5504(object var_204_object)
{
	@Trace("recipe2 is given");
	object var_207_object;
	var_204_object = var_207_object;
	func_5088(var_207_object, "recipe2", 1);
}


void func_4994(int var_332_int, string var_333_string)
{
	int var_335_int;
	@GetVariable(var_333_string, var_335_int);
	var_335_int = var_332_int;
}


void func_4999(object var_118_object, string var_119_string)
{
	object var_122_object;
	@GetMainOutdoorScene(var_122_object);
	object var_123_object;
	@AddBlankActor(var_123_object, var_122_object, var_119_string, (var_119_string + ".bin"));
	var_123_object = var_118_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5515(object var_210_object)
{
	@Trace("recipe3 is given");
	object var_213_object;
	var_210_object = var_213_object;
	func_5088(var_213_object, "recipe3", 1);
}


void func_5010(object var_90_object, string var_91_string)
{
	object var_94_object;
	@GetMainOutdoorScene(var_94_object);
	object var_95_object;
	@AddBlankActorFromXml(var_95_object, var_94_object, var_91_string, (var_91_string + ".xml"));
	var_95_object = var_90_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5526(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5532(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_5021(string var_103_string, bool var_104_bool)
{
	object var_106_object;
	@FindActor(var_106_object, var_103_string);
	if(!var_106_object) //@nz
		@Trace(("Door " + var_103_string) + " not found");
	else
		var_106_object->SetProperty("locked", var_104_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_5538(bool var_668_bool)
{
	int var_670_int;
	func_4994(var_670_int, "oob8MladVlad1");
	if(var_670_int == 0) {
		var_668_bool = true;
		return 0;
	}
	var_668_bool = false;
}


void func_4008(bool var_0_bool, int var_808_int, object var_809_object)
{
	var_0_bool = var_809_object;
	bool var_819_bool; object var_820_object;
	var_809_object = var_820_object;
	func_4682(var_819_bool, var_820_object, 70.0);
	if(!var_819_bool) { //@nz
		var_808_int = -2;
		return 8;
	}
	object var_815_object;
	@CreateDialog(var_815_object);
	int var_823_int;
	func_5204(var_823_int);
	var_815_object->SetNPCName(var_823_int);
	int var_824_int;
	func_5202(var_824_int);
	var_815_object->SetNPCDescription(var_824_int);
	string var_825_string;
	func_5206(var_825_string);
	var_815_object->SetPhoto(var_825_string);
	string var_826_string;
	func_5208(var_826_string);
	var_815_object->SetPhoto2(var_826_string);
	int var_827_int;
	func_5887(var_827_int);
	var_815_object->SetPlayerName(var_827_int);
	bool var_816_bool;
	@IsOverrideActive(var_816_bool);
	if(var_816_bool != 0) {
		var_808_int = -2;
		return 8;
	}
	@DoDialog(var_815_object);
	bool var_829_bool; object var_830_object;
	object var_831_object;
	func_4960(var_831_object);
	var_831_object = var_830_object;
	func_4769(var_829_bool, var_830_object);
	object var_832_object; object var_833_object;
	var_809_object = var_832_object;
	var_815_object = var_833_object;
	TaskCall(19);
	func_4089(var_834_object, var_835_object, var_836_string, var_837_bool, var_832_object, var_833_object);
	TaskReturn();
	bool var_818_bool;
	var_815_object->IsDialogEnd(var_818_bool);
	
	for(;;) {
		var_865_bool = !var_818_bool; //@nz
		if(var_865_bool == 0) goto Label_4078;
		@sync();
		var_815_object->IsDialogEnd(var_818_bool);
	}
	
Label_4078:
	object var_866_object;
	var_809_object = var_866_object;
	func_4751();
	@StopDialog(var_815_object);
	var_815_object->GetReturnValue(-1);
	int var_817_int = var_808_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2475(object var_2_object, string var_244_string)
{
	bool var_245_bool;
	func_5210(var_245_bool);
	if(!var_245_bool) //@nz
		return 0;
	if(var_244_string == var_2_object)
		return 0;
	string var_248_string; bool var_249_bool;
	var_244_string = var_248_string;
	if(var_244_string == "")
		var_249_bool = false;
	else
		var_249_bool = true;
	func_4923(var_248_string, var_249_bool);
	var_2_object = var_244_string;
	
}


// @pe
void func_5550(bool var_703_bool)
{
	int var_705_int;
	func_4994(var_705_int, "b8q02");
	if(var_705_int == 0) {
		var_703_bool = true;
		return 0;
	}
	var_703_bool = false;
}


void func_5038(int var_144_int, int var_145_int)
{
	object var_147_object;
	@CreateIntVector(var_147_object);
	var_147_object->add(var_144_int);
	var_147_object->add(var_145_int);
	@SendWorldWndMessage(3, var_147_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5562(bool var_716_bool, object var_717_object)
{
	object var_719_object;
	var_717_object = var_719_object;
	bool var_718_bool;
	func_5101(var_718_bool, var_719_object, "b8q02_book");
	if(var_718_bool != 0) {
		var_716_bool = true;
		return 0;
	}
	var_716_bool = false;
}


void func_5050(object var_131_object, int var_132_int)
{
	int var_134_int;
	object var_135_object;
	var_131_object = var_135_object;
	int var_137_int;
	func_4640(var_135_object, "money", var_137_int);
	if(var_137_int > 0) {
		@GetInvItemByName(var_134_int, "Money");
		int var_144_int; int var_145_int;
		var_134_int = var_144_int;
		var_132_int = var_145_int;
		func_5038(var_144_int, var_145_int);
	}
}


void func_3520(bool var_0_bool, int var_738_int, object var_739_object)
{
	var_0_bool = var_739_object;
	bool var_749_bool; object var_750_object;
	var_739_object = var_750_object;
	func_4682(var_749_bool, var_750_object, 70.0);
	if(!var_749_bool) { //@nz
		var_738_int = -2;
		return 8;
	}
	object var_745_object;
	@CreateDialog(var_745_object);
	int var_753_int;
	func_5204(var_753_int);
	var_745_object->SetNPCName(var_753_int);
	int var_754_int;
	func_5202(var_754_int);
	var_745_object->SetNPCDescription(var_754_int);
	string var_755_string;
	func_5206(var_755_string);
	var_745_object->SetPhoto(var_755_string);
	string var_756_string;
	func_5208(var_756_string);
	var_745_object->SetPhoto2(var_756_string);
	int var_757_int;
	func_5887(var_757_int);
	var_745_object->SetPlayerName(var_757_int);
	bool var_746_bool;
	@IsOverrideActive(var_746_bool);
	if(var_746_bool != 0) {
		var_738_int = -2;
		return 8;
	}
	@DoDialog(var_745_object);
	bool var_759_bool; object var_760_object;
	object var_761_object;
	func_4960(var_761_object);
	var_761_object = var_760_object;
	func_4769(var_759_bool, var_760_object);
	object var_762_object; object var_763_object;
	var_739_object = var_762_object;
	var_745_object = var_763_object;
	TaskCall(17);
	func_3601(var_764_object, var_765_object, var_766_string, var_767_bool, var_762_object, var_763_object);
	TaskReturn();
	bool var_748_bool;
	var_745_object->IsDialogEnd(var_748_bool);
	
	for(;;) {
		var_801_bool = !var_748_bool; //@nz
		if(var_801_bool == 0) goto Label_3590;
		@sync();
		var_745_object->IsDialogEnd(var_748_bool);
	}
	
Label_3590:
	object var_802_object;
	var_739_object = var_802_object;
	func_4751();
	@StopDialog(var_745_object);
	var_745_object->GetReturnValue(-1);
	int var_747_int = var_738_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5573(bool var_156_bool)
{
	int var_158_int;
	func_4994(var_158_int, "b11q01");
	if(var_158_int == 1000)
		var_156_bool = true;
	var_156_bool = false;
}


void func_968(bool var_0_bool, int var_397_int, object var_398_object)
{
	var_0_bool = var_398_object;
	bool var_408_bool; object var_409_object;
	var_398_object = var_409_object;
	func_4682(var_408_bool, var_409_object, 70.0);
	if(!var_408_bool) { //@nz
		var_397_int = -2;
		return 8;
	}
	object var_404_object;
	@CreateDialog(var_404_object);
	int var_412_int;
	func_5204(var_412_int);
	var_404_object->SetNPCName(var_412_int);
	int var_413_int;
	func_5202(var_413_int);
	var_404_object->SetNPCDescription(var_413_int);
	string var_414_string;
	func_5206(var_414_string);
	var_404_object->SetPhoto(var_414_string);
	string var_415_string;
	func_5208(var_415_string);
	var_404_object->SetPhoto2(var_415_string);
	int var_416_int;
	func_5887(var_416_int);
	var_404_object->SetPlayerName(var_416_int);
	bool var_405_bool;
	@IsOverrideActive(var_405_bool);
	if(var_405_bool != 0) {
		var_397_int = -2;
		return 8;
	}
	@DoDialog(var_404_object);
	bool var_418_bool; object var_419_object;
	object var_420_object;
	func_4960(var_420_object);
	var_420_object = var_419_object;
	func_4769(var_418_bool, var_419_object);
	object var_421_object; object var_422_object;
	var_398_object = var_421_object;
	var_404_object = var_422_object;
	TaskCall(7);
	func_1049(var_423_object, var_424_object, var_425_string, var_426_bool, var_421_object, var_422_object);
	TaskReturn();
	bool var_407_bool;
	var_404_object->IsDialogEnd(var_407_bool);
	
	for(;;) {
		var_483_bool = !var_407_bool; //@nz
		if(var_483_bool == 0) goto Label_1038;
		@sync();
		var_404_object->IsDialogEnd(var_407_bool);
	}
	
Label_1038:
	object var_484_object;
	var_398_object = var_484_object;
	func_4751();
	@StopDialog(var_404_object);
	var_404_object->GetReturnValue(-1);
	int var_406_int = var_397_int;
}
EMIT "Stack[-4] = 0";


void func_5069(object var_63_object, object var_64_object, int var_65_int)
{
	int var_69_int;
	var_64_object->GetItemID(var_69_int);
	int var_70_int;
	@GetInvItemProperty(var_70_int, var_69_int, "Category");
	bool var_71_bool;
	var_63_object->AddItem(var_71_bool, var_64_object, var_70_int, var_65_int);
	if(!var_71_bool) { //@nz
		var_63_object->DropItems(var_64_object, var_65_int);
	} else {
		int var_74_int; int var_75_int;
		var_69_int = var_74_int;
		var_65_int = var_75_int;
		func_5038(var_74_int, var_75_int);
	}
	
}


// @pe
void func_5585(bool var_778_bool)
{
	int var_780_int;
	func_4994(var_780_int, "oob11MladVlad1");
	if(var_780_int == 0) {
		var_778_bool = true;
		return 0;
	}
	var_778_bool = false;
}


// @pe
void func_3026(object var_2_object, string var_678_string)
{
	bool var_679_bool;
	func_5210(var_679_bool);
	if(!var_679_bool) //@nz
		return 0;
	if(var_678_string == var_2_object)
		return 0;
	string var_682_string; bool var_683_bool;
	var_678_string = var_682_string;
	if(var_678_string == "")
		var_683_bool = false;
	else
		var_683_bool = true;
	func_4923(var_682_string, var_683_bool);
	var_2_object = var_678_string;
	
}


void func_4565(void)
{
	string var_74_string;
	@GetProperty("loc", var_74_string);
	var_76_string = GlobalVars[0];
	var_74_string = var_76_string;
	GlobalVars[0] = var_76_string;
}


// @pe
void func_5597(bool var_159_bool)
{
	int var_161_int;
	func_4994(var_161_int, "KnowGrif");
	if(var_161_int == 1)
		var_159_bool = true;
	var_159_bool = false;
}


void func_4573(bool var_0_bool, object var_1_object)
{
	cvector var_95_cvector;
	@GetAnimationOffset(var_95_cvector, "all", "walk_stopl");
	cvector var_96_cvector;
	@GetAnimationOffset(var_96_cvector, "all", "walk_stopr");
	var_101_float = GetByIndex(var_95_cvector, 2);
	var_102_float = GetByIndex(var_96_cvector, 2);
	float var_105_float;
	var_107_float = GetByIndex(var_95_cvector, 2);
	func_4976(var_105_float, (var_107_float - ((var_101_float + var_102_float) / 2.0)));
	var_1_object = var_105_float + 40;
}


void func_5088(object var_58_object, string var_59_string, int var_60_int)
{
	object var_62_object;
	@CreateInvItem(var_62_object);
	var_62_object->SetItemName(var_59_string);
	object var_63_object; object var_64_object; int var_65_int;
	var_58_object = var_63_object;
	var_62_object = var_64_object;
	var_60_int = var_65_int;
	func_5069(var_63_object, var_64_object, var_65_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_481(object var_2_object, string var_338_string)
{
	bool var_339_bool;
	func_5210(var_339_bool);
	if(!var_339_bool) //@nz
		return 0;
	if(var_338_string == var_2_object)
		return 0;
	string var_342_string; bool var_343_bool;
	var_338_string = var_342_string;
	if(var_338_string == "")
		var_343_bool = false;
	else
		var_343_bool = true;
	func_4923(var_342_string, var_343_bool);
	var_2_object = var_338_string;
	
}


// @pe
void func_5609(bool var_330_bool)
{
	int var_332_int;
	func_4994(var_332_int, "b1q01");
	if(var_332_int == 0) {
		var_330_bool = true;
		return 0;
	}
	var_330_bool = false;
}


void func_5101(bool var_718_bool, object var_719_object, string var_720_string)
{
	int var_723_int;
	@GetInvItemByName(var_723_int, var_720_string);
	bool var_724_bool;
	var_719_object->HasItem(var_723_int, var_724_bool);
	var_724_bool = var_718_bool;
}


void func_5108(bool var_437_bool, string var_438_string, string var_439_string)
{
	object var_441_object;
	@FindActor(var_441_object, var_438_string);
	if(var_441_object == null)
		var_437_bool = false;
	@Trigger(var_441_object, var_439_string);
	var_437_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5621(bool var_361_bool)
{
	int var_363_int;
	func_4994(var_363_int, "oob1MladVlad1");
	if(var_363_int == 0) {
		var_361_bool = true;
		return 0;
	}
	var_361_bool = false;
}


// @pe
void func_4089(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_832_object, object var_833_object)
{
	var_0_bool = var_833_object;
	var_1_object = var_832_object;
	var_3_object = false;
	if(1 != 0) {
		func_4152(var_833_object, "Neutral");
		var_0_bool->SetMessage(535231); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535232, 36953, 36907); //@t
		var_0_bool->AddReply(535233, -1, 36908); //@t
		var_0_bool->AddReply(535280, -1, 36956); //@t
		goto Label_4122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xffd";
	}
Label_4122:
	bool var_857_bool;
	func_5210(var_857_bool);
	if(var_857_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4907(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4151:
		return 0;

	}
	
}


