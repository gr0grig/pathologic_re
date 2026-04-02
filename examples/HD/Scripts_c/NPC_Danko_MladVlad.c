// @GLOBALS: 0:string:,1:object:,2:bool:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		var_0_bool = true;
		func_145();
		func_10500();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, float var_72_float, float var_73_float, int var_74_int)
	{
		bool var_76_bool;
		@IsOverrideActive(var_76_bool);
		if(!var_76_bool) { //@nz
			func_145();
			disable OnUse;
			bool var_78_bool; object var_79_object;
			var_74_int = var_79_object;
			func_9948(var_78_bool, var_79_object);
			enable OnUse;
			object var_92_object;
			var_74_int = var_92_object;
			func_12329(var_92_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, float var_72_float, float var_73_float, int var_74_int, object var_75_object, object var_76_object, object var_96_object)
		{
		bool var_98_bool;
		@IsPlayerActor(var_96_object, var_98_bool);
		if(var_98_bool != 0) {
			func_145();
			object var_100_object;
			var_96_object = var_100_object;
			TaskCall(2);
			func_148(var_100_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, float var_72_float, float var_73_float, int var_74_int)
	{
		object var_76_object;
		if(var_74_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_74_int == 21)) goto Label_144;
			if(true == 0) goto Label_144;
			@FindActor(var_76_object, "player");
			bool var_84_bool = false;
			if(var_76_object != 0) {
				float var_86_float; object var_87_object;
				var_76_object = var_87_object;
				func_9889(var_86_float, var_87_object);
				if(var_86_float <= 62500.0)
					var_84_bool = true;
			}
			if(var_84_bool != 0) {
				object var_96_object;
				var_76_object = var_96_object;
				func_89();
			}
			var_76_object = null;
		}
	Label_144:
	
	}

}


task task_2
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		func_193();
		func_10500();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, float var_72_float, float var_73_float, int var_74_int)
	{
		bool var_76_bool;
		@IsOverrideActive(var_76_bool);
		if(!var_76_bool) { //@nz
			func_193();
			disable OnUse;
			bool var_78_bool; object var_79_object;
			var_74_int = var_79_object;
			func_9948(var_78_bool, var_79_object);
			enable OnUse;
			object var_92_object;
			var_74_int = var_92_object;
			func_12329(var_92_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		func_10500();
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_74_float == 484) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_11245();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10765();
				func_426(var_75_int, "Neutral");
				var_0_bool->SetMessage(500416); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533500, 35031, 35030); //@t
				return 0;
			}
			if(var_74_float == 35031) {
				func_426(var_75_int, "Neutral");
				var_0_bool->SetMessage(533501); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500417, 487, 485); //@t
				var_0_bool->AddReply(500418, 9271, 486); //@t
				return 0;
			}
			if(var_74_float == 487) {
				func_426(var_75_int, "Neutral");
				var_0_bool->SetMessage(500419); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500420, 9271, 488); //@t
				var_0_bool->AddReply(500422, 9271, 490); //@t
				return 0;
			}
			if(var_74_float == 9271) {
				func_426(var_75_int, "Neutral");
				var_0_bool->SetMessage(508445); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(508446, -1, 9275); //@t
				var_0_bool->AddReply(508447, -1, 9276); //@t
				return 0;
			}
			var_3_object = true;
			bool var_139_bool;
			func_10509(var_139_bool);
			if(var_139_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c1";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 8297) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10777();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10605();
				object var_88_object = var_1_object;
				func_10511(var_0_bool);
			}
			if(var_75_int == 8298) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_bool;
				func_10777();
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_bool;
				func_10605();
				object var_115_object = var_1_object;
				func_10511(var_0_bool);
			}
			if(var_75_int == 8553) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_bool;
				func_10777();
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_bool;
				func_10605();
				object var_123_object = var_1_object;
				func_10511(var_0_bool);
			}
			if(var_75_int == 35526) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_bool;
				func_10771();
			}
			if(var_74_float == 7635) {
				func_727(var_75_int, "Neutral");
				var_0_bool->SetMessage(506929); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_151_bool = false;
				bool var_152_bool;
				func_11480(var_1_object);
				if(var_152_bool != 0) {
					bool var_160_bool;
					func_11456(var_1_object);
					if(var_160_bool != 0)
						var_151_bool = true;
				}
				if(var_151_bool != 0)
					var_0_bool->AddReply(506930, 7637, 7636); //@t
				bool var_169_bool;
				func_11468(var_1_object);
				if(var_169_bool != 0)
					var_0_bool->AddReply(533959, 10443, 35526); //@t
				var_0_bool->AddReply(507746, -1, 8547); //@t
				return 0;
			}
			if(var_74_float == 10443) {
				func_727(var_75_int, "Neutral");
				var_0_bool->SetMessage(509500); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509501, 10445, 10444); //@t
				var_0_bool->AddReply(509514, 10458, 10457); //@t
				return 0;
			}
			if(var_74_float == 10458) {
				func_727(var_75_int, "Neutral");
				var_0_bool->SetMessage(509515); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509516, 10445, 10459); //@t
				return 0;
			}
			if(var_74_float == 10445) {
				func_727(var_75_int, "Fear");
				var_0_bool->SetMessage(509502); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509503, 10447, 10446); //@t
				var_0_bool->AddReply(509510, -1, 10453); //@t
				var_0_bool->AddReply(509511, 10455, 10454); //@t
				return 0;
			}
			if(var_74_float == 10455) {
				func_727(var_75_int, "Neutral");
				var_0_bool->SetMessage(509512); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509513, -1, 10456); //@t
				return 0;
			}
			if(var_74_float == 10447) {
				func_727(var_75_int, "Fear");
				var_0_bool->SetMessage(509504); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509505, 10449, 10448); //@t
				var_0_bool->AddReply(509509, -1, 10452); //@t
				return 0;
			}
			if(var_74_float == 10449) {
				func_727(var_75_int, "Fear");
				var_0_bool->SetMessage(509506); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509507, -1, 10450); //@t
				var_0_bool->AddReply(509508, -1, 10451); //@t
				return 0;
			}
			if(var_74_float == 7637) {
				func_727(var_75_int, "Untrust");
				var_0_bool->SetMessage(506931); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506932, 7639, 7638); //@t
				var_0_bool->AddReply(507752, -1, 8553); //@t
				return 0;
			}
			if(var_74_float == 7639) {
				func_727(var_75_int, "Untrust");
				var_0_bool->SetMessage(506933); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507753, 8555, 8554); //@t
				return 0;
			}
			if(var_74_float == 8555) {
				func_727(var_75_int, "Untrust");
				var_0_bool->SetMessage(507754); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506934, 8296, 7640); //@t
				return 0;
			}
			if(var_74_float == 8296) {
				func_727(var_75_int, "Sly");
				var_0_bool->SetMessage(507515); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507516, -1, 8297); //@t
				var_0_bool->AddReply(507517, -1, 8298); //@t
				return 0;
			}
			var_3_object = true;
			bool var_272_bool;
			func_10509(var_272_bool);
			if(var_272_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2ee";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 11259) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10863();
			}
			if(var_75_int == 35907) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_bool;
				func_10869();
			}
			if(var_75_int == 35908) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_bool;
				func_10869();
			}
			if(var_75_int == 11358) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_bool;
				func_10549();
			}
			if(var_75_int == 11394) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_bool;
				func_10731();
			}
			if(var_75_int == 11404) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_bool;
				func_10892();
				object var_165_object = var_1_object;
				func_10700(var_0_bool);
			}
			if(var_75_int == 11407) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_bool;
				func_10892();
				object var_195_object = var_1_object;
				func_10700(var_0_bool);
			}
			if(var_75_int == 22116) {
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_bool;
				func_10531();
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_bool;
				func_10815();
				object var_216_object = var_1_object;
				func_10542(var_0_bool);
			}
			if(var_74_float == 11258) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(510212); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_256_bool = false;
				bool var_257_bool;
				func_11504(var_1_object);
				if(var_257_bool != 0) {
					bool var_265_bool;
					func_11516(var_1_object);
					if(var_265_bool != 0)
						var_256_bool = true;
				}
				if(var_256_bool != 0)
					var_0_bool->AddReply(510213, 11260, 11259); //@t
				bool var_274_bool = false;
				bool var_275_bool;
				func_11312(var_1_object);
				if(var_275_bool != 0) {
					bool var_281_bool;
					func_11492(var_1_object);
					if(!var_281_bool) //@nz
						var_274_bool = true;
				}
				if(var_274_bool != 0)
					var_0_bool->AddReply(510302, 11359, 11358); //@t
				bool var_291_bool = true;
				bool var_292_bool = false;
				bool var_293_bool;
				func_11528(var_1_object);
				if(var_293_bool != 0) {
					bool var_299_bool;
					func_11444(var_1_object);
					if(var_299_bool != 0)
						var_292_bool = true;
				}
				if(var_292_bool != 1) {
					bool var_305_bool = false;
					bool var_306_bool;
					func_11540(var_1_object);
					if(var_306_bool != 0) {
						bool var_312_bool;
						func_11444(var_1_object);
						if(var_312_bool != 0)
							var_305_bool = true;
					}
					if(var_305_bool != 1)
						var_291_bool = false;
				}
				if(var_291_bool != 0)
					var_0_bool->AddReply(510334, 11395, 11394); //@t
				bool var_317_bool;
				func_11922(var_317_bool, var_1_object);
				if(!var_317_bool) //@nz
					var_0_bool->AddReply(520897, 22115, 22114); //@t
				var_0_bool->AddReply(520896, -1, 22113); //@t
				return 0;
			}
			if(var_74_float == 22115) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(520898); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_340_bool;
				func_11932(var_340_bool, var_1_object);
				if(var_340_bool != 0)
					var_0_bool->AddReply(520899, -1, 22116); //@t
				var_0_bool->AddReply(520900, -1, 22117); //@t
				return 0;
			}
			if(var_74_float == 11395) {
				func_1313(var_75_int, "Fear");
				var_0_bool->SetMessage(510335); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510336, 11399, 11396); //@t
				var_0_bool->AddReply(510337, 11398, 11397); //@t
				return 0;
			}
			if(var_74_float == 11398) {
				func_1313(var_75_int, "Fear");
				var_0_bool->SetMessage(510338); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510341, 11402, 11401); //@t
				return 0;
			}
			if(var_74_float == 11399) {
				func_1313(var_75_int, "Fear");
				var_0_bool->SetMessage(510339); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510340, 11402, 11400); //@t
				var_0_bool->AddReply(534414, 36040, 36039); //@t
				return 0;
			}
			if(var_74_float == 36040) {
				func_1313(var_75_int, "Fear");
				var_0_bool->SetMessage(534415); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534416, 11402, 36041); //@t
				return 0;
			}
			if(var_74_float == 11402) {
				func_1313(var_75_int, "Sly");
				var_0_bool->SetMessage(510342); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510343, -1, 11404); //@t
				var_0_bool->AddReply(510344, 11406, 11405); //@t
				return 0;
			}
			if(var_74_float == 11406) {
				func_1313(var_75_int, "Sly");
				var_0_bool->SetMessage(510345); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510346, -1, 11407); //@t
				return 0;
			}
			if(var_74_float == 11359) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(510303); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510304, 11039, 11360); //@t
				return 0;
			}
			if(var_74_float == 11039) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(510017); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510018, 11041, 11040); //@t
				var_0_bool->AddReply(510028, -1, 11050); //@t
				return 0;
			}
			if(var_74_float == 11041) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(510019); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510020, 11043, 11042); //@t
				var_0_bool->AddReply(510027, -1, 11049); //@t
				return 0;
			}
			if(var_74_float == 11043) {
				func_1313(var_75_int, "Untrust");
				var_0_bool->SetMessage(510021); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510022, 11045, 11044); //@t
				var_0_bool->AddReply(510026, -1, 11048); //@t
				return 0;
			}
			if(var_74_float == 11045) {
				func_1313(var_75_int, "Untrust");
				var_0_bool->SetMessage(510023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510024, -1, 11046); //@t
				var_0_bool->AddReply(510025, -1, 11047); //@t
				return 0;
			}
			if(var_74_float == 11260) {
				func_1313(var_75_int, "Untrust");
				var_0_bool->SetMessage(510214); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510305, 11364, 11361); //@t
				var_0_bool->AddReply(510306, 11363, 11362); //@t
				return 0;
			}
			if(var_74_float == 11363) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(510307); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534368, 11364, 35974); //@t
				var_0_bool->AddReply(534369, 11366, 35975); //@t
				return 0;
			}
			if(var_74_float == 11364) {
				func_1313(var_75_int, "Untrust");
				var_0_bool->SetMessage(510308); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510309, 11370, 11365); //@t
				var_0_bool->AddReply(510311, 11366, 11367); //@t
				return 0;
			}
			if(var_74_float == 11366) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(510310); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510312, 35894, 11369); //@t
				var_0_bool->AddReply(534370, 11371, 35978); //@t
				return 0;
			}
			if(var_74_float == 11370) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(510313); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510315, 11371, 11372); //@t
				return 0;
			}
			if(var_74_float == 11371) {
				func_1313(var_75_int, "Sly");
				var_0_bool->SetMessage(510314); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510317, 35894, 11375); //@t
				var_0_bool->AddReply(510323, 35894, 11381); //@t
				return 0;
			}
			if(var_74_float == 35894) {
				func_1313(var_75_int, "Sly");
				var_0_bool->SetMessage(534299); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534300, 35896, 35895); //@t
				var_0_bool->AddReply(534317, 35914, 35913); //@t
				return 0;
			}
			if(var_74_float == 35914) {
				func_1313(var_75_int, "Untrust");
				var_0_bool->SetMessage(534318); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534319, 35902, 35915); //@t
				return 0;
			}
			if(var_74_float == 35896) {
				func_1313(var_75_int, "Rage");
				var_0_bool->SetMessage(534301); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534413, 35902, 36037); //@t
				var_0_bool->AddReply(534302, 35898, 35897); //@t
				return 0;
			}
			if(var_74_float == 35898) {
				func_1313(var_75_int, "Rage");
				var_0_bool->SetMessage(534303); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534304, 35900, 35899); //@t
				return 0;
			}
			if(var_74_float == 35900) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(534305); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534306, 35902, 35901); //@t
				return 0;
			}
			if(var_74_float == 35902) {
				func_1313(var_75_int, "Rage");
				var_0_bool->SetMessage(534307); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534308, 35904, 35903); //@t
				var_0_bool->AddReply(534314, 35910, 35909); //@t
				return 0;
			}
			if(var_74_float == 35910) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(534315); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534316, 35906, 35911); //@t
				return 0;
			}
			if(var_74_float == 35904) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(534309); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534310, 35906, 35905); //@t
				return 0;
			}
			if(var_74_float == 35906) {
				func_1313(var_75_int, "Neutral");
				var_0_bool->SetMessage(534311); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534312, -1, 35907); //@t
				var_0_bool->AddReply(534313, -1, 35908); //@t
				return 0;
			}
			var_3_object = true;
			bool var_584_bool;
			func_10509(var_584_bool);
			if(var_584_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x538";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 12610) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10960();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10966();
				object var_151_object = var_1_object;
				func_10799(var_0_bool);
			}
			if(var_75_int == 12613) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_bool;
				func_10960();
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_bool;
				func_10966();
				object var_183_object = var_1_object;
				func_10799(var_0_bool);
			}
			if(var_75_int == 11955) {
				object var_187_object; object var_188_object;
				var_187_object = var_1_object;
				var_188_object = var_0_bool;
				func_10911();
			}
			if(var_75_int == 12243) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_bool;
				func_10917();
				object var_213_object; object var_214_object;
				var_213_object = var_1_object;
				var_214_object = var_0_bool;
				func_10940();
				object var_225_object = var_1_object;
				func_10837(var_0_bool);
			}
			if(var_75_int == 12244) {
				object var_234_object; object var_235_object;
				var_234_object = var_1_object;
				var_235_object = var_0_bool;
				func_10917();
				object var_236_object; object var_237_object;
				var_236_object = var_1_object;
				var_237_object = var_0_bool;
				func_10940();
				object var_238_object = var_1_object;
				func_10837(var_0_bool);
			}
			if(var_75_int == 13075) {
				object var_242_object; object var_243_object;
				var_242_object = var_1_object;
				var_243_object = var_0_bool;
				func_11010();
			}
			if(var_75_int == 37888) {
				object var_248_object = var_1_object;
				func_10853(var_0_bool);
				object var_269_object; object var_270_object;
				var_269_object = var_1_object;
				var_270_object = var_0_bool;
				func_10605();
				object var_273_object = var_1_object;
				func_10754(var_0_bool);
			}
			if(var_75_int == 13077) {
				object var_296_object = var_1_object;
				func_10853(var_0_bool);
				object var_298_object; object var_299_object;
				var_298_object = var_1_object;
				var_299_object = var_0_bool;
				func_10605();
				object var_300_object = var_1_object;
				func_10754(var_0_bool);
			}
			if(var_75_int == 22120) {
				object var_304_object; object var_305_object;
				var_304_object = var_1_object;
				var_305_object = var_0_bool;
				func_10815();
				object var_308_object; object var_309_object;
				var_308_object = var_1_object;
				var_309_object = var_0_bool;
				func_10531();
				object var_321_object = var_1_object;
				func_10542(var_0_bool);
			}
			if(var_74_float == 12592) {
				bool var_327_bool = false;
				bool var_328_bool;
				func_11576(var_1_object);
				if(var_328_bool != 0) {
					bool var_336_bool;
					func_11552(var_1_object);
					if(!var_336_bool) //@nz
						var_327_bool = true;
				}
				if(var_327_bool != 0) {
					object var_343_object; object var_344_object;
					var_343_object = var_1_object;
					var_344_object = var_0_bool;
					func_10659();
					func_2337(var_75_int, "Neutral");
					var_0_bool->SetMessage(511395); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(511396, 12594, 12593); //@t
					return 0;
				}
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(510814); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_370_bool = false;
				bool var_371_bool;
				func_11564(var_1_object);
				if(var_371_bool != 0) {
					bool var_377_bool;
					func_11552(var_1_object);
					if(var_377_bool != 0)
						var_370_bool = true;
				}
				if(var_370_bool != 0)
					var_0_bool->AddReply(510815, 11956, 11955); //@t
				bool var_382_bool = false;
				bool var_383_bool;
				func_11600(var_1_object);
				if(var_383_bool != 0) {
					bool var_389_bool;
					func_11588(var_1_object);
					if(var_389_bool != 0)
						var_382_bool = true;
				}
				if(var_382_bool != 0)
					var_0_bool->AddReply(511862, 37886, 13075); //@t
				bool var_398_bool;
				func_11922(var_398_bool, var_1_object);
				if(!var_398_bool) //@nz
					var_0_bool->AddReply(520901, 22119, 22118); //@t
				var_0_bool->AddReply(511408, -1, 12605); //@t
				return 0;
			}
			if(var_74_float == 22119) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(520902); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_421_bool;
				func_11932(var_421_bool, var_1_object);
				if(var_421_bool != 0)
					var_0_bool->AddReply(520903, -1, 22120); //@t
				var_0_bool->AddReply(520904, -1, 22121); //@t
				return 0;
			}
			if(var_74_float == 37886) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(536127); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536128, 13076, 37887); //@t
				var_0_bool->AddReply(511864, -1, 13077); //@t
				return 0;
			}
			if(var_74_float == 13076) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511863); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536129, -1, 37888); //@t
				return 0;
			}
			if(var_74_float == 11956) {
				func_2337(var_75_int, "Rage");
				var_0_bool->SetMessage(510816); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510817, 11958, 11957); //@t
				var_0_bool->AddReply(511019, 12191, 12190); //@t
				return 0;
			}
			if(var_74_float == 12191) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511020); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511021, 12193, 12192); //@t
				return 0;
			}
			if(var_74_float == 12193) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511022); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511023, 12202, 12194); //@t
				var_0_bool->AddReply(511024, 12196, 12195); //@t
				return 0;
			}
			if(var_74_float == 12196) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511025); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511026, 12198, 12197); //@t
				return 0;
			}
			if(var_74_float == 12198) {
				func_2337(var_75_int, "Fear");
				var_0_bool->SetMessage(511027); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511029, 12202, 12201); //@t
				return 0;
			}
			if(var_74_float == 12202) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511030); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511031, 12205, 12203); //@t
				var_0_bool->AddReply(511032, 12205, 12204); //@t
				return 0;
			}
			if(var_74_float == 12205) {
				func_2337(var_75_int, "Untrust");
				var_0_bool->SetMessage(511033); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511034, 12208, 12207); //@t
				var_0_bool->AddReply(511037, 12211, 12210); //@t
				return 0;
			}
			if(var_74_float == 12211) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511038); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511039, 12213, 12212); //@t
				var_0_bool->AddReply(511054, 12222, 12231); //@t
				return 0;
			}
			if(var_74_float == 12213) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511040); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511041, 12215, 12214); //@t
				return 0;
			}
			if(var_74_float == 12215) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511042); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511043, 12222, 12216); //@t
				return 0;
			}
			if(var_74_float == 12208) {
				func_2337(var_75_int, "Sly");
				var_0_bool->SetMessage(511035); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511036, 12217, 12209); //@t
				return 0;
			}
			if(var_74_float == 12217) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511044); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511045, 12222, 12218); //@t
				var_0_bool->AddReply(511046, 12220, 12219); //@t
				return 0;
			}
			if(var_74_float == 12220) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511047); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511048, 12222, 12221); //@t
				return 0;
			}
			if(var_74_float == 11958) {
				func_2337(var_75_int, "Rage");
				var_0_bool->SetMessage(510818); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510819, 12222, 11959); //@t
				var_0_bool->AddReply(510830, 11971, 11970); //@t
				return 0;
			}
			if(var_74_float == 11971) {
				func_2337(var_75_int, "Rage");
				var_0_bool->SetMessage(510831); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510832, 12222, 11972); //@t
				var_0_bool->AddReply(510833, 12227, 11974); //@t
				return 0;
			}
			if(var_74_float == 12227) {
				func_2337(var_75_int, "Sly");
				var_0_bool->SetMessage(511052); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511053, 12198, 12228); //@t
				return 0;
			}
			if(var_74_float == 12222) {
				func_2337(var_75_int, "Rage");
				var_0_bool->SetMessage(511049); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511050, 12233, 12223); //@t
				var_0_bool->AddReply(511051, 12233, 12224); //@t
				var_0_bool->AddReply(511059, 12240, 12239); //@t
				return 0;
			}
			if(var_74_float == 12240) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(511060); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511061, 12233, 12241); //@t
				return 0;
			}
			if(var_74_float == 12233) {
				func_2337(var_75_int, "Rage");
				var_0_bool->SetMessage(511055); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511056, 12237, 12235); //@t
				var_0_bool->AddReply(511057, 12237, 12236); //@t
				return 0;
			}
			if(var_74_float == 12237) {
				func_2337(var_75_int, "Sly");
				var_0_bool->SetMessage(511058); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511062, -1, 12243); //@t
				var_0_bool->AddReply(511063, -1, 12244); //@t
				return 0;
			}
			if(var_74_float == 12594) {
				func_2337(var_75_int, "Sly");
				var_0_bool->SetMessage(511397); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511398, 12596, 12595); //@t
				return 0;
			}
			if(var_74_float == 12596) {
				func_2337(var_75_int, "Fear");
				var_0_bool->SetMessage(511399); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511400, 12598, 12597); //@t
				var_0_bool->AddReply(536121, 37879, 37878); //@t
				return 0;
			}
			if(var_74_float == 37879) {
				func_2337(var_75_int, "Untrust");
				var_0_bool->SetMessage(536122); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538494, 40382, 40381); //@t
				var_0_bool->AddReply(538496, 12607, 40383); //@t
				return 0;
			}
			if(var_74_float == 40382) {
				func_2337(var_75_int, "Untrust");
				var_0_bool->SetMessage(538495); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536123, 12607, 37880); //@t
				return 0;
			}
			if(var_74_float == 12598) {
				func_2337(var_75_int, "Fear");
				var_0_bool->SetMessage(511401); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511409, 12607, 12606); //@t
				var_0_bool->AddReply(538497, 12607, 40384); //@t
				return 0;
			}
			if(var_74_float == 12607) {
				func_2337(var_75_int, "Untrust");
				var_0_bool->SetMessage(511410); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511411, 12609, 12608); //@t
				var_0_bool->AddReply(536124, 37884, 37882); //@t
				return 0;
			}
			if(var_74_float == 12609) {
				func_2337(var_75_int, "Sly");
				var_0_bool->SetMessage(511412); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536125, 37884, 37883); //@t
				return 0;
			}
			if(var_74_float == 37884) {
				func_2337(var_75_int, "Sly");
				var_0_bool->SetMessage(536126); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511413, -1, 12610); //@t
				var_0_bool->AddReply(511414, 12612, 12611); //@t
				return 0;
			}
			if(var_74_float == 12612) {
				func_2337(var_75_int, "Sly");
				var_0_bool->SetMessage(511415); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511416, -1, 12613); //@t
				return 0;
			}
			var_3_object = true;
			bool var_706_bool;
			func_10509(var_706_bool);
			if(var_706_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x938";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 12969) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_11251();
			}
			if(var_75_int == 12970) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_bool;
				func_11251();
			}
			if(var_75_int == 13743) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_bool;
				func_11097();
			}
			if(var_75_int == 13745) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_bool;
				func_10605();
				object var_167_object = var_1_object;
				func_10521(var_0_bool);
			}
			if(var_75_int == 13746) {
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_bool;
				func_11103();
			}
			if(var_75_int == 13748) {
				object var_196_object = var_1_object;
				func_11090(var_0_bool);
				object var_236_object; object var_237_object;
				var_236_object = var_1_object;
				var_237_object = var_0_bool;
				func_11109();
			}
			if(var_75_int == 22124) {
				object var_240_object; object var_241_object;
				var_240_object = var_1_object;
				var_241_object = var_0_bool;
				func_10531();
				object var_253_object = var_1_object;
				func_10542(var_0_bool);
				object var_257_object; object var_258_object;
				var_257_object = var_1_object;
				var_258_object = var_0_bool;
				func_10815();
			}
			if(var_74_float == 12947) {
				bool var_263_bool = false;
				bool var_264_bool = false;
				bool var_265_bool;
				func_11732(var_1_object);
				if(var_265_bool != 0) {
					bool var_271_bool;
					func_11672(var_1_object);
					if(!var_271_bool) //@nz
						var_264_bool = true;
				}
				if(var_264_bool != 0) {
					bool var_278_bool;
					func_11684(var_1_object);
					if(!var_278_bool) //@nz
						var_263_bool = true;
				}
				if(var_263_bool != 0) {
					object var_285_object; object var_286_object;
					var_285_object = var_1_object;
					var_286_object = var_0_bool;
					func_11111();
					func_3542(var_75_int, "Rage");
					var_0_bool->SetMessage(511741); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(511743, 12951, 12949); //@t
					var_0_bool->AddReply(511742, 12950, 12948); //@t
					bool var_313_bool;
					func_11660(var_1_object);
					if(!var_313_bool) //@nz
						var_0_bool->AddReply(512586, 13766, 13753); //@t
					return 0;
				}
				func_3542(var_75_int, "Neutral");
				var_0_bool->SetMessage(512573); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_325_bool = false;
				bool var_326_bool;
				func_11696(var_1_object);
				if(var_326_bool != 0) {
					bool var_332_bool;
					func_11708(var_1_object);
					if(var_332_bool != 0)
						var_325_bool = true;
				}
				if(var_325_bool != 0)
					var_0_bool->AddReply(512574, 13744, 13743); //@t
				bool var_341_bool = false;
				bool var_342_bool;
				func_11672(var_1_object);
				if(var_342_bool != 0) {
					bool var_344_bool;
					func_11720(var_1_object);
					if(var_344_bool != 0)
						var_341_bool = true;
				}
				if(var_341_bool != 0)
					var_0_bool->AddReply(512577, 13747, 13746); //@t
				bool var_353_bool;
				func_11922(var_353_bool, var_1_object);
				if(!var_353_bool) //@nz
					var_0_bool->AddReply(520905, 22123, 22122); //@t
				var_0_bool->AddReply(512580, -1, 13749); //@t
				return 0;
			}
			if(var_74_float == 22123) {
				func_3542(var_75_int, "Neutral");
				var_0_bool->SetMessage(520906); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_376_bool;
				func_11932(var_376_bool, var_1_object);
				if(var_376_bool != 0)
					var_0_bool->AddReply(520907, -1, 22124); //@t
				var_0_bool->AddReply(520908, -1, 22125); //@t
				return 0;
			}
			if(var_74_float == 13747) {
				func_3542(var_75_int, "Neutral");
				var_0_bool->SetMessage(512578); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512598, 13770, 13769); //@t
				var_0_bool->AddReply(512603, 13772, 13775); //@t
				return 0;
			}
			if(var_74_float == 13770) {
				func_3542(var_75_int, "Rage");
				var_0_bool->SetMessage(512599); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512600, 13772, 13771); //@t
				var_0_bool->AddReply(512602, 13772, 13773); //@t
				return 0;
			}
			if(var_74_float == 13772) {
				func_3542(var_75_int, "Rage");
				var_0_bool->SetMessage(512601); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512579, -1, 13748); //@t
				return 0;
			}
			if(var_74_float == 13744) {
				func_3542(var_75_int, "Neutral");
				var_0_bool->SetMessage(512575); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512576, -1, 13745); //@t
				var_0_bool->AddReply(515778, 16850, 16849); //@t
				return 0;
			}
			if(var_74_float == 16850) {
				func_3542(var_75_int, "Neutral");
				var_0_bool->SetMessage(515779); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515780, -1, 16851); //@t
				return 0;
			}
			if(var_74_float == 13766) {
				func_3542(var_75_int, "Neutral");
				var_0_bool->SetMessage(512596); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512597, 12960, 13767); //@t
				return 0;
			}
			if(var_74_float == 12950) {
				func_3542(var_75_int, "Sly");
				var_0_bool->SetMessage(511744); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511746, 12954, 12952); //@t
				return 0;
			}
			if(var_74_float == 12954) {
				func_3542(var_75_int, "Neutral");
				var_0_bool->SetMessage(511748); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511749, 12951, 12955); //@t
				return 0;
			}
			if(var_74_float == 12951) {
				func_3542(var_75_int, "Rage");
				var_0_bool->SetMessage(511745); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511747, 12957, 12953); //@t
				return 0;
			}
			if(var_74_float == 12957) {
				func_3542(var_75_int, "Rage");
				var_0_bool->SetMessage(511750); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511751, 12960, 12958); //@t
				var_0_bool->AddReply(511752, -1, 12959); //@t
				return 0;
			}
			if(var_74_float == 12960) {
				func_3542(var_75_int, "Sly");
				var_0_bool->SetMessage(511753); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511754, 12964, 12962); //@t
				var_0_bool->AddReply(515777, -1, 16848); //@t
				return 0;
			}
			if(var_74_float == 12964) {
				func_3542(var_75_int, "Sly");
				var_0_bool->SetMessage(511756); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511761, -1, 12969); //@t
				var_0_bool->AddReply(511762, -1, 12970); //@t
				return 0;
			}
			var_3_object = true;
			bool var_492_bool;
			func_10509(var_492_bool);
			if(var_492_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xded";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 13670) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_11056();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_11016();
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_bool;
				func_11068();
			}
			if(var_75_int == 13671) {
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_bool;
				func_11056();
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_bool;
				func_11068();
			}
			if(var_75_int == 13692) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_bool;
				func_11016();
			}
			if(var_75_int == 13686) {
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_bool;
				func_11062();
			}
			if(var_75_int == 13689) {
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_bool;
				func_10605();
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_bool;
				func_11117();
				object var_201_object = var_1_object;
				func_10595(var_0_bool);
			}
			if(var_75_int == 37901) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_bool;
				func_11117();
				object var_226_object = var_1_object;
				func_10595(var_0_bool);
				object var_228_object; object var_229_object;
				var_228_object = var_1_object;
				var_229_object = var_0_bool;
				func_10605();
			}
			if(var_75_int == 13696) {
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_bool;
				func_11074();
			}
			if(var_75_int == 13698) {
				object var_238_object; object var_239_object;
				var_238_object = var_1_object;
				var_239_object = var_0_bool;
				func_11080();
			}
			if(var_75_int == 37902) {
				object var_253_object; object var_254_object;
				var_253_object = var_1_object;
				var_254_object = var_0_bool;
				func_11080();
			}
			if(var_75_int == 22128) {
				object var_257_object; object var_258_object;
				var_257_object = var_1_object;
				var_258_object = var_0_bool;
				func_10815();
				object var_261_object = var_1_object;
				func_10542(var_0_bool);
				object var_265_object; object var_266_object;
				var_265_object = var_1_object;
				var_266_object = var_0_bool;
				func_10531();
			}
			if(var_74_float == 13330) {
				bool var_280_bool;
				func_11624(var_1_object);
				if(var_280_bool != 0) {
					func_4289(var_75_int, "Fear");
					var_0_bool->SetMessage(512104); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(512105, 13334, 13331); //@t
					var_0_bool->AddReply(512106, 13333, 13332); //@t
					return 0;
				}
				func_4289(var_75_int, "Neutral");
				var_0_bool->SetMessage(512515); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_314_bool;
				func_11612(var_1_object);
				if(var_314_bool != 0)
					var_0_bool->AddReply(512520, 13691, 13690); //@t
				bool var_323_bool = false;
				bool var_324_bool;
				func_11636(var_1_object);
				if(var_324_bool != 0) {
					bool var_330_bool;
					func_11744(var_1_object);
					if(var_330_bool != 0)
						var_323_bool = true;
				}
				if(var_323_bool != 0)
					var_0_bool->AddReply(512516, 13688, 13686); //@t
				bool var_339_bool = false;
				bool var_340_bool = false;
				bool var_341_bool;
				func_11648(var_1_object);
				if(var_341_bool != 0) {
					bool var_347_bool;
					func_11756(var_1_object);
					if(var_347_bool != 0)
						var_340_bool = true;
				}
				if(var_340_bool != 0) {
					bool var_353_bool;
					func_11744(var_1_object);
					if(!var_353_bool) //@nz
						var_339_bool = true;
				}
				if(var_339_bool != 0)
					var_0_bool->AddReply(512526, 13697, 13696); //@t
				bool var_359_bool;
				func_11922(var_359_bool, var_1_object);
				if(!var_359_bool) //@nz
					var_0_bool->AddReply(520909, 22127, 22126); //@t
				var_0_bool->AddReply(512517, -1, 13687); //@t
				return 0;
			}
			if(var_74_float == 22127) {
				func_4289(var_75_int, "Neutral");
				var_0_bool->SetMessage(520910); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_382_bool;
				func_11932(var_382_bool, var_1_object);
				if(var_382_bool != 0)
					var_0_bool->AddReply(520911, -1, 22128); //@t
				var_0_bool->AddReply(520912, -1, 22129); //@t
				return 0;
			}
			if(var_74_float == 13697) {
				func_4289(var_75_int, "Neutral");
				var_0_bool->SetMessage(512527); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512528, -1, 13698); //@t
				var_0_bool->AddReply(536143, -1, 37902); //@t
				return 0;
			}
			if(var_74_float == 13688) {
				func_4289(var_75_int, "Neutral");
				var_0_bool->SetMessage(512518); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512519, -1, 13689); //@t
				var_0_bool->AddReply(536142, -1, 37901); //@t
				return 0;
			}
			if(var_74_float == 13691) {
				func_4289(var_75_int, "Neutral");
				var_0_bool->SetMessage(512521); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512522, -1, 13692); //@t
				return 0;
			}
			if(var_74_float == 13333) {
				func_4289(var_75_int, "Neutral");
				var_0_bool->SetMessage(512107); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512493, 13334, 13662); //@t
				return 0;
			}
			if(var_74_float == 13334) {
				func_4289(var_75_int, "Neutral");
				var_0_bool->SetMessage(512108); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512109, 13336, 13335); //@t
				var_0_bool->AddReply(541861, 13667, 44088); //@t
				return 0;
			}
			if(var_74_float == 13336) {
				func_4289(var_75_int, "Sly");
				var_0_bool->SetMessage(512110); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512111, 13338, 13337); //@t
				var_0_bool->AddReply(541862, 13667, 44090); //@t
				return 0;
			}
			if(var_74_float == 13338) {
				func_4289(var_75_int, "Fear");
				var_0_bool->SetMessage(512112); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512494, 13665, 13664); //@t
				var_0_bool->AddReply(541863, 44093, 44092); //@t
				return 0;
			}
			if(var_74_float == 44093) {
				func_4289(var_75_int, "Sly");
				var_0_bool->SetMessage(541864); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541865, 13667, 44094); //@t
				return 0;
			}
			if(var_74_float == 13665) {
				func_4289(var_75_int, "Fear");
				var_0_bool->SetMessage(512495); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512496, 13667, 13666); //@t
				var_0_bool->AddReply(541866, 13667, 44096); //@t
				return 0;
			}
			if(var_74_float == 13667) {
				func_4289(var_75_int, "Neutral");
				var_0_bool->SetMessage(512497); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512498, 13669, 13668); //@t
				return 0;
			}
			if(var_74_float == 13669) {
				func_4289(var_75_int, "Sly");
				var_0_bool->SetMessage(512499); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512500, -1, 13670); //@t
				var_0_bool->AddReply(512501, -1, 13671); //@t
				return 0;
			}
			var_3_object = true;
			bool var_494_bool;
			func_10509(var_494_bool);
			if(var_494_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10d8";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 34829) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_11229();
			}
			if(var_75_int == 37748) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_bool;
				func_11229();
			}
			if(var_75_int == 14856) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_bool;
				func_11156();
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_bool;
				func_11293();
				object var_159_object = var_1_object;
				func_10821(var_0_bool);
			}
			if(var_75_int == 14857) {
				object var_187_object; object var_188_object;
				var_187_object = var_1_object;
				var_188_object = var_0_bool;
				func_11156();
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_bool;
				func_11293();
				object var_191_object = var_1_object;
				func_10821(var_0_bool);
			}
			if(var_75_int == 14858) {
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_bool;
				func_11156();
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_bool;
				func_11293();
				object var_199_object = var_1_object;
				func_10821(var_0_bool);
			}
			if(var_75_int == 14839) {
				object var_203_object; object var_204_object;
				var_203_object = var_1_object;
				var_204_object = var_0_bool;
				func_11162();
			}
			if(var_75_int == 40671) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_bool;
				func_11168();
				object var_238_object; object var_239_object;
				var_238_object = var_1_object;
				var_239_object = var_0_bool;
				func_10737();
				object var_248_object = var_1_object;
				func_10611(var_0_bool);
			}
			if(var_75_int == 40672) {
				object var_257_object; object var_258_object;
				var_257_object = var_1_object;
				var_258_object = var_0_bool;
				func_11168();
				object var_259_object; object var_260_object;
				var_259_object = var_1_object;
				var_260_object = var_0_bool;
				func_10737();
				object var_261_object = var_1_object;
				func_10611(var_0_bool);
			}
			if(var_75_int == 40667) {
				object var_265_object; object var_266_object;
				var_265_object = var_1_object;
				var_266_object = var_0_bool;
				func_11168();
				object var_267_object; object var_268_object;
				var_267_object = var_1_object;
				var_268_object = var_0_bool;
				func_10737();
				object var_269_object = var_1_object;
				func_10611(var_0_bool);
			}
			if(var_75_int == 14862) {
				object var_273_object; object var_274_object;
				var_273_object = var_1_object;
				var_274_object = var_0_bool;
				func_11205();
			}
			if(var_75_int == 14894) {
				object var_279_object; object var_280_object;
				var_279_object = var_1_object;
				var_280_object = var_0_bool;
				func_11211();
			}
			if(var_75_int == 14873) {
				object var_285_object; object var_286_object;
				var_285_object = var_1_object;
				var_286_object = var_0_bool;
				func_11223();
			}
			if(var_75_int == 14867) {
				object var_291_object; object var_292_object;
				var_291_object = var_1_object;
				var_292_object = var_0_bool;
				func_11217();
			}
			if(var_75_int == 22141) {
				object var_297_object; object var_298_object;
				var_297_object = var_1_object;
				var_298_object = var_0_bool;
				func_10531();
				object var_310_object = var_1_object;
				func_10542(var_0_bool);
				object var_330_object; object var_331_object;
				var_330_object = var_1_object;
				var_331_object = var_0_bool;
				func_10815();
			}
			if(var_75_int == 34843) {
				object var_336_object; object var_337_object;
				var_336_object = var_1_object;
				var_337_object = var_0_bool;
				func_10671();
				object var_356_object = var_1_object;
				func_10783(var_0_bool);
			}
			if(var_75_int == 37765) {
				object var_365_object; object var_366_object;
				var_365_object = var_1_object;
				var_366_object = var_0_bool;
				func_10671();
				object var_367_object = var_1_object;
				func_10783(var_0_bool);
			}
			if(var_74_float == 34828) {
				bool var_371_bool;
				func_11408(var_1_object);
				if(var_371_bool != 0) {
					object var_377_object; object var_378_object;
					var_377_object = var_1_object;
					var_378_object = var_0_bool;
					func_10665();
					object var_381_object; object var_382_object;
					var_381_object = var_1_object;
					var_382_object = var_0_bool;
					func_10694();
					func_5162(var_75_int, "Sly");
					var_0_bool->SetMessage(533324); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(535993, 37724, 37723); //@t
					var_0_bool->AddReply(536001, 37724, 37731); //@t
					return 0;
				}
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(512410); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_411_bool = false;
				bool var_412_bool = false;
				bool var_413_bool;
				func_11768(var_1_object);
				if(var_413_bool != 0) {
					bool var_419_bool;
					func_11792(var_1_object);
					if(var_419_bool != 0)
						var_412_bool = true;
				}
				if(var_412_bool != 0) {
					bool var_425_bool;
					func_11780(var_1_object);
					if(!var_425_bool) //@nz
						var_411_bool = true;
				}
				if(var_411_bool != 0)
					var_0_bool->AddReply(512412, 13577, 13576); //@t
				bool var_435_bool = false;
				bool var_436_bool;
				func_11780(var_1_object);
				if(var_436_bool != 0) {
					bool var_438_bool;
					func_11804(var_1_object);
					if(var_438_bool != 0)
						var_435_bool = true;
				}
				if(var_435_bool != 0)
					var_0_bool->AddReply(513588, 14840, 14839); //@t
				bool var_447_bool = false;
				bool var_448_bool = false;
				bool var_449_bool = false;
				bool var_450_bool;
				func_11816(var_1_object);
				if(var_450_bool != 0) {
					bool var_456_bool;
					func_11780(var_1_object);
					if(var_456_bool != 0)
						var_449_bool = true;
				}
				if(var_449_bool != 0) {
					bool var_458_bool;
					func_11828(var_1_object);
					if(var_458_bool != 0)
						var_448_bool = true;
				}
				if(var_448_bool != 0) {
					bool var_464_bool;
					func_11864(var_1_object);
					if(!var_464_bool) //@nz
						var_447_bool = true;
				}
				if(var_447_bool != 0)
					var_0_bool->AddReply(513607, 14868, 14862); //@t
				bool var_474_bool = false;
				bool var_475_bool = false;
				bool var_476_bool;
				func_11816(var_1_object);
				if(var_476_bool != 0) {
					bool var_478_bool;
					func_11852(var_1_object);
					if(var_478_bool != 0)
						var_475_bool = true;
				}
				if(var_475_bool != 0) {
					bool var_484_bool;
					func_11876(var_1_object);
					if(!var_484_bool) //@nz
						var_474_bool = true;
				}
				if(var_474_bool != 0)
					var_0_bool->AddReply(513618, 14874, 14873); //@t
				bool var_494_bool = false;
				bool var_495_bool = false;
				bool var_496_bool;
				func_11780(var_1_object);
				if(!var_496_bool) { //@nz
					bool var_499_bool;
					func_11768(var_1_object);
					if(var_499_bool != 0)
						var_495_bool = true;
				}
				if(var_495_bool != 0) {
					bool var_501_bool;
					func_11840(var_1_object);
					if(var_501_bool != 0)
						var_494_bool = true;
				}
				if(var_494_bool != 0)
					var_0_bool->AddReply(513612, 14863, 14867); //@t
				bool var_510_bool;
				func_11922(var_510_bool, var_1_object);
				if(!var_510_bool) //@nz
					var_0_bool->AddReply(520922, 22140, 22139); //@t
				bool var_526_bool;
				func_11420(var_1_object);
				if(var_526_bool != 0)
					var_0_bool->AddReply(533337, 37749, 34841); //@t
				var_0_bool->AddReply(512411, -1, 13575); //@t
				return 0;
			}
			if(var_74_float == 37749) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(536015); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536016, 37751, 37750); //@t
				var_0_bool->AddReply(536021, 37751, 37755); //@t
				return 0;
			}
			if(var_74_float == 37751) {
				func_5162(var_75_int, "Sly");
				var_0_bool->SetMessage(536017); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536018, 37753, 37752); //@t
				return 0;
			}
			if(var_74_float == 37753) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(536019); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536020, 34842, 37754); //@t
				var_0_bool->AddReply(536024, 37760, 37759); //@t
				return 0;
			}
			if(var_74_float == 37760) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(536025); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536026, 37758, 37761); //@t
				var_0_bool->AddReply(536027, 34842, 37763); //@t
				return 0;
			}
			if(var_74_float == 34842) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(533338); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536022, 37758, 37757); //@t
				var_0_bool->AddReply(536028, -1, 37765); //@t
				return 0;
			}
			if(var_74_float == 37758) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(536023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533339, -1, 34843); //@t
				return 0;
			}
			if(var_74_float == 22140) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(520923); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_596_bool;
				func_11932(var_596_bool, var_1_object);
				if(var_596_bool != 0)
					var_0_bool->AddReply(520924, -1, 22141); //@t
				var_0_bool->AddReply(520925, -1, 22142); //@t
				return 0;
			}
			if(var_74_float == 14863) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(513608); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513609, 14865, 14864); //@t
				return 0;
			}
			if(var_74_float == 14865) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(513610); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513611, 14869, 14866); //@t
				return 0;
			}
			if(var_74_float == 14869) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(513614); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513615, 14871, 14870); //@t
				return 0;
			}
			if(var_74_float == 14871) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(513616); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513617, -1, 14872); //@t
				return 0;
			}
			if(var_74_float == 14874) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(513619); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513620, 14876, 14875); //@t
				return 0;
			}
			if(var_74_float == 14876) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(513621); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513623, 14879, 14878); //@t
				var_0_bool->AddReply(513622, -1, 14877); //@t
				return 0;
			}
			if(var_74_float == 14879) {
				func_5162(var_75_int, "Rage");
				var_0_bool->SetMessage(513624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513626, 14882, 14881); //@t
				var_0_bool->AddReply(513625, -1, 14880); //@t
				return 0;
			}
			if(var_74_float == 14882) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(513627); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513628, -1, 14883); //@t
				return 0;
			}
			if(var_74_float == 14868) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(513613); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513629, 14885, 14884); //@t
				return 0;
			}
			if(var_74_float == 14885) {
				func_5162(var_75_int, "Rage");
				var_0_bool->SetMessage(513630); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513631, 14889, 14886); //@t
				var_0_bool->AddReply(513632, 14888, 14887); //@t
				return 0;
			}
			if(var_74_float == 14888) {
				func_5162(var_75_int, "Fear");
				var_0_bool->SetMessage(513633); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513636, 14889, 14891); //@t
				return 0;
			}
			if(var_74_float == 14889) {
				func_5162(var_75_int, "Rage");
				var_0_bool->SetMessage(513634); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513635, 14893, 14890); //@t
				return 0;
			}
			if(var_74_float == 14893) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(513637); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513638, -1, 14894); //@t
				return 0;
			}
			if(var_74_float == 14840) {
				func_5162(var_75_int, "Rage");
				var_0_bool->SetMessage(513589); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513591, 14843, 14842); //@t
				var_0_bool->AddReply(513590, 14845, 14841); //@t
				return 0;
			}
			if(var_74_float == 14845) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(513594); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513595, 14847, 14846); //@t
				return 0;
			}
			if(var_74_float == 14847) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(513596); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513597, 14843, 14848); //@t
				return 0;
			}
			if(var_74_float == 14843) {
				func_5162(var_75_int, "Rage");
				var_0_bool->SetMessage(513592); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513598, 14824, 14850); //@t
				var_0_bool->AddReply(513593, 13583, 14844); //@t
				return 0;
			}
			if(var_74_float == 13583) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(512419); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512423, 13588, 13587); //@t
				return 0;
			}
			if(var_74_float == 13588) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(512424); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512425, 13594, 13590); //@t
				var_0_bool->AddReply(512426, 13592, 13591); //@t
				return 0;
			}
			if(var_74_float == 13592) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(512427); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512430, 13594, 13596); //@t
				return 0;
			}
			if(var_74_float == 13594) {
				func_5162(var_75_int, "Sly");
				var_0_bool->SetMessage(512428); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512429, 13599, 13595); //@t
				return 0;
			}
			if(var_74_float == 13599) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(512432); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512433, 13601, 13600); //@t
				return 0;
			}
			if(var_74_float == 13601) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(512434); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513581, 14826, 14830); //@t
				var_0_bool->AddReply(512435, 14833, 13602); //@t
				return 0;
			}
			if(var_74_float == 14824) {
				func_5162(var_75_int, "Sly");
				var_0_bool->SetMessage(513575); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513576, 14826, 14825); //@t
				return 0;
			}
			if(var_74_float == 14826) {
				func_5162(var_75_int, "Sly");
				var_0_bool->SetMessage(513577); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513578, 14828, 14827); //@t
				return 0;
			}
			if(var_74_float == 14828) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(513579); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513580, 14833, 14829); //@t
				var_0_bool->AddReply(535991, 14837, 37720); //@t
				var_0_bool->AddReply(535992, 14837, 37721); //@t
				return 0;
			}
			if(var_74_float == 14833) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(513582); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513583, 14835, 14834); //@t
				return 0;
			}
			if(var_74_float == 14835) {
				func_5162(var_75_int, "Sly");
				var_0_bool->SetMessage(513584); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513585, 14837, 14836); //@t
				return 0;
			}
			if(var_74_float == 14837) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(513586); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513587, 40669, 14838); //@t
				var_0_bool->AddReply(538755, -1, 40667); //@t
				return 0;
			}
			if(var_74_float == 40669) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(538756); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538757, -1, 40671); //@t
				var_0_bool->AddReply(538758, -1, 40672); //@t
				return 0;
			}
			if(var_74_float == 13577) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(512413); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512420, 13585, 13584); //@t
				var_0_bool->AddReply(512414, 13579, 13578); //@t
				return 0;
			}
			if(var_74_float == 13579) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(512415); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512416, 13581, 13580); //@t
				return 0;
			}
			if(var_74_float == 13581) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(512417); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512418, 14853, 13582); //@t
				return 0;
			}
			if(var_74_float == 13585) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(512421); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513574, 14851, 14823); //@t
				var_0_bool->AddReply(513602, 14853, 14854); //@t
				return 0;
			}
			if(var_74_float == 14851) {
				func_5162(var_75_int, "Sly");
				var_0_bool->SetMessage(513599); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513600, 14853, 14852); //@t
				return 0;
			}
			if(var_74_float == 14853) {
				func_5162(var_75_int, "Sly");
				var_0_bool->SetMessage(513601); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513603, -1, 14856); //@t
				var_0_bool->AddReply(513604, -1, 14857); //@t
				var_0_bool->AddReply(513605, -1, 14858); //@t
				return 0;
			}
			if(var_74_float == 37724) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(535994); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535995, 37735, 37725); //@t
				var_0_bool->AddReply(536002, 37726, 37733); //@t
				return 0;
			}
			if(var_74_float == 37735) {
				func_5162(var_75_int, "Untrust");
				var_0_bool->SetMessage(536003); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536005, 37738, 37737); //@t
				var_0_bool->AddReply(536007, 37740, 37739); //@t
				return 0;
			}
			if(var_74_float == 37740) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(536008); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536009, 37726, 37741); //@t
				return 0;
			}
			if(var_74_float == 37738) {
				func_5162(var_75_int, "Sly");
				var_0_bool->SetMessage(536006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536004, 37726, 37736); //@t
				var_0_bool->AddReply(536011, 37745, 37744); //@t
				return 0;
			}
			if(var_74_float == 37745) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(536012); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536013, 37726, 37746); //@t
				return 0;
			}
			if(var_74_float == 37726) {
				func_5162(var_75_int, "Rage");
				var_0_bool->SetMessage(535996); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535997, 37728, 37727); //@t
				var_0_bool->AddReply(536010, 37728, 37742); //@t
				return 0;
			}
			if(var_74_float == 37728) {
				func_5162(var_75_int, "Rage");
				var_0_bool->SetMessage(535998); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535999, 37730, 37729); //@t
				return 0;
			}
			if(var_74_float == 37730) {
				func_5162(var_75_int, "Neutral");
				var_0_bool->SetMessage(536000); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533325, -1, 34829); //@t
				var_0_bool->AddReply(536014, -1, 37748); //@t
				return 0;
			}
			var_3_object = true;
			bool var_978_bool;
			func_10509(var_978_bool);
			if(var_978_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1441";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 22136) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10531();
				object var_93_object = var_1_object;
				func_10542(var_0_bool);
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_bool;
				func_10815();
			}
			if(var_74_float == 22131) {
				func_6822(var_75_int, "Neutral");
				var_0_bool->SetMessage(520914); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_137_bool;
				func_11922(var_137_bool, var_1_object);
				if(!var_137_bool) //@nz
					var_0_bool->AddReply(520917, 22135, 22134); //@t
				var_0_bool->AddReply(520915, -1, 22132); //@t
				return 0;
			}
			if(var_74_float == 22135) {
				func_6822(var_75_int, "Neutral");
				var_0_bool->SetMessage(520918); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520919, -1, 22136); //@t
				var_0_bool->AddReply(520920, -1, 22137); //@t
				return 0;
			}
			var_3_object = true;
			bool var_166_bool;
			func_10509(var_166_bool);
			if(var_166_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1abd";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 22147) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10815();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10531();
				object var_97_object = var_1_object;
				func_10542(var_0_bool);
			}
			if(var_74_float == 22144) {
				func_7078(var_75_int, "Neutral");
				var_0_bool->SetMessage(520927); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_137_bool;
				func_11922(var_137_bool, var_1_object);
				if(!var_137_bool) //@nz
					var_0_bool->AddReply(520928, 22146, 22145); //@t
				var_0_bool->AddReply(520932, -1, 22149); //@t
				return 0;
			}
			if(var_74_float == 22146) {
				func_7078(var_75_int, "Neutral");
				var_0_bool->SetMessage(520929); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_160_bool;
				func_11932(var_160_bool, var_1_object);
				if(var_160_bool != 0)
					var_0_bool->AddReply(520930, -1, 22147); //@t
				var_0_bool->AddReply(520931, -1, 22148); //@t
				return 0;
			}
			var_3_object = true;
			bool var_174_bool;
			func_10509(var_174_bool);
			if(var_174_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1bbd";
	
	}

}


task task_22
{
}


task task_23
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 22154) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10531();
				object var_93_object = var_1_object;
				func_10542(var_0_bool);
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_bool;
				func_10815();
			}
			if(var_74_float == 22151) {
				func_7339(var_75_int, "Neutral");
				var_0_bool->SetMessage(520934); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_137_bool;
				func_11922(var_137_bool, var_1_object);
				if(!var_137_bool) //@nz
					var_0_bool->AddReply(520935, 22153, 22152); //@t
				var_0_bool->AddReply(520939, -1, 22156); //@t
				return 0;
			}
			if(var_74_float == 22153) {
				func_7339(var_75_int, "Neutral");
				var_0_bool->SetMessage(520936); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_160_bool;
				func_11932(var_160_bool, var_1_object);
				if(var_160_bool != 0)
					var_0_bool->AddReply(520937, -1, 22154); //@t
				var_0_bool->AddReply(520938, -1, 22155); //@t
				return 0;
			}
			var_3_object = true;
			bool var_174_bool;
			func_10509(var_174_bool);
			if(var_174_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1cc2";
	
	}

}


task task_24
{
}


task task_25
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 36141) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10716();
			}
			if(var_75_int == 38456) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_bool;
				func_10716();
			}
			if(var_75_int == 22161) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_bool;
				func_10815();
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_bool;
				func_10531();
				object var_137_object = var_1_object;
				func_10542(var_0_bool);
			}
			if(var_74_float == 22158) {
				func_7615(var_75_int, "Neutral");
				var_0_bool->SetMessage(520941); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_177_bool;
				func_11432(var_1_object);
				if(var_177_bool != 0)
					var_0_bool->AddReply(534490, 38444, 36135); //@t
				bool var_188_bool;
				func_11922(var_188_bool, var_1_object);
				if(!var_188_bool) //@nz
					var_0_bool->AddReply(520942, 22160, 22159); //@t
				var_0_bool->AddReply(520946, -1, 22163); //@t
				var_0_bool->AddReply(536616, -1, 38443); //@t
				return 0;
			}
			if(var_74_float == 22160) {
				func_7615(var_75_int, "Neutral");
				var_0_bool->SetMessage(520943); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_214_bool;
				func_11932(var_214_bool, var_1_object);
				if(var_214_bool != 0)
					var_0_bool->AddReply(520944, -1, 22161); //@t
				var_0_bool->AddReply(520945, -1, 22162); //@t
				return 0;
			}
			if(var_74_float == 38444) {
				func_7615(var_75_int, "Neutral");
				var_0_bool->SetMessage(536617); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536618, 38446, 38445); //@t
				return 0;
			}
			if(var_74_float == 38446) {
				func_7615(var_75_int, "Fear");
				var_0_bool->SetMessage(536619); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536620, 36136, 38447); //@t
				return 0;
			}
			if(var_74_float == 36136) {
				func_7615(var_75_int, "Fear");
				var_0_bool->SetMessage(534491); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534492, 36138, 36137); //@t
				var_0_bool->AddReply(536621, 38449, 38448); //@t
				return 0;
			}
			if(var_74_float == 38449) {
				func_7615(var_75_int, "Fear");
				var_0_bool->SetMessage(536622); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536625, 36140, 38452); //@t
				return 0;
			}
			if(var_74_float == 36138) {
				func_7615(var_75_int, "Neutral");
				var_0_bool->SetMessage(534493); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534494, 36140, 36139); //@t
				var_0_bool->AddReply(536623, 38451, 38450); //@t
				return 0;
			}
			if(var_74_float == 38451) {
				func_7615(var_75_int, "Sly");
				var_0_bool->SetMessage(536624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536626, 38455, 38454); //@t
				return 0;
			}
			if(var_74_float == 38455) {
				func_7615(var_75_int, "Untrust");
				var_0_bool->SetMessage(536627); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536628, -1, 38456); //@t
				return 0;
			}
			if(var_74_float == 36140) {
				func_7615(var_75_int, "Untrust");
				var_0_bool->SetMessage(534495); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534496, -1, 36141); //@t
				return 0;
			}
			var_3_object = true;
			bool var_290_bool;
			func_10509(var_290_bool);
			if(var_290_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1dd6";
	
	}

}


task task_26
{
}


task task_27
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_75_int == 34118) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10565();
				object var_139_object = var_1_object;
				func_10821(var_0_bool);
			}
			if(var_75_int == 34177) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_bool;
				func_10647();
			}
			if(var_75_int == 33363) {
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_bool;
				func_10627();
			}
			if(var_75_int == 33362) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_bool;
				func_10627();
			}
			if(var_75_int == 35191) {
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_bool;
				func_10627();
			}
			if(var_75_int == 34176) {
				object var_201_object; object var_202_object;
				var_201_object = var_1_object;
				var_202_object = var_0_bool;
				func_10565();
				object var_203_object = var_1_object;
				func_10821(var_0_bool);
			}
			if(var_75_int == 34165) {
				object var_207_object; object var_208_object;
				var_207_object = var_1_object;
				var_208_object = var_0_bool;
				func_10653();
			}
			if(var_75_int == 34169) {
				object var_213_object; object var_214_object;
				var_213_object = var_1_object;
				var_214_object = var_0_bool;
				func_10605();
				object var_217_object = var_1_object;
				func_10555(var_0_bool);
			}
			if(var_75_int == 34170) {
				object var_240_object; object var_241_object;
				var_240_object = var_1_object;
				var_241_object = var_0_bool;
				func_10605();
				object var_242_object = var_1_object;
				func_10853(var_0_bool);
			}
			if(var_74_float == 34103) {
				bool var_249_bool = false;
				bool var_250_bool = false;
				bool var_251_bool;
				func_11372(var_1_object);
				if(var_251_bool != 0) {
					bool var_259_bool;
					func_11324(var_1_object);
					if(var_259_bool != 0)
						var_250_bool = true;
				}
				if(var_250_bool != 0) {
					bool var_265_bool;
					func_11888(var_1_object);
					if(var_265_bool != 0)
						var_249_bool = true;
				}
				if(var_249_bool != 0) {
					object var_281_object; object var_282_object;
					var_281_object = var_1_object;
					var_282_object = var_0_bool;
					func_10641();
					func_8176(var_75_int, "Untrust");
					var_0_bool->SetMessage(532641); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(532642, 34105, 34104); //@t
					var_0_bool->AddReply(532687, 34161, 34160); //@t
					return 0;
				}
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(531953); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_311_bool = false;
				bool var_312_bool;
				func_11384(var_1_object);
				if(var_312_bool != 0) {
					bool var_318_bool;
					func_11888(var_1_object);
					if(var_318_bool != 0)
						var_311_bool = true;
				}
				if(var_311_bool != 0)
					var_0_bool->AddReply(532702, 34178, 34177); //@t
				bool var_323_bool;
				func_11360(var_1_object);
				if(var_323_bool != 0)
					var_0_bool->AddReply(531954, 33359, 33358); //@t
				bool var_332_bool = false;
				bool var_333_bool;
				func_11324(var_1_object);
				if(var_333_bool != 0) {
					bool var_335_bool;
					func_11372(var_1_object);
					if(!var_335_bool) //@nz
						var_332_bool = true;
				}
				if(var_332_bool != 0)
					var_0_bool->AddReply(532699, 34175, 34174); //@t
				bool var_341_bool = false;
				bool var_342_bool = false;
				bool var_343_bool;
				func_11348(var_1_object);
				if(!var_343_bool) { //@nz
					bool var_350_bool;
					func_11396(var_1_object);
					if(var_350_bool != 0)
						var_342_bool = true;
				}
				if(var_342_bool != 0) {
					bool var_356_bool;
					func_11336(var_1_object);
					if(var_356_bool != 0)
						var_341_bool = true;
				}
				if(var_341_bool != 0)
					var_0_bool->AddReply(532691, 34166, 34165); //@t
				var_0_bool->AddReply(531960, -1, 33364); //@t
				return 0;
			}
			if(var_74_float == 34166) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532692); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532693, 34168, 34167); //@t
				var_0_bool->AddReply(532698, 34168, 34172); //@t
				return 0;
			}
			if(var_74_float == 34168) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532694); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532695, -1, 34169); //@t
				var_0_bool->AddReply(532696, -1, 34170); //@t
				var_0_bool->AddReply(532697, -1, 34171); //@t
				return 0;
			}
			if(var_74_float == 34175) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532700); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532701, -1, 34176); //@t
				return 0;
			}
			if(var_74_float == 33359) {
				func_8176(var_75_int, "Sly");
				var_0_bool->SetMessage(531955); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533638, 35163, 35162); //@t
				var_0_bool->AddReply(533643, 35168, 35167); //@t
				return 0;
			}
			if(var_74_float == 35168) {
				func_8176(var_75_int, "Sly");
				var_0_bool->SetMessage(533644); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533645, 35170, 35169); //@t
				var_0_bool->AddReply(533647, 35170, 35171); //@t
				return 0;
			}
			if(var_74_float == 35170) {
				func_8176(var_75_int, "Fear");
				var_0_bool->SetMessage(533646); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533648, 35165, 35173); //@t
				var_0_bool->AddReply(533649, 35165, 35174); //@t
				return 0;
			}
			if(var_74_float == 35163) {
				func_8176(var_75_int, "Sly");
				var_0_bool->SetMessage(533639); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533640, 35165, 35164); //@t
				return 0;
			}
			if(var_74_float == 35165) {
				func_8176(var_75_int, "Sly");
				var_0_bool->SetMessage(533641); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533642, 35175, 35166); //@t
				var_0_bool->AddReply(533655, 35183, 35182); //@t
				return 0;
			}
			if(var_74_float == 35183) {
				func_8176(var_75_int, "Sly");
				var_0_bool->SetMessage(533656); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533657, 35188, 35184); //@t
				var_0_bool->AddReply(533658, 35177, 35185); //@t
				return 0;
			}
			if(var_74_float == 35188) {
				func_8176(var_75_int, "Rage");
				var_0_bool->SetMessage(533659); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533660, 35177, 35189); //@t
				return 0;
			}
			if(var_74_float == 35175) {
				func_8176(var_75_int, "Sly");
				var_0_bool->SetMessage(533650); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533651, 35177, 35176); //@t
				var_0_bool->AddReply(533654, 35177, 35179); //@t
				return 0;
			}
			if(var_74_float == 35177) {
				func_8176(var_75_int, "Fear");
				var_0_bool->SetMessage(533652); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533653, 33361, 35178); //@t
				return 0;
			}
			if(var_74_float == 33361) {
				func_8176(var_75_int, "Fear");
				var_0_bool->SetMessage(531957); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531959, -1, 33363); //@t
				var_0_bool->AddReply(531958, -1, 33362); //@t
				var_0_bool->AddReply(533661, -1, 35191); //@t
				return 0;
			}
			if(var_74_float == 34178) {
				func_8176(var_75_int, "Untrust");
				var_0_bool->SetMessage(532703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532704, 34180, 34179); //@t
				var_0_bool->AddReply(533589, 35104, 35107); //@t
				return 0;
			}
			if(var_74_float == 34180) {
				func_8176(var_75_int, "Untrust");
				var_0_bool->SetMessage(532705); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532706, 34182, 34181); //@t
				var_0_bool->AddReply(532712, 34182, 34187); //@t
				var_0_bool->AddReply(533586, 35104, 35103); //@t
				return 0;
			}
			if(var_74_float == 35104) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(533587); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533588, 34182, 35105); //@t
				return 0;
			}
			if(var_74_float == 34182) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532707); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532708, 34184, 34183); //@t
				return 0;
			}
			if(var_74_float == 34184) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532709); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532710, -1, 34185); //@t
				var_0_bool->AddReply(532711, -1, 34186); //@t
				return 0;
			}
			if(var_74_float == 34161) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532688); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532689, 34105, 34162); //@t
				var_0_bool->AddReply(532690, -1, 34164); //@t
				return 0;
			}
			if(var_74_float == 34105) {
				func_8176(var_75_int, "Untrust");
				var_0_bool->SetMessage(532643); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532644, 34107, 34106); //@t
				var_0_bool->AddReply(532680, 34151, 34150); //@t
				var_0_bool->AddReply(532686, 34151, 34158); //@t
				return 0;
			}
			if(var_74_float == 34151) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532681); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532682, 34107, 34152); //@t
				var_0_bool->AddReply(532683, 34155, 34154); //@t
				return 0;
			}
			if(var_74_float == 34155) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532684); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532685, 34107, 34156); //@t
				return 0;
			}
			if(var_74_float == 34107) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532645); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532646, 34109, 34108); //@t
				var_0_bool->AddReply(532677, 34147, 34146); //@t
				return 0;
			}
			if(var_74_float == 34147) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532678); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532679, 34109, 34148); //@t
				return 0;
			}
			if(var_74_float == 34109) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532647); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532648, 34111, 34110); //@t
				var_0_bool->AddReply(532674, 34143, 34142); //@t
				return 0;
			}
			if(var_74_float == 34143) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532675); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532676, 34111, 34144); //@t
				return 0;
			}
			if(var_74_float == 34111) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532649); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532650, 34113, 34112); //@t
				var_0_bool->AddReply(532667, 34133, 34132); //@t
				return 0;
			}
			if(var_74_float == 34133) {
				func_8176(var_75_int, "Untrust");
				var_0_bool->SetMessage(532668); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532669, 34113, 34134); //@t
				var_0_bool->AddReply(532670, 34137, 34136); //@t
				return 0;
			}
			if(var_74_float == 34137) {
				func_8176(var_75_int, "Neutral");
				var_0_bool->SetMessage(532671); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532672, 34113, 34138); //@t
				var_0_bool->AddReply(532673, 34113, 34140); //@t
				return 0;
			}
			if(var_74_float == 34113) {
				func_8176(var_75_int, "Sly");
				var_0_bool->SetMessage(532651); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532652, 34115, 34114); //@t
				var_0_bool->AddReply(532663, 34127, 34126); //@t
				return 0;
			}
			if(var_74_float == 34127) {
				func_8176(var_75_int, "Untrust");
				var_0_bool->SetMessage(532664); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532665, 34115, 34128); //@t
				var_0_bool->AddReply(532666, 34117, 34130); //@t
				return 0;
			}
			if(var_74_float == 34115) {
				func_8176(var_75_int, "Untrust");
				var_0_bool->SetMessage(532653); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532654, 34117, 34116); //@t
				var_0_bool->AddReply(532658, 34121, 34120); //@t
				return 0;
			}
			if(var_74_float == 34121) {
				func_8176(var_75_int, "Sly");
				var_0_bool->SetMessage(532659); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532660, 34117, 34122); //@t
				var_0_bool->AddReply(532662, -1, 34125); //@t
				return 0;
			}
			if(var_74_float == 34117) {
				func_8176(var_75_int, "Untrust");
				var_0_bool->SetMessage(532655); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532656, -1, 34118); //@t
				var_0_bool->AddReply(532657, -1, 34119); //@t
				return 0;
			}
			var_3_object = true;
			bool var_693_bool;
			func_10509(var_693_bool);
			if(var_693_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2007";
	
	}

}


task task_28
{
}


task task_29
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, int var_66_int, int var_67_int, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_74_float == 37363) {
				func_9349(var_75_int, "Neutral");
				var_0_bool->SetMessage(535677); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535678, 42150, 37364); //@t
				var_0_bool->AddReply(540005, -1, 41976); //@t
				return 0;
			}
			if(var_74_float == 42150) {
				func_9349(var_75_int, "Sly");
				var_0_bool->SetMessage(540173); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540174, 42153, 42151); //@t
				var_0_bool->AddReply(540175, 42154, 42152); //@t
				return 0;
			}
			if(var_74_float == 42154) {
				func_9349(var_75_int, "Sly");
				var_0_bool->SetMessage(540177); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540181, 42159, 42158); //@t
				return 0;
			}
			if(var_74_float == 42159) {
				func_9349(var_75_int, "Sly");
				var_0_bool->SetMessage(540182); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540183, 42161, 42160); //@t
				return 0;
			}
			if(var_74_float == 42153) {
				func_9349(var_75_int, "Untrust");
				var_0_bool->SetMessage(540176); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540178, 42156, 42155); //@t
				return 0;
			}
			if(var_74_float == 42156) {
				func_9349(var_75_int, "Untrust");
				var_0_bool->SetMessage(540179); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540180, 42161, 42157); //@t
				return 0;
			}
			if(var_74_float == 42161) {
				func_9349(var_75_int, "Untrust");
				var_0_bool->SetMessage(540184); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540185, -1, 42163); //@t
				var_0_bool->AddReply(540186, -1, 42164); //@t
				return 0;
			}
			var_3_object = true;
			bool var_152_bool;
			func_10509(var_152_bool);
			if(var_152_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x249c";
	
	}

}


task task_30
{
}


task task_31
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, int var_71_int, int var_72_int, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10244();
			if(var_74_float == 42551) {
				func_9670(var_75_int, "Neutral");
				var_0_bool->SetMessage(540542); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540543, -1, 42552); //@t
				var_0_bool->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_object = true;
			bool var_104_bool;
			func_10509(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x25dd";
	
	}

}


maintask task_32
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		var_74_bool = GlobalVars[2];
		GlobalVars[2] = false;
		func_9741(var_71_float, var_72_float, var_73_int);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		func_10500();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int, object var_74_object)
	{
		bool var_76_bool;
		@IsOverrideActive(var_76_bool);
		if(!var_76_bool) { //@nz
			disable OnUse;
			bool var_78_bool; object var_79_object;
			var_74_object = var_79_object;
			func_9948(var_78_bool, var_79_object);
			enable OnUse;
			object var_92_object;
			var_74_object = var_92_object;
			func_12329(var_92_object);
		}
	}

}


void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
{
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_116_bool;
	func_9968(var_116_bool);
	if(!var_116_bool) goto Label_0; //@nz
}


// @pe
void func_10754(object var_273_object)
{
	@Trace("lens is given");
	object var_276_object;
	var_273_object = var_276_object;
	func_10373(var_276_object, "lens", 1);
}


void func_10244(void)
{
	bool var_77_bool;
	func_10509(var_77_bool);
	if(var_77_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_11780(bool var_1202_bool)
{
	int var_1204_int;
	func_10296(var_1204_int, "d8q01MladVladIsBad");
	if(var_1204_int == 1)
		var_1202_bool = true;
	var_1202_bool = false;
}


void func_10251(object var_169_object)
{
	object var_171_object;
	@self(var_171_object);
	var_171_object = var_169_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10765(void)
{
	@SetVariable("KnowPochka", 1);
}


void func_9741(bool var_0_bool, object var_1_object, object var_2_object)
{
	bool var_87_bool; int var_88_int; bool var_89_bool; cvector var_90_cvector; cvector var_91_cvector; cvector var_92_cvector; float var_93_float; cvector var_94_cvector; bool var_95_bool; cvector var_96_cvector;
	@SensePlayerOnly(true);
	func_9829();
	object var_86_object;
	@GetScene(var_86_object);
	var_2_object = 0;
	
	for(;;) {
		string var_102_string;
		func_10487(var_102_string, var_2_object);
		var_86_object->GetLocator(var_102_string, var_87_bool);
		if(!var_87_bool) { //@nz
		} else {
		}
		bool var_112_bool;
		func_9968(var_112_bool);
		if(!var_112_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		func_9837(var_95_bool, var_96_cvector);

		for(;;) {
			@irand(var_88_int, (var_2_object + 1));
			string var_136_string; int var_137_int;
			var_88_int = var_137_int;
			func_10487(var_136_string, var_137_int);
			var_86_object->GetLocator(var_136_string, var_89_bool, var_90_cvector, var_91_cvector);
			cvector var_138_cvector;
			func_9884(var_138_cvector);
			var_92_cvector = var_90_cvector - var_138_cvector;
			float var_141_float; cvector var_142_cvector;
			var_92_cvector = var_142_cvector;
			func_10286(var_141_float, var_142_cvector);
			if(var_141_float > var_1_object) {
				@GetHeight(var_93_float);
				var_151_float = GetByIndex(var_94_cvector, 1);
				SetByIndex(var_94_cvector, 1) = (var_151_float + var_93_float);
				@CanReachByPF(var_95_bool, var_94_cvector);
				if(var_95_bool != 0) {
					var_154_float = sqrt(var_92_cvector | var_92_cvector);
					var_96_cvector = var_94_cvector - (var_92_cvector * (var_0_bool / var_154_float));
					bool var_157_bool; cvector var_158_cvector; cvector var_159_cvector;
					var_96_cvector = var_158_cvector;
					var_91_cvector = var_159_cvector;
					TaskCall(1);
					func_13(var_160_bool, var_157_bool, var_158_cvector, var_159_cvector);
					TaskReturn();
					if(var_160_bool != 0) {
						int var_184_int;
						var_88_int = var_184_int;
						TaskCall(3);
						func_198(var_184_int);
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


void func_13(bool var_0_bool, bool var_157_bool, cvector var_158_cvector, cvector var_159_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_19:
	for(;;) {
		bool var_165_bool; cvector var_166_cvector;
		var_158_cvector = var_166_cvector;
		func_9938(var_165_bool, var_166_cvector);
		var_175_bool = !var_165_bool; //@nz
		if(var_175_bool == 0) goto Label_26;
	}
	
Label_26:
	bool var_162_bool;
	@MovePoint(var_158_cvector, false, var_162_bool);
	if(var_162_bool != 0) {
	} else {
		goto Label_19;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_162_bool);
	if(!var_162_bool) { //@nz
		var_157_bool = false;
		return 2;
	}
	var_181_float = GetByIndex(var_159_cvector, 0);
	var_182_float = GetByIndex(var_159_cvector, 2);
	@Rotate(var_181_float, var_182_float, var_162_bool);
	if(!var_162_bool) { //@nz
		var_157_bool = false;
		return 2;
	}
	var_157_bool = true;
	
}


// @pe
void func_11792(bool var_1196_bool)
{
	int var_1198_int;
	func_10296(var_1198_int, "ood8MladVlad1");
	if(var_1198_int == 0) {
		var_1196_bool = true;
		return 0;
	}
	var_1196_bool = false;
}


void func_10257(cvector var_133_cvector, cvector var_134_cvector)
{
	float var_137_float = sqrt(var_134_cvector | var_134_cvector);
	if(var_137_float < 0.000001)
		var_133_cvector = [0.0, 0.0, 0.0];
	var_133_cvector = var_134_cvector / var_137_float;
}


// @pe
void func_10771(void)
{
	@SetVariable("ood2MladVlad1", 1);
}


void func_6677(bool var_0_bool, int var_1057_int, object var_1058_object)
{
	var_0_bool = var_1058_object;
	bool var_1068_bool; object var_1069_object;
	var_1058_object = var_1069_object;
	func_9973(var_1068_bool, var_1069_object, 70.0);
	if(!var_1068_bool) { //@nz
		var_1057_int = -2;
		return 8;
	}
	object var_1064_object;
	@CreateDialog(var_1064_object);
	int var_1072_int;
	func_10503(var_1072_int);
	var_1064_object->SetNPCName(var_1072_int);
	int var_1073_int;
	func_10501(var_1073_int);
	var_1064_object->SetNPCDescription(var_1073_int);
	string var_1074_string;
	func_10505(var_1074_string);
	var_1064_object->SetPhoto(var_1074_string);
	string var_1075_string;
	func_10507(var_1075_string);
	var_1064_object->SetPhoto2(var_1075_string);
	int var_1076_int;
	func_12312(var_1076_int);
	var_1064_object->SetPlayerName(var_1076_int);
	bool var_1065_bool;
	@IsOverrideActive(var_1065_bool);
	if(var_1065_bool != 0) {
		var_1057_int = -2;
		return 8;
	}
	@DoDialog(var_1064_object);
	bool var_1078_bool; object var_1079_object;
	object var_1080_object;
	func_10251(var_1080_object);
	var_1080_object = var_1079_object;
	func_10060(var_1078_bool, var_1079_object);
	object var_1081_object; object var_1082_object;
	var_1058_object = var_1081_object;
	var_1064_object = var_1082_object;
	TaskCall(19);
	func_6758(var_1083_object, var_1084_object, var_1085_string, var_1086_bool, var_1081_object, var_1082_object);
	TaskReturn();
	bool var_1067_bool;
	var_1064_object->IsDialogEnd(var_1067_bool);
	
	for(;;) {
		var_1114_bool = !var_1067_bool; //@nz
		if(var_1114_bool == 0) goto Label_6747;
		@sync();
		var_1064_object->IsDialogEnd(var_1067_bool);
	}
	
Label_6747:
	object var_1115_object;
	var_1058_object = var_1115_object;
	func_10042();
	@StopDialog(var_1064_object);
	var_1064_object->GetReturnValue(-1);
	int var_1066_int = var_1057_int;
}
EMIT "Stack[-4] = 0";


void func_12312(int var_158_int)
{
	int var_160_int;
	@GetVariable("branch", var_160_int);
	if(var_160_int == 0) {
		var_158_int = 1;
		return 2;
	EMIT "GOTO 0x3027";
	}
	if(var_160_int == 1) {
		var_158_int = 2;
		return 2;
	}
	var_158_int = 3;
}


// @pe
void func_10777(void)
{
	@SetVariable("ood2MladVlad2", 1);
}


void func_7194(bool var_0_bool, int var_1370_int, object var_1371_object)
{
	var_0_bool = var_1371_object;
	bool var_1381_bool; object var_1382_object;
	var_1371_object = var_1382_object;
	func_9973(var_1381_bool, var_1382_object, 70.0);
	if(!var_1381_bool) { //@nz
		var_1370_int = -2;
		return 8;
	}
	object var_1377_object;
	@CreateDialog(var_1377_object);
	int var_1385_int;
	func_10503(var_1385_int);
	var_1377_object->SetNPCName(var_1385_int);
	int var_1386_int;
	func_10501(var_1386_int);
	var_1377_object->SetNPCDescription(var_1386_int);
	string var_1387_string;
	func_10505(var_1387_string);
	var_1377_object->SetPhoto(var_1387_string);
	string var_1388_string;
	func_10507(var_1388_string);
	var_1377_object->SetPhoto2(var_1388_string);
	int var_1389_int;
	func_12312(var_1389_int);
	var_1377_object->SetPlayerName(var_1389_int);
	bool var_1378_bool;
	@IsOverrideActive(var_1378_bool);
	if(var_1378_bool != 0) {
		var_1370_int = -2;
		return 8;
	}
	@DoDialog(var_1377_object);
	bool var_1391_bool; object var_1392_object;
	object var_1393_object;
	func_10251(var_1393_object);
	var_1393_object = var_1392_object;
	func_10060(var_1391_bool, var_1392_object);
	object var_1394_object; object var_1395_object;
	var_1371_object = var_1394_object;
	var_1377_object = var_1395_object;
	TaskCall(23);
	func_7275(var_1396_object, var_1397_object, var_1398_string, var_1399_bool, var_1394_object, var_1395_object);
	TaskReturn();
	bool var_1380_bool;
	var_1377_object->IsDialogEnd(var_1380_bool);
	
	for(;;) {
		var_1427_bool = !var_1380_bool; //@nz
		if(var_1427_bool == 0) goto Label_7264;
		@sync();
		var_1377_object->IsDialogEnd(var_1380_bool);
	}
	
Label_7264:
	object var_1428_object;
	var_1371_object = var_1428_object;
	func_10042();
	@StopDialog(var_1377_object);
	var_1377_object->GetReturnValue(-1);
	int var_1379_int = var_1370_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_10267(float var_130_float, float var_131_float)
{
	if(var_131_float < 0)
		var_130_float = -var_131_float;
	else
		var_131_float = var_130_float;
	
}


// @pe
void func_11804(bool var_1215_bool)
{
	int var_1217_int;
	func_10296(var_1217_int, "ood8MladVlad2");
	if(var_1217_int == 0) {
		var_1215_bool = true;
		return 0;
	}
	var_1215_bool = false;
}


void func_11293(void)
{
	object var_137_object;
	func_12262(var_137_object);
	object var_136_object;
	var_137_object = var_136_object;
	float var_148_float;
	func_10443(var_148_float);
	var_136_object->AddMark("d8q01MladVladgotoOspina", "pt_map_ospina", 1, 515320, var_148_float);
	func_12169();
}
EMIT "Stack[-1] = 0";


// @pe
void func_10783(object var_357_object)
{
	object var_361_object;
	func_12262(var_361_object);
	object var_358_object;
	var_361_object = var_358_object;
	func_12279(var_358_object, "pt_map_theater", (float)2);
	object var_362_object;
	func_12262(var_362_object);
	var_357_object->ShowMap(var_362_object);
}


// @pe
void func_10275(float var_227_float, float var_228_float, float var_229_float, float var_230_float)
{
	if(var_228_float < var_229_float) {
		var_229_float = var_227_float;
		return 0;
	}
	if(var_228_float > var_230_float) {
		var_230_float = var_227_float;
		return 0;
	}
	var_228_float = var_227_float;
}


// @pe
void func_11816(bool var_1227_bool)
{
	int var_1229_int;
	func_10296(var_1229_int, "d8q01BringBadBoy");
	if(var_1229_int == 1)
		var_1227_bool = true;
	var_1227_bool = false;
}


// @pe
void func_12329(object var_92_object)
{
	var_93_bool = GlobalVars[2];
	if(!var_93_bool) { //@nz
		int var_95_int; object var_96_object;
		var_92_object = var_96_object;
		TaskCall(4);
		func_282(var_97_object, var_95_int, var_96_object);
		TaskReturn();
		var_325_bool = GlobalVars[2];
		GlobalVars[2] = true;
	}
	bool var_326_bool;
	func_10457(var_326_bool, 1);
	if(var_326_bool != 0) {
		int var_329_int; object var_330_object;
		var_92_object = var_330_object;
		TaskCall(26);
		func_7916(var_331_object, var_329_int, var_330_object);
		TaskReturn();
		return 0;
	}
	bool var_480_bool;
	func_10457(var_480_bool, 2);
	if(var_480_bool != 0) {
		int var_482_int; object var_483_object;
		var_92_object = var_483_object;
		TaskCall(6);
		func_564(var_484_object, var_482_int, var_483_object);
		TaskReturn();
		return 0;
	}
	bool var_560_bool;
	func_10457(var_560_bool, 3);
	if(var_560_bool != 0) {
		int var_562_int; object var_563_object;
		var_92_object = var_563_object;
		TaskCall(8);
		func_1092(var_564_object, var_562_int, var_563_object);
		TaskReturn();
		return 0;
	}
	bool var_690_bool;
	func_10457(var_690_bool, 4);
	if(var_690_bool != 0) {
		int var_692_int; object var_693_object;
		var_92_object = var_693_object;
		TaskCall(10);
		func_2119(var_694_object, var_692_int, var_693_object);
		TaskReturn();
		return 0;
	}
	bool var_802_bool;
	func_10457(var_802_bool, 5);
	if(var_802_bool != 0) {
		int var_804_int; object var_805_object;
		var_92_object = var_805_object;
		TaskCall(12);
		func_3298(var_806_object, var_804_int, var_805_object);
		TaskReturn();
		return 0;
	}
	bool var_935_bool;
	func_10457(var_935_bool, 6);
	if(var_935_bool != 0) {
		int var_937_int; object var_938_object;
		var_92_object = var_938_object;
		TaskCall(14);
		func_4061(var_939_object, var_937_int, var_938_object);
		TaskReturn();
		return 0;
	}
	bool var_1055_bool;
	func_10457(var_1055_bool, 7);
	if(var_1055_bool != 0) {
		int var_1057_int; object var_1058_object;
		var_92_object = var_1058_object;
		TaskCall(18);
		func_6677(var_1059_object, var_1057_int, var_1058_object);
		TaskReturn();
		return 0;
	}
	bool var_1116_bool;
	func_10457(var_1116_bool, 8);
	if(var_1116_bool != 0) {
		int var_1118_int; object var_1119_object;
		var_92_object = var_1119_object;
		TaskCall(16);
		func_4828(var_1120_object, var_1118_int, var_1119_object);
		TaskReturn();
		return 0;
	}
	bool var_1307_bool;
	func_10457(var_1307_bool, 9);
	if(var_1307_bool != 0) {
		int var_1309_int; object var_1310_object;
		var_92_object = var_1310_object;
		TaskCall(20);
		func_6933(var_1311_object, var_1309_int, var_1310_object);
		TaskReturn();
		return 0;
	}
	bool var_1368_bool;
	func_10457(var_1368_bool, 10);
	if(var_1368_bool != 0) {
		int var_1370_int; object var_1371_object;
		var_92_object = var_1371_object;
		TaskCall(22);
		func_7194(var_1372_object, var_1370_int, var_1371_object);
		TaskReturn();
		return 0;
	}
	bool var_1429_bool;
	func_10457(var_1429_bool, 11);
	if(var_1429_bool != 0) {
		int var_1431_int; object var_1432_object;
		var_92_object = var_1432_object;
		TaskCall(24);
		func_7455(var_1433_object, var_1431_int, var_1432_object);
		TaskReturn();
		return 0;
	}
	bool var_1502_bool;
	func_10457(var_1502_bool, 12);
	if(var_1502_bool != 0) {
		int var_1504_int; object var_1505_object;
		var_92_object = var_1505_object;
		TaskCall(28);
		func_9210(var_1506_object, var_1504_int, var_1505_object);
		TaskReturn();
		return 0;
	}
	int var_1560_int; object var_1561_object;
	var_92_object = var_1561_object;
	TaskCall(30);
	func_9531(var_1562_object, var_1560_int, var_1561_object);
	TaskReturn();
}


// @pe
void func_5162(object var_2_object, string var_1163_string)
{
	bool var_1164_bool;
	func_10509(var_1164_bool);
	if(!var_1164_bool) //@nz
		return 0;
	if(var_1163_string == var_2_object)
		return 0;
	string var_1167_string; bool var_1168_bool;
	var_1163_string = var_1167_string;
	if(var_1163_string == "")
		var_1168_bool = false;
	else
		var_1168_bool = true;
	func_10214(var_1167_string, var_1168_bool);
	var_2_object = var_1163_string;
	
}


// @pe
void func_4142(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_961_object, object var_962_object)
{
	var_0_bool = var_962_object;
	var_1_object = var_961_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_968_bool;
		func_11624(var_1_object);
		if(var_968_bool != 0) {
			func_4289(var_962_object, "Fear");
			var_0_bool->SetMessage(512104); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(512105, 13334, 13331); //@t
			var_0_bool->AddReply(512106, 13333, 13332); //@t
		} else {
					func_4289(var_962_object, "Neutral");
					var_0_bool->SetMessage(512515); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_999_bool;
					func_11612(var_1_object);
					if(var_999_bool != 0)
						var_0_bool->AddReply(512520, 13691, 13690); //@t
					bool var_1008_bool = false;
					bool var_1009_bool;
					func_11636(var_1_object);
					if(var_1009_bool != 0) {
						bool var_1015_bool;
						func_11744(var_1_object);
						if(var_1015_bool != 0)
							var_1008_bool = true;
					}
					if(var_1008_bool != 0)
						var_0_bool->AddReply(512516, 13688, 13686); //@t
					bool var_1024_bool = false;
					bool var_1025_bool = false;
					bool var_1026_bool;
					func_11648(var_1_object);
					if(var_1026_bool != 0) {
						bool var_1032_bool;
						func_11756(var_1_object);
						if(var_1032_bool != 0)
							var_1025_bool = true;
					}
					if(var_1025_bool != 0) {
						bool var_1038_bool;
						func_11744(var_1_object);
						if(!var_1038_bool) //@nz
							var_1024_bool = true;
					}
					if(var_1024_bool != 0)
						var_0_bool->AddReply(512526, 13697, 13696); //@t
					bool var_1044_bool;
					func_11922(var_1044_bool, var_1_object);
					if(!var_1044_bool) //@nz
						var_0_bool->AddReply(520909, 22127, 22126); //@t
					var_0_bool->AddReply(512517, -1, 13687); //@t
		}
	}
	for(;;) {
		bool var_989_bool;
		func_10509(var_989_bool);
		if(var_989_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10198(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4288;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4288:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1032";


// @pe
void func_10799(object var_152_object)
{
	object var_156_object;
	func_12262(var_156_object);
	object var_153_object;
	var_156_object = var_153_object;
	func_12279(var_153_object, "pt_map_anna", (float)2);
	object var_176_object;
	func_12262(var_176_object);
	var_152_object->ShowMap(var_176_object);
}


// @pe
void func_11312(bool var_619_bool)
{
	int var_621_int;
	func_10296(var_621_int, "ood3MladVlad2");
	if(var_621_int == 0) {
		var_619_bool = true;
		return 0;
	}
	var_619_bool = false;
}


// @pe
void func_10286(float var_141_float, cvector var_142_cvector)
{
	var_143_float = GetByIndex(var_142_cvector, 0);
	var_144_float = GetByIndex(var_142_cvector, 0);
	var_146_float = GetByIndex(var_142_cvector, 2);
	var_147_float = GetByIndex(var_142_cvector, 2);
	var_141_float = sqrt((var_143_float * var_144_float) + (var_146_float * var_147_float));
}


// @pe
void func_11828(bool var_1235_bool)
{
	int var_1237_int;
	func_10296(var_1237_int, "ood8MladVlad3");
	if(var_1237_int == 0) {
		var_1235_bool = true;
		return 0;
	}
	var_1235_bool = false;
}


void func_564(bool var_0_bool, int var_482_int, object var_483_object)
{
	var_0_bool = var_483_object;
	bool var_493_bool; object var_494_object;
	var_483_object = var_494_object;
	func_9973(var_493_bool, var_494_object, 70.0);
	if(!var_493_bool) { //@nz
		var_482_int = -2;
		return 8;
	}
	object var_489_object;
	@CreateDialog(var_489_object);
	int var_497_int;
	func_10503(var_497_int);
	var_489_object->SetNPCName(var_497_int);
	int var_498_int;
	func_10501(var_498_int);
	var_489_object->SetNPCDescription(var_498_int);
	string var_499_string;
	func_10505(var_499_string);
	var_489_object->SetPhoto(var_499_string);
	string var_500_string;
	func_10507(var_500_string);
	var_489_object->SetPhoto2(var_500_string);
	int var_501_int;
	func_12312(var_501_int);
	var_489_object->SetPlayerName(var_501_int);
	bool var_490_bool;
	@IsOverrideActive(var_490_bool);
	if(var_490_bool != 0) {
		var_482_int = -2;
		return 8;
	}
	@DoDialog(var_489_object);
	bool var_503_bool; object var_504_object;
	object var_505_object;
	func_10251(var_505_object);
	var_505_object = var_504_object;
	func_10060(var_503_bool, var_504_object);
	object var_506_object; object var_507_object;
	var_483_object = var_506_object;
	var_489_object = var_507_object;
	TaskCall(7);
	func_645(var_508_object, var_509_object, var_510_string, var_511_bool, var_506_object, var_507_object);
	TaskReturn();
	bool var_492_bool;
	var_489_object->IsDialogEnd(var_492_bool);
	
	for(;;) {
		var_558_bool = !var_492_bool; //@nz
		if(var_558_bool == 0) goto Label_634;
		@sync();
		var_489_object->IsDialogEnd(var_492_bool);
	}
	
Label_634:
	object var_559_object;
	var_483_object = var_559_object;
	func_10042();
	@StopDialog(var_489_object);
	var_489_object->GetReturnValue(-1);
	int var_491_int = var_482_int;
}
EMIT "Stack[-4] = 0";


void func_10296(int var_364_int, string var_365_string)
{
	int var_367_int;
	@GetVariable(var_365_string, var_367_int);
	var_367_int = var_364_int;
}


// @pe
void func_11324(bool var_370_bool)
{
	int var_372_int;
	func_10296(var_372_int, "d1q03");
	if(var_372_int == 0) {
		var_370_bool = true;
		return 0;
	}
	var_370_bool = false;
}


void func_10301(object var_131_object, string var_132_string)
{
	object var_135_object;
	@GetMainOutdoorScene(var_135_object);
	object var_136_object;
	@AddBlankActor(var_136_object, var_135_object, var_132_string, (var_132_string + ".bin"));
	var_136_object = var_131_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10815(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_11840(bool var_1278_bool)
{
	int var_1280_int;
	func_10296(var_1280_int, "ood8MladVlad4");
	if(var_1280_int == 0) {
		var_1278_bool = true;
		return 0;
	}
	var_1278_bool = false;
}


void func_1092(bool var_0_bool, int var_562_int, object var_563_object)
{
	var_0_bool = var_563_object;
	bool var_573_bool; object var_574_object;
	var_563_object = var_574_object;
	func_9973(var_573_bool, var_574_object, 70.0);
	if(!var_573_bool) { //@nz
		var_562_int = -2;
		return 8;
	}
	object var_569_object;
	@CreateDialog(var_569_object);
	int var_577_int;
	func_10503(var_577_int);
	var_569_object->SetNPCName(var_577_int);
	int var_578_int;
	func_10501(var_578_int);
	var_569_object->SetNPCDescription(var_578_int);
	string var_579_string;
	func_10505(var_579_string);
	var_569_object->SetPhoto(var_579_string);
	string var_580_string;
	func_10507(var_580_string);
	var_569_object->SetPhoto2(var_580_string);
	int var_581_int;
	func_12312(var_581_int);
	var_569_object->SetPlayerName(var_581_int);
	bool var_570_bool;
	@IsOverrideActive(var_570_bool);
	if(var_570_bool != 0) {
		var_562_int = -2;
		return 8;
	}
	@DoDialog(var_569_object);
	bool var_583_bool; object var_584_object;
	object var_585_object;
	func_10251(var_585_object);
	var_585_object = var_584_object;
	func_10060(var_583_bool, var_584_object);
	object var_586_object; object var_587_object;
	var_563_object = var_586_object;
	var_569_object = var_587_object;
	TaskCall(9);
	func_1173(var_588_object, var_589_object, var_590_string, var_591_bool, var_586_object, var_587_object);
	TaskReturn();
	bool var_572_bool;
	var_569_object->IsDialogEnd(var_572_bool);
	
	for(;;) {
		var_688_bool = !var_572_bool; //@nz
		if(var_688_bool == 0) goto Label_1162;
		@sync();
		var_569_object->IsDialogEnd(var_572_bool);
	}
	
Label_1162:
	object var_689_object;
	var_563_object = var_689_object;
	func_10042();
	@StopDialog(var_569_object);
	var_569_object->GetReturnValue(-1);
	int var_571_int = var_562_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_10821(object var_140_object)
{
	object var_144_object;
	func_12262(var_144_object);
	object var_141_object;
	var_144_object = var_141_object;
	func_12279(var_141_object, "pt_map_ospina", (float)2);
	object var_164_object;
	func_12262(var_164_object);
	var_140_object->ShowMap(var_164_object);
}


void func_2119(bool var_0_bool, int var_692_int, object var_693_object)
{
	var_0_bool = var_693_object;
	bool var_703_bool; object var_704_object;
	var_693_object = var_704_object;
	func_9973(var_703_bool, var_704_object, 70.0);
	if(!var_703_bool) { //@nz
		var_692_int = -2;
		return 8;
	}
	object var_699_object;
	@CreateDialog(var_699_object);
	int var_707_int;
	func_10503(var_707_int);
	var_699_object->SetNPCName(var_707_int);
	int var_708_int;
	func_10501(var_708_int);
	var_699_object->SetNPCDescription(var_708_int);
	string var_709_string;
	func_10505(var_709_string);
	var_699_object->SetPhoto(var_709_string);
	string var_710_string;
	func_10507(var_710_string);
	var_699_object->SetPhoto2(var_710_string);
	int var_711_int;
	func_12312(var_711_int);
	var_699_object->SetPlayerName(var_711_int);
	bool var_700_bool;
	@IsOverrideActive(var_700_bool);
	if(var_700_bool != 0) {
		var_692_int = -2;
		return 8;
	}
	@DoDialog(var_699_object);
	bool var_713_bool; object var_714_object;
	object var_715_object;
	func_10251(var_715_object);
	var_715_object = var_714_object;
	func_10060(var_713_bool, var_714_object);
	object var_716_object; object var_717_object;
	var_693_object = var_716_object;
	var_699_object = var_717_object;
	TaskCall(11);
	func_2200(var_718_object, var_719_object, var_720_string, var_721_bool, var_716_object, var_717_object);
	TaskReturn();
	bool var_702_bool;
	var_699_object->IsDialogEnd(var_702_bool);
	
	for(;;) {
		var_800_bool = !var_702_bool; //@nz
		if(var_800_bool == 0) goto Label_2189;
		@sync();
		var_699_object->IsDialogEnd(var_702_bool);
	}
	
Label_2189:
	object var_801_object;
	var_693_object = var_801_object;
	func_10042();
	@StopDialog(var_699_object);
	var_699_object->GetReturnValue(-1);
	int var_701_int = var_692_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_11336(bool var_466_bool)
{
	int var_468_int;
	func_10296(var_468_int, "d1q03");
	if(var_468_int == 1000)
		var_466_bool = true;
	var_466_bool = false;
}


void func_10312(object var_143_object, string var_144_string)
{
	object var_147_object;
	@GetMainOutdoorScene(var_147_object);
	object var_148_object;
	@AddBlankActorFromXml(var_148_object, var_147_object, var_144_string, (var_144_string + ".xml"));
	var_148_object = var_143_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9291(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1528_object, object var_1529_object)
{
	var_0_bool = var_1529_object;
	var_1_object = var_1528_object;
	var_3_object = false;
	if(1 != 0) {
		func_9349(var_1529_object, "Neutral");
		var_0_bool->SetMessage(535677); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535678, 42150, 37364); //@t
		var_0_bool->AddReply(540005, -1, 41976); //@t
		goto Label_9319;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x244f";
	}
Label_9319:
	bool var_1550_bool;
	func_10509(var_1550_bool);
	if(var_1550_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_9348;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_9348:
		return 0;

	}
	
}


// @pe
void func_11852(bool var_1255_bool)
{
	int var_1257_int;
	func_10296(var_1257_int, "ood8MladVlad5");
	if(var_1257_int == 0) {
		var_1255_bool = true;
		return 0;
	}
	var_1255_bool = false;
}


void func_10323(int var_233_int, int var_234_int)
{
	object var_236_object;
	@CreateIntVector(var_236_object);
	var_236_object->add(var_233_int);
	var_236_object->add(var_234_int);
	@SendWorldWndMessage(3, var_236_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11348(bool var_453_bool)
{
	int var_455_int;
	func_10296(var_455_int, "d1q03IsKapella");
	if(var_455_int == 1)
		var_453_bool = true;
	var_453_bool = false;
}


// @pe
void func_10837(object var_226_object)
{
	object var_230_object;
	func_12262(var_230_object);
	object var_227_object;
	var_230_object = var_227_object;
	func_12279(var_227_object, "pt_map_bigvlad", (float)2);
	object var_231_object;
	func_12262(var_231_object);
	var_226_object->ShowMap(var_231_object);
}


// @pe
void func_11864(bool var_1241_bool)
{
	int var_1243_int;
	func_10296(var_1243_int, "d8q01BigVladIsVictim");
	if(var_1243_int == 1)
		var_1241_bool = true;
	var_1241_bool = false;
}


void func_10335(object var_220_object, int var_221_int)
{
	int var_223_int;
	object var_224_object;
	var_220_object = var_224_object;
	int var_226_int;
	func_9931(var_224_object, "money", var_226_int);
	if(var_226_int > 0) {
		@GetInvItemByName(var_223_int, "Money");
		int var_233_int; int var_234_int;
		var_223_int = var_233_int;
		var_221_int = var_234_int;
		func_10323(var_233_int, var_234_int);
	}
}


// @pe
void func_11360(bool var_433_bool)
{
	int var_435_int;
	func_10296(var_435_int, "d1q01");
	if(var_435_int == 6)
		var_433_bool = true;
	var_433_bool = false;
}


// @pe
void func_11876(bool var_1261_bool)
{
	int var_1263_int;
	func_10296(var_1263_int, "d8q01MladVladIsVictim");
	if(var_1263_int == 1)
		var_1261_bool = true;
	var_1261_bool = false;
}


// @pe
void func_10853(object var_242_object)
{
	@Trace("money3000 is given");
	object var_245_object;
	var_242_object = var_245_object;
	func_10335(var_245_object, 3000);
}


// @pe
void func_6758(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1081_object, object var_1082_object)
{
	var_0_bool = var_1082_object;
	var_3_object = false;
	if(1 != 0) {
		func_6822(var_1082_object, "Neutral");
		var_0_bool->SetMessage(520914); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1097_bool;
		func_11922(var_1097_bool, var_1081_object);
		if(!var_1097_bool) //@nz
			var_0_bool->AddReply(520917, 22135, 22134); //@t
		var_0_bool->AddReply(520915, -1, 22132); //@t
		goto Label_6792;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a6a";
	}
Label_6792:
	bool var_1106_bool;
	func_10509(var_1106_bool);
	if(var_1106_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_6821;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6821:
		return 0;

	}
	
}


void func_9829(void)
{
	string var_99_string;
	@GetProperty("loc", var_99_string);
	var_101_string = GlobalVars[0];
	var_99_string = var_101_string;
	GlobalVars[0] = var_101_string;
}


// @pe
void func_7275(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1394_object, object var_1395_object)
{
	var_0_bool = var_1395_object;
	var_3_object = false;
	if(1 != 0) {
		func_7339(var_1395_object, "Neutral");
		var_0_bool->SetMessage(520934); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1410_bool;
		func_11922(var_1410_bool, var_1394_object);
		if(!var_1410_bool) //@nz
			var_0_bool->AddReply(520935, 22153, 22152); //@t
		var_0_bool->AddReply(520939, -1, 22156); //@t
		goto Label_7309;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1c6f";
	}
Label_7309:
	bool var_1419_bool;
	func_10509(var_1419_bool);
	if(var_1419_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_7338;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_7338:
		return 0;

	}
	
}


// @pe
void func_11372(bool var_362_bool)
{
	int var_364_int;
	func_10296(var_364_int, "ood1MladVlad1");
	if(var_364_int == 0) {
		var_362_bool = true;
		return 0;
	}
	var_362_bool = false;
}


void func_9837(bool var_0_bool, object var_1_object)
{
	cvector var_120_cvector;
	@GetAnimationOffset(var_120_cvector, "all", "walk_stopl");
	cvector var_121_cvector;
	@GetAnimationOffset(var_121_cvector, "all", "walk_stopr");
	var_126_float = GetByIndex(var_120_cvector, 2);
	var_127_float = GetByIndex(var_121_cvector, 2);
	float var_130_float;
	var_132_float = GetByIndex(var_120_cvector, 2);
	func_10267(var_130_float, (var_132_float - ((var_126_float + var_127_float) / 2.0)));
	var_1_object = var_130_float + 40;
}


// @pe
void func_10863(void)
{
	@SetVariable("ood3MladVlad1", 1);
}


// @pe
void func_11888(bool var_376_bool)
{
	bool var_378_bool = false;
	bool var_379_bool = false;
	int var_380_int;
	func_10296(var_380_int, "d1q01");
	if(var_380_int != 0) {
		int var_384_int;
		func_10296(var_384_int, "d1q01");
		if(var_384_int != 1000)
			var_379_bool = true;
	}
	if(var_379_bool != 0) {
		int var_388_int;
		func_10296(var_388_int, "d1q01");
		if(var_388_int != -1)
			var_378_bool = true;
	}
	if(var_378_bool != 0) {
		var_376_bool = true;
		return 0;
	}
	var_376_bool = false;
}


void func_10354(object var_281_object, object var_282_object, int var_283_int)
{
	int var_287_int;
	var_282_object->GetItemID(var_287_int);
	int var_288_int;
	@GetInvItemProperty(var_288_int, var_287_int, "Category");
	bool var_289_bool;
	var_281_object->AddItem(var_289_bool, var_282_object, var_288_int, var_283_int);
	if(!var_289_bool) { //@nz
		var_281_object->DropItems(var_282_object, var_283_int);
	} else {
		int var_292_int; int var_293_int;
		var_287_int = var_292_int;
		var_283_int = var_293_int;
		func_10323(var_292_int, var_293_int);
	}
	
}


void func_10869(void)
{
	@SetVariable("d3q02", 2);
	object var_92_object;
	func_12262(var_92_object);
	object var_89_object;
	var_92_object = var_89_object;
	float var_103_float;
	func_10443(var_103_float);
	var_89_object->AddMark("d3q02MladVladGotoViktor", "pt_map_viktor", 0, 511384, var_103_float);
	func_12013();
}
EMIT "Stack[-1] = 0";


// @pe
void func_11384(bool var_422_bool)
{
	int var_424_int;
	func_10296(var_424_int, "ood1MladVlad2");
	if(var_424_int == 0) {
		var_422_bool = true;
		return 0;
	}
	var_422_bool = false;
}


// @pe
void func_11396(bool var_460_bool)
{
	int var_462_int;
	func_10296(var_462_int, "ood1MladVlad3");
	if(var_462_int == 0) {
		var_460_bool = true;
		return 0;
	}
	var_460_bool = false;
}


// @pe
void func_645(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_506_object, object var_507_object)
{
	var_0_bool = var_507_object;
	var_1_object = var_506_object;
	var_3_object = false;
	if(1 != 0) {
		func_727(var_507_object, "Neutral");
		var_0_bool->SetMessage(506929); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_522_bool = false;
		bool var_523_bool;
		func_11480(var_1_object);
		if(var_523_bool != 0) {
			bool var_529_bool;
			func_11456(var_1_object);
			if(var_529_bool != 0)
				var_522_bool = true;
		}
		if(var_522_bool != 0)
			var_0_bool->AddReply(506930, 7637, 7636); //@t
		bool var_538_bool;
		func_11468(var_1_object);
		if(var_538_bool != 0)
			var_0_bool->AddReply(533959, 10443, 35526); //@t
		var_0_bool->AddReply(507746, -1, 8547); //@t
		goto Label_697;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x289";
	}
Label_697:
	bool var_550_bool;
	func_10509(var_550_bool);
	if(var_550_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_726;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_726:
		return 0;

	}
	
}


// @pe
void func_9349(object var_2_object, string var_1535_string)
{
	bool var_1536_bool;
	func_10509(var_1536_bool);
	if(!var_1536_bool) //@nz
		return 0;
	if(var_1535_string == var_2_object)
		return 0;
	string var_1539_string; bool var_1540_bool;
	var_1535_string = var_1539_string;
	if(var_1535_string == "")
		var_1540_bool = false;
	else
		var_1540_bool = true;
	func_10214(var_1539_string, var_1540_bool);
	var_2_object = var_1535_string;
	
}


void func_10373(object var_276_object, string var_277_string, int var_278_int)
{
	object var_280_object;
	@CreateInvItem(var_280_object);
	var_280_object->SetItemName(var_277_string);
	object var_281_object; object var_282_object; int var_283_int;
	var_276_object = var_281_object;
	var_280_object = var_282_object;
	var_278_int = var_283_int;
	func_10354(var_281_object, var_282_object, var_283_int);
}
EMIT "Stack[-1] = 0";


void func_10892(void)
{
	object var_151_object;
	func_12262(var_151_object);
	object var_150_object;
	var_151_object = var_150_object;
	float var_156_float;
	func_10443(var_156_float);
	var_150_object->AddMark("d3q02MladVladGotoButcher", "pt_gmap_r7_house2_01", 0, 524631, var_156_float);
	func_12026();
}
EMIT "Stack[-1] = 0";


// @pe
void func_11408(bool var_1149_bool)
{
	int var_1151_int;
	func_10296(var_1151_int, "ood8MladVlad6");
	if(var_1151_int == 0) {
		var_1149_bool = true;
		return 0;
	}
	var_1149_bool = false;
}


void func_145(void)
{
	@Stop();
}


// @pe
void func_11922(bool var_661_bool, object var_662_object)
{
	object var_664_object;
	var_662_object = var_664_object;
	func_11942(var_664_object);
	bool var_663_bool;
	if(var_663_bool != 0) {
		var_661_bool = true;
		return 0;
	}
	var_661_bool = false;
}


// @pe
void func_10386(bool var_198_bool, object var_199_object, float var_200_float)
{
	if(!var_199_object) { //@nz
		var_198_bool = false;
		return 0;
	}
	if(var_200_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_200_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_205_float;
		var_200_float = var_205_float;
		func_10421(var_205_float);
		bool var_209_bool; object var_210_object; float var_212_float;
		var_199_object = var_210_object;
		var_200_float = var_212_float;
		func_9909(var_209_bool, var_210_object, "reputation", var_212_float, (float)0, (float)1);
		var_198_bool = true;
		return 0;

	}
	
	var_198_bool = false;
}


void func_148(object var_100_object)
{
	bool var_102_bool;
	@WaitForAnimEnd(var_102_bool);
	if(!var_102_bool) { //@nz
	}
	object var_104_object;
	var_100_object = var_104_object;
	func_9957(var_104_object);
	@Sleep(6);
}


// @pe
void func_1173(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_586_object, object var_587_object)
{
	var_0_bool = var_587_object;
	var_1_object = var_586_object;
	var_3_object = false;
	if(1 != 0) {
		func_1313(var_587_object, "Neutral");
		var_0_bool->SetMessage(510212); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_602_bool = false;
		bool var_603_bool;
		func_11504(var_1_object);
		if(var_603_bool != 0) {
			bool var_609_bool;
			func_11516(var_1_object);
			if(var_609_bool != 0)
				var_602_bool = true;
		}
		if(var_602_bool != 0)
			var_0_bool->AddReply(510213, 11260, 11259); //@t
		bool var_618_bool = false;
		bool var_619_bool;
		func_11312(var_1_object);
		if(var_619_bool != 0) {
			bool var_625_bool;
			func_11492(var_1_object);
			if(!var_625_bool) //@nz
				var_618_bool = true;
		}
		if(var_618_bool != 0)
			var_0_bool->AddReply(510302, 11359, 11358); //@t
		bool var_635_bool = true;
		bool var_636_bool = false;
		bool var_637_bool;
		func_11528(var_1_object);
		if(var_637_bool != 0) {
			bool var_643_bool;
			func_11444(var_1_object);
			if(var_643_bool != 0)
				var_636_bool = true;
		}
		if(var_636_bool != 1) {
			bool var_649_bool = false;
			bool var_650_bool;
			func_11540(var_1_object);
			if(var_650_bool != 0) {
				bool var_656_bool;
				func_11444(var_1_object);
				if(var_656_bool != 0)
					var_649_bool = true;
			}
			if(var_649_bool != 1)
				var_635_bool = false;
		}
		if(var_635_bool != 0)
			var_0_bool->AddReply(510334, 11395, 11394); //@t
		bool var_661_bool;
		func_11922(var_661_bool, var_1_object);
		if(!var_661_bool) //@nz
			var_0_bool->AddReply(520897, 22115, 22114); //@t
		var_0_bool->AddReply(520896, -1, 22113); //@t
		goto Label_1283;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x499";
	}
Label_1283:
	bool var_680_bool;
	func_10509(var_680_bool);
	if(var_680_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1312;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1312:
		return 0;

	}
	
}


// @pe
void func_2200(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_716_object, object var_717_object)
{
	var_0_bool = var_717_object;
	var_1_object = var_716_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_723_bool = false;
		bool var_724_bool;
		func_11576(var_1_object);
		if(var_724_bool != 0) {
			bool var_730_bool;
			func_11552(var_1_object);
			if(!var_730_bool) //@nz
				var_723_bool = true;
		}
		if(var_723_bool != 0) {
			object var_737_object; object var_738_object;
			var_737_object = var_1_object;
			var_738_object = var_0_bool;
			func_10659();
			func_2337(var_717_object, "Neutral");
			var_0_bool->SetMessage(511395); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(511396, 12594, 12593); //@t
		} else {
					func_2337(var_717_object, "Neutral");
					var_0_bool->SetMessage(510814); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_763_bool = false;
					bool var_764_bool;
					func_11564(var_1_object);
					if(var_764_bool != 0) {
						bool var_770_bool;
						func_11552(var_1_object);
						if(var_770_bool != 0)
							var_763_bool = true;
					}
					if(var_763_bool != 0)
						var_0_bool->AddReply(510815, 11956, 11955); //@t
					bool var_775_bool = false;
					bool var_776_bool;
					func_11600(var_1_object);
					if(var_776_bool != 0) {
						bool var_782_bool;
						func_11588(var_1_object);
						if(var_782_bool != 0)
							var_775_bool = true;
					}
					if(var_775_bool != 0)
						var_0_bool->AddReply(511862, 37886, 13075); //@t
					bool var_791_bool;
					func_11922(var_791_bool, var_1_object);
					if(!var_791_bool) //@nz
						var_0_bool->AddReply(520901, 22119, 22118); //@t
					var_0_bool->AddReply(511408, -1, 12605); //@t
		}
	}
	for(;;) {
		bool var_753_bool;
		func_10509(var_753_bool);
		if(var_753_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10198(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2336;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2336:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x89c";


// @pe
void func_11932(bool var_214_bool, object var_215_object)
{
	object var_217_object;
	var_215_object = var_217_object;
	bool var_216_bool;
	func_11954(var_216_bool, var_217_object);
	if(var_216_bool != 0) {
		var_214_bool = true;
		return 0;
	}
	var_214_bool = false;
}


// @pe
void func_11420(bool var_1293_bool)
{
	int var_1295_int;
	func_10296(var_1295_int, "d8q04");
	if(var_1295_int == 2)
		var_1293_bool = true;
	var_1293_bool = false;
}


void func_9884(cvector var_138_cvector)
{
	cvector var_140_cvector;
	@GetPosition(var_140_cvector);
	var_140_cvector = var_138_cvector;
}


// @pe
void func_10911(void)
{
	@SetVariable("ood4MladVlad1", 1);
}


void func_9889(float var_86_float, object var_87_object)
{
	cvector var_91_cvector;
	@GetPosition(var_91_cvector);
	cvector var_92_cvector;
	var_87_object->GetPosition(var_92_cvector);
	var_86_float = (var_92_cvector - var_91_cvector) | (var_92_cvector - var_91_cvector);
}


void func_10917(void)
{
	@SetVariable("d4q01", 3);
	object var_199_object;
	func_12262(var_199_object);
	object var_196_object;
	var_199_object = var_196_object;
	float var_204_float;
	func_10443(var_204_float);
	var_196_object->AddMark("d4q01MladVladGotoBigVlad", "pt_map_bigvlad", 1, 511507, var_204_float);
	func_12039();
}
EMIT "Stack[-1] = 0";


// @pe
void func_6822(object var_2_object, string var_1088_string)
{
	bool var_1089_bool;
	func_10509(var_1089_bool);
	if(!var_1089_bool) //@nz
		return 0;
	if(var_1088_string == var_2_object)
		return 0;
	string var_1092_string; bool var_1093_bool;
	var_1088_string = var_1092_string;
	if(var_1088_string == "")
		var_1093_bool = false;
	else
		var_1093_bool = true;
	func_10214(var_1092_string, var_1093_bool);
	var_2_object = var_1088_string;
	
}


void func_11942(bool var_663_bool)
{
	int var_669_int;
	func_10448(var_669_int);
	int var_667_int;
	var_669_int = var_667_int;
	int var_668_int;
	@GetVariable(("RMap" + var_667_int), var_668_int);
	var_663_bool = var_668_int != 0;
}


// @pe
void func_11432(bool var_1471_bool)
{
	int var_1473_int;
	func_10296(var_1473_int, "d11q05");
	if(var_1473_int == 2)
		var_1471_bool = true;
	var_1471_bool = false;
}


void func_9897(bool var_217_bool, object var_218_object, string var_219_string)
{
	var_224_bool = IsFuncExist(var_218_object, "HasProperty", 2);
	if(!var_224_bool) { //@nz
		var_217_bool = false;
		return 2;
	}
	bool var_221_bool;
	var_218_object->HasProperty(var_219_string, var_221_bool);
	var_221_bool = var_217_bool;
}


// @pe
void func_7339(object var_2_object, string var_1401_string)
{
	bool var_1402_bool;
	func_10509(var_1402_bool);
	if(!var_1402_bool) //@nz
		return 0;
	if(var_1401_string == var_2_object)
		return 0;
	string var_1405_string; bool var_1406_bool;
	var_1401_string = var_1405_string;
	if(var_1401_string == "")
		var_1406_bool = false;
	else
		var_1406_bool = true;
	func_10214(var_1405_string, var_1406_bool);
	var_2_object = var_1401_string;
	
}


void func_11954(bool var_216_bool, object var_217_object)
{
	int var_219_int;
	var_217_object->GetProperty("money", var_219_int);
	var_216_bool = var_219_int >= 1000;
}


// @pe
void func_11444(bool var_643_bool)
{
	int var_645_int;
	func_10296(var_645_int, "ood3MladVlad3");
	if(var_645_int == 0) {
		var_643_bool = true;
		return 0;
	}
	var_643_bool = false;
}


void func_10421(float var_205_float)
{
	object var_207_object;
	@CreateFloatVector(var_207_object);
	var_207_object->add(var_205_float);
	@SendWorldWndMessage(16, var_207_object);
}
EMIT "Stack[-1] = 0";


void func_9909(bool var_209_bool, object var_210_object, string var_211_string, float var_212_float, float var_213_float, float var_214_float)
{
	object var_218_object;
	var_210_object = var_218_object;
	string var_219_string;
	var_211_string = var_219_string;
	bool var_217_bool;
	func_9897(var_217_bool, var_218_object, var_219_string);
	if(!var_217_bool) //@nz
		var_209_bool = false;
	float var_216_float;
	var_210_object->GetProperty(var_211_string, var_216_float);
	float var_227_float; float var_229_float; float var_230_float;
	var_213_float = var_229_float;
	var_214_float = var_230_float;
	func_10275(var_227_float, (var_216_float + var_212_float), var_229_float, var_230_float);
	var_210_object->SetProperty(var_211_string, var_227_float);
	var_209_bool = true;
}


void func_11961(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 685, 2, 534500);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_12234(var_87_bool, var_88_object, 682);
}
EMIT "Stack[-1] = 0";


void func_10940(void)
{
	@SetVariable("d4q01_subquest", 1);
	object var_219_object;
	func_12262(var_219_object);
	object var_216_object;
	var_219_object = var_216_object;
	float var_224_float;
	func_10443(var_224_float);
	var_216_object->AddMark("d4q01MladVladGotoOspina", "pt_map_ospina", 1, 511503, var_224_float);
}
EMIT "Stack[-1] = 0";


void func_10431(bool var_185_bool, string var_186_string, string var_187_string)
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
void func_11456(bool var_529_bool)
{
	int var_531_int;
	func_10296(var_531_int, "d2q03");
	if(var_531_int == 1)
		var_529_bool = true;
	var_529_bool = false;
}


void func_193(void)
{
	@StopGroup0();
	@StopAnimation();
}


// @pe
void func_4289(object var_2_object, string var_974_string)
{
	bool var_975_bool;
	func_10509(var_975_bool);
	if(!var_975_bool) //@nz
		return 0;
	if(var_974_string == var_2_object)
		return 0;
	string var_978_string; bool var_979_bool;
	var_974_string = var_978_string;
	if(var_974_string == "")
		var_979_bool = false;
	else
		var_979_bool = true;
	func_10214(var_978_string, var_979_bool);
	var_2_object = var_974_string;
	
}


void func_198(int var_184_int)
{
	string var_192_string; string var_194_string; int var_195_int; int var_196_int; int var_197_int; int var_198_int;
	if(var_184_int != 0)
		var_192_string = "ptidle" + var_184_int;
	else
		var_192_string = "ptidle";
	bool var_193_bool;
	@HasProperty(var_192_string, var_193_bool);
	if(var_193_bool != 0) {
		@GetProperty(var_192_string, var_194_string);
		int var_202_int; string var_203_string;
		var_194_string = var_203_string;
		func_264(var_202_int, var_203_string);
		var_202_int = var_195_int;
		@irand(var_196_int, var_195_int);
		string var_217_string; string var_218_string; int var_219_int;
		var_194_string = var_218_string;
		var_196_int = var_219_int;
		func_256(var_217_string, var_218_string, var_219_int);
		@PlayAnimation("all", var_217_string);
		@WaitForAnimEnd();
	} else {
		int var_220_int;
		func_10470(var_220_int);
		var_220_int = var_197_int;
		if(var_197_int == 0) goto Label_246;
		@irand(var_198_int, var_197_int);
		string var_235_string; int var_236_int;
		var_198_int = var_236_int;
		func_10463(var_235_string, var_236_int);
		@PlayAnimation("all", var_235_string);
		@WaitForAnimEnd();

	}
Label_246:
	
}


void func_11974(void)
{
	object var_178_object;
	@CreateDiaryEntry(var_178_object, 620, 1, 532194);
	bool var_182_bool; object var_183_object;
	var_178_object = var_183_object;
	func_12234(var_182_bool, var_183_object, 2);
}
EMIT "Stack[-1] = 0";


void func_9931(object var_224_object, string var_225_string, int var_226_int)
{
	int var_228_int;
	var_224_object->GetProperty(var_225_string, var_228_int);
	var_224_object->SetProperty(var_225_string, (var_228_int + var_226_int));
}


// @pe
void func_11468(bool var_538_bool)
{
	int var_540_int;
	func_10296(var_540_int, "ood2MladVlad1");
	if(var_540_int == 0) {
		var_538_bool = true;
		return 0;
	}
	var_538_bool = false;
}


void func_10443(float var_97_float)
{
	float var_99_float;
	@GetGameTime(var_99_float);
	var_99_float = var_97_float;
}


// @pe
void func_10960(void)
{
	@SetVariable("ood4MladVlad2", 1);
}


void func_10448(int var_222_int)
{
	float var_224_float;
	@GetGameTime(var_224_float);
	var_222_int = 1 + (var_224_float / 24);
}


void func_9938(bool var_165_bool, cvector var_166_cvector)
{
	cvector var_170_cvector;
	@GetPosition(var_170_cvector);
	cvector var_171_cvector = var_166_cvector - var_170_cvector;
	var_173_float = GetByIndex(var_171_cvector, 0);
	var_174_float = GetByIndex(var_171_cvector, 2);
	bool var_172_bool;
	@Rotate(var_173_float, var_174_float, var_172_bool);
	var_172_bool = var_165_bool;
}


void func_11987(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 37, 2, 512119);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_12234(var_105_bool, var_106_object, -1);
}
EMIT "Stack[-1] = 0";


void func_10966(void)
{
	object var_88_object;
	func_12262(var_88_object);
	object var_87_object;
	var_88_object = var_87_object;
	float var_99_float;
	func_10443(var_99_float);
	var_87_object->AddMark("d4q02MladVladGotoAnna", "pt_map_anna", 0, 511526, var_99_float);
	float var_106_float;
	func_10443(var_106_float);
	var_87_object->AddMark("d4q02MladVladGotoJulia", "pt_map_julia", 0, 511524, var_106_float);
	float var_111_float;
	func_10443(var_111_float);
	var_87_object->AddMark("d4q02MladVladGotoLara", "pt_map_lara", 0, 511525, var_111_float);
	func_12052();
	func_12065();
	object var_143_object;
	func_10312(var_143_object, "quest_d4_02");
}
EMIT "Stack[-1] = 0";


// @pe
void func_727(object var_2_object, string var_513_string)
{
	bool var_514_bool;
	func_10509(var_514_bool);
	if(!var_514_bool) //@nz
		return 0;
	if(var_513_string == var_2_object)
		return 0;
	string var_517_string; bool var_518_bool;
	var_513_string = var_517_string;
	if(var_513_string == "")
		var_518_bool = false;
	else
		var_518_bool = true;
	func_10214(var_517_string, var_518_bool);
	var_2_object = var_513_string;
	
}


// @pe
void func_11480(bool var_523_bool)
{
	int var_525_int;
	func_10296(var_525_int, "ood2MladVlad2");
	if(var_525_int == 0) {
		var_523_bool = true;
		return 0;
	}
	var_523_bool = false;
}


// @pe
void func_10457(bool var_326_bool, int var_327_int)
{
	int var_328_int;
	func_10448(var_328_int);
	var_326_bool = var_328_int == var_327_int;
}


void func_9948(bool var_78_bool, object var_79_object)
{
	cvector var_81_cvector;
	var_79_object->GetPosition(var_81_cvector);
	bool var_82_bool; cvector var_83_cvector;
	var_81_cvector = var_83_cvector;
	func_9938(var_82_bool, var_83_cvector);
	var_82_bool = var_78_bool;
}


void func_4828(bool var_0_bool, int var_1118_int, object var_1119_object)
{
	var_0_bool = var_1119_object;
	bool var_1129_bool; object var_1130_object;
	var_1119_object = var_1130_object;
	func_9973(var_1129_bool, var_1130_object, 70.0);
	if(!var_1129_bool) { //@nz
		var_1118_int = -2;
		return 8;
	}
	object var_1125_object;
	@CreateDialog(var_1125_object);
	int var_1133_int;
	func_10503(var_1133_int);
	var_1125_object->SetNPCName(var_1133_int);
	int var_1134_int;
	func_10501(var_1134_int);
	var_1125_object->SetNPCDescription(var_1134_int);
	string var_1135_string;
	func_10505(var_1135_string);
	var_1125_object->SetPhoto(var_1135_string);
	string var_1136_string;
	func_10507(var_1136_string);
	var_1125_object->SetPhoto2(var_1136_string);
	int var_1137_int;
	func_12312(var_1137_int);
	var_1125_object->SetPlayerName(var_1137_int);
	bool var_1126_bool;
	@IsOverrideActive(var_1126_bool);
	if(var_1126_bool != 0) {
		var_1118_int = -2;
		return 8;
	}
	@DoDialog(var_1125_object);
	bool var_1139_bool; object var_1140_object;
	object var_1141_object;
	func_10251(var_1141_object);
	var_1141_object = var_1140_object;
	func_10060(var_1139_bool, var_1140_object);
	object var_1142_object; object var_1143_object;
	var_1119_object = var_1142_object;
	var_1125_object = var_1143_object;
	TaskCall(17);
	func_4909(var_1144_object, var_1145_object, var_1146_string, var_1147_bool, var_1142_object, var_1143_object);
	TaskReturn();
	bool var_1128_bool;
	var_1125_object->IsDialogEnd(var_1128_bool);
	
	for(;;) {
		var_1305_bool = !var_1128_bool; //@nz
		if(var_1305_bool == 0) goto Label_4898;
		@sync();
		var_1125_object->IsDialogEnd(var_1128_bool);
	}
	
Label_4898:
	object var_1306_object;
	var_1119_object = var_1306_object;
	func_10042();
	@StopDialog(var_1125_object);
	var_1125_object->GetReturnValue(-1);
	int var_1127_int = var_1118_int;
}
EMIT "Stack[-4] = 0";


void func_10463(string var_226_string, int var_227_int)
{
	string var_229_string = "idle";
	if(var_227_int != 0)
		var_229_string += var_227_int;
	var_229_string = var_226_string;
}


void func_12000(void)
{
	object var_124_object;
	@CreateDiaryEntry(var_124_object, 681, 2, 534423);
	bool var_128_bool; object var_129_object;
	var_124_object = var_129_object;
	func_12234(var_128_bool, var_129_object, 37);
}
EMIT "Stack[-1] = 0";


void func_3298(bool var_0_bool, int var_804_int, object var_805_object)
{
	var_0_bool = var_805_object;
	bool var_815_bool; object var_816_object;
	var_805_object = var_816_object;
	func_9973(var_815_bool, var_816_object, 70.0);
	if(!var_815_bool) { //@nz
		var_804_int = -2;
		return 8;
	}
	object var_811_object;
	@CreateDialog(var_811_object);
	int var_819_int;
	func_10503(var_819_int);
	var_811_object->SetNPCName(var_819_int);
	int var_820_int;
	func_10501(var_820_int);
	var_811_object->SetNPCDescription(var_820_int);
	string var_821_string;
	func_10505(var_821_string);
	var_811_object->SetPhoto(var_821_string);
	string var_822_string;
	func_10507(var_822_string);
	var_811_object->SetPhoto2(var_822_string);
	int var_823_int;
	func_12312(var_823_int);
	var_811_object->SetPlayerName(var_823_int);
	bool var_812_bool;
	@IsOverrideActive(var_812_bool);
	if(var_812_bool != 0) {
		var_804_int = -2;
		return 8;
	}
	@DoDialog(var_811_object);
	bool var_825_bool; object var_826_object;
	object var_827_object;
	func_10251(var_827_object);
	var_827_object = var_826_object;
	func_10060(var_825_bool, var_826_object);
	object var_828_object; object var_829_object;
	var_805_object = var_828_object;
	var_811_object = var_829_object;
	TaskCall(13);
	func_3379(var_830_object, var_831_object, var_832_string, var_833_bool, var_828_object, var_829_object);
	TaskReturn();
	bool var_814_bool;
	var_811_object->IsDialogEnd(var_814_bool);
	
	for(;;) {
		var_933_bool = !var_814_bool; //@nz
		if(var_933_bool == 0) goto Label_3368;
		@sync();
		var_811_object->IsDialogEnd(var_814_bool);
	}
	
Label_3368:
	object var_934_object;
	var_805_object = var_934_object;
	func_10042();
	@StopDialog(var_811_object);
	var_811_object->GetReturnValue(-1);
	int var_813_int = var_804_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_11492(bool var_625_bool)
{
	int var_627_int;
	func_10296(var_627_int, "d3q01");
	if(var_627_int == 0) {
		var_625_bool = true;
		return 0;
	}
	var_625_bool = false;
}


void func_9957(object var_104_object)
{
	cvector var_108_cvector;
	var_104_object->GetPosition(var_108_cvector);
	cvector var_109_cvector;
	@GetPosition(var_109_cvector);
	cvector var_110_cvector = var_108_cvector - var_109_cvector;
	var_111_float = GetByIndex(var_110_cvector, 0);
	var_112_float = GetByIndex(var_110_cvector, 2);
	@RotateAsync(var_111_float, var_112_float);
}


void func_10470(int var_220_int)
{
	int var_223_int; bool var_224_bool;
	var_223_int = 0;
	
	for(;;) {
		string var_226_string; int var_227_int;
		var_223_int = var_227_int;
		func_10463(var_226_string, var_227_int);
		@HasAnimation(var_224_bool, "all", var_226_string);
		if(!var_224_bool) //@nz
			break;
		var_223_int += 1;
	}
	var_223_int = var_220_int;
}


void func_7916(bool var_0_bool, int var_329_int, object var_330_object)
{
	var_0_bool = var_330_object;
	bool var_340_bool; object var_341_object;
	var_330_object = var_341_object;
	func_9973(var_340_bool, var_341_object, 70.0);
	if(!var_340_bool) { //@nz
		var_329_int = -2;
		return 8;
	}
	object var_336_object;
	@CreateDialog(var_336_object);
	int var_344_int;
	func_10503(var_344_int);
	var_336_object->SetNPCName(var_344_int);
	int var_345_int;
	func_10501(var_345_int);
	var_336_object->SetNPCDescription(var_345_int);
	string var_346_string;
	func_10505(var_346_string);
	var_336_object->SetPhoto(var_346_string);
	string var_347_string;
	func_10507(var_347_string);
	var_336_object->SetPhoto2(var_347_string);
	int var_348_int;
	func_12312(var_348_int);
	var_336_object->SetPlayerName(var_348_int);
	bool var_337_bool;
	@IsOverrideActive(var_337_bool);
	if(var_337_bool != 0) {
		var_329_int = -2;
		return 8;
	}
	@DoDialog(var_336_object);
	bool var_350_bool; object var_351_object;
	object var_352_object;
	func_10251(var_352_object);
	var_352_object = var_351_object;
	func_10060(var_350_bool, var_351_object);
	object var_353_object; object var_354_object;
	var_330_object = var_353_object;
	var_336_object = var_354_object;
	TaskCall(27);
	func_7997(var_355_object, var_356_object, var_357_string, var_358_bool, var_353_object, var_354_object);
	TaskReturn();
	bool var_339_bool;
	var_336_object->IsDialogEnd(var_339_bool);
	
	for(;;) {
		var_478_bool = !var_339_bool; //@nz
		if(var_478_bool == 0) goto Label_7986;
		@sync();
		var_336_object->IsDialogEnd(var_339_bool);
	}
	
Label_7986:
	object var_479_object;
	var_330_object = var_479_object;
	func_10042();
	@StopDialog(var_336_object);
	var_336_object->GetReturnValue(-1);
	int var_338_int = var_329_int;
}
EMIT "Stack[-4] = 0";


void func_12013(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 78, 2, 512160);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_12234(var_111_bool, var_112_object, 26);
}
EMIT "Stack[-1] = 0";


void func_9968(bool var_112_bool)
{
	bool var_114_bool;
	@IsLoaded(var_114_bool);
	var_114_bool = var_112_bool;
}


// @pe
void func_11504(bool var_603_bool)
{
	int var_605_int;
	func_10296(var_605_int, "d3q02");
	if(var_605_int == 1)
		var_603_bool = true;
	var_603_bool = false;
}


void func_9973(bool var_106_bool, object var_107_object, float var_108_float)
{
	cvector var_119_cvector; bool var_126_bool;
	var_107_object->GetPosition(var_119_cvector);
	float var_118_float;
	var_107_object->GetEyesHeight(var_118_float);
	var_127_float = GetByIndex(var_119_cvector, 1);
	SetByIndex(var_119_cvector, 1) = (var_127_float + var_118_float);
	cvector var_120_cvector;
	@GetPosition(var_120_cvector);
	@GetEyesHeight(var_118_float);
	var_128_float = GetByIndex(var_120_cvector, 1);
	SetByIndex(var_120_cvector, 1) = (var_128_float + var_118_float);
	cvector var_121_cvector = var_119_cvector - var_120_cvector;
	var_129_float = GetByIndex(var_121_cvector, 1);
	SetByIndex(var_121_cvector, 1) = (float)0;
	var_131_float = sqrt(var_121_cvector | var_121_cvector);
	var_121_cvector /= var_131_float;
	cvector var_122_cvector = -var_121_cvector;
	cvector var_133_cvector;
	func_10257(var_133_cvector, (var_122_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_123_cvector = ((var_121_cvector * var_108_float) + (var_133_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_125_bool;
	@IsOverrideActive(var_125_bool);
	if(var_125_bool != 0)
		var_106_bool = false;
	@StopWorld();
	@CameraTransit((var_120_cvector + var_123_cvector), var_122_cvector, true);
	var_147_float = GetByIndex(var_123_cvector, 0);
	var_148_float = GetByIndex(var_123_cvector, 2);
	@Rotate(var_147_float, var_148_float);
	bool var_149_bool;
	func_10509(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		@HasAnimationTrack(var_126_bool, "head");
		if(var_126_bool == 0) goto Label_10036;
		@LookAsyncCamera("head");
	}
Label_10036:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_106_bool = true;
	
}


// @pe
void func_10487(string var_102_string, int var_103_int)
{
	if(var_103_int == 0) {
		var_107_string = GlobalVars[0];
		var_102_string = "pt_" + var_107_string;
	} else {
		var_109_string = GlobalVars[0];
		var_102_string = ("pt_" + var_109_string) + var_103_int;
	}
	
}


void func_12026(void)
{
	object var_158_object;
	@CreateDiaryEntry(var_158_object, 79, 2, 512161);
	bool var_162_bool; object var_163_object;
	var_158_object = var_163_object;
	func_12234(var_162_bool, var_163_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11516(bool var_609_bool)
{
	int var_611_int;
	func_10296(var_611_int, "ood3MladVlad1");
	if(var_611_int == 0) {
		var_609_bool = true;
		return 0;
	}
	var_609_bool = false;
}


// @pe
void func_256(string var_209_string, string var_210_string, int var_211_int)
{
	if(var_211_int == 0) {
	} else {
		var_209_string += var_211_int;
	}
	
}


// @pe
void func_11010(void)
{
	@SetVariable("ood4MladVlad3", 1);
}


void func_10501(int var_155_int)
{
	var_155_int = 515547;
}


void func_10503(int var_154_int)
{
	var_154_int = 502872;
}


void func_264(int var_202_int, string var_203_string)
{
	int var_206_int; bool var_207_bool;
	var_206_int = 0;
	
	for(;;) {
		string var_209_string; string var_210_string; int var_211_int;
		var_203_string = var_210_string;
		var_206_int = var_211_int;
		func_256(var_209_string, var_210_string, var_211_int);
		@HasAnimation(var_207_bool, "all", var_209_string);
		if(!var_207_bool) //@nz
			break;
		var_206_int += 1;
	}
	var_206_int = var_202_int;
}


void func_10505(string var_156_string)
{
	var_156_string = "ui/NPC_MladVlad.png";
}


// @pe
void func_11528(bool var_637_bool)
{
	int var_639_int;
	func_10296(var_639_int, "d3q02");
	if(var_639_int == 3)
		var_637_bool = true;
	var_637_bool = false;
}


void func_10507(string var_157_string)
{
	var_157_string = "ui/NPC_MladVlad_b.png";
}


void func_11016(void)
{
	object var_88_object;
	func_12262(var_88_object);
	object var_87_object;
	var_88_object = var_87_object;
	float var_99_float;
	func_10443(var_99_float);
	var_87_object->AddMark("d6q02MladVladGotoBigVlad", "pt_map_bigvlad", 0, 515378, var_99_float);
	float var_106_float;
	func_10443(var_106_float);
	var_87_object->AddMark("d6q02MladVladGotoBigVladSelf", "pt_map_mladvlad", 0, 515379, var_106_float);
	func_12104();
	func_12130();
	object var_138_object;
	func_10301(var_138_object, "quest_d6_02");
	bool var_146_bool;
	func_10431(var_146_bool, "quest_d6_02", "place_trigger");
}
EMIT "Stack[-1] = 0";


void func_10509(bool var_149_bool)
{
	var_149_bool = true;
}


void func_12039(void)
{
	object var_206_object;
	@CreateDiaryEntry(var_206_object, 137, 1, 515323);
	bool var_210_bool; object var_211_object;
	var_206_object = var_211_object;
	func_12234(var_210_bool, var_211_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10511(object var_88_object)
{
	@Trace("money 4000 is given");
	object var_91_object;
	var_88_object = var_91_object;
	func_10335(var_91_object, 4000);
}


// @pe
void func_11540(bool var_650_bool)
{
	int var_652_int;
	func_10296(var_652_int, "d3q02");
	if(var_652_int == 4)
		var_650_bool = true;
	var_650_bool = false;
}


void func_12052(void)
{
	object var_113_object;
	@CreateDiaryEntry(var_113_object, 21, 2, 503361);
	bool var_117_bool; object var_118_object;
	var_113_object = var_118_object;
	func_12234(var_117_bool, var_118_object, -1);
}
EMIT "Stack[-1] = 0";


void func_6933(bool var_0_bool, int var_1309_int, object var_1310_object)
{
	var_0_bool = var_1310_object;
	bool var_1320_bool; object var_1321_object;
	var_1310_object = var_1321_object;
	func_9973(var_1320_bool, var_1321_object, 70.0);
	if(!var_1320_bool) { //@nz
		var_1309_int = -2;
		return 8;
	}
	object var_1316_object;
	@CreateDialog(var_1316_object);
	int var_1324_int;
	func_10503(var_1324_int);
	var_1316_object->SetNPCName(var_1324_int);
	int var_1325_int;
	func_10501(var_1325_int);
	var_1316_object->SetNPCDescription(var_1325_int);
	string var_1326_string;
	func_10505(var_1326_string);
	var_1316_object->SetPhoto(var_1326_string);
	string var_1327_string;
	func_10507(var_1327_string);
	var_1316_object->SetPhoto2(var_1327_string);
	int var_1328_int;
	func_12312(var_1328_int);
	var_1316_object->SetPlayerName(var_1328_int);
	bool var_1317_bool;
	@IsOverrideActive(var_1317_bool);
	if(var_1317_bool != 0) {
		var_1309_int = -2;
		return 8;
	}
	@DoDialog(var_1316_object);
	bool var_1330_bool; object var_1331_object;
	object var_1332_object;
	func_10251(var_1332_object);
	var_1332_object = var_1331_object;
	func_10060(var_1330_bool, var_1331_object);
	object var_1333_object; object var_1334_object;
	var_1310_object = var_1333_object;
	var_1316_object = var_1334_object;
	TaskCall(21);
	func_7014(var_1335_object, var_1336_object, var_1337_string, var_1338_bool, var_1333_object, var_1334_object);
	TaskReturn();
	bool var_1319_bool;
	var_1316_object->IsDialogEnd(var_1319_bool);
	
	for(;;) {
		var_1366_bool = !var_1319_bool; //@nz
		if(var_1366_bool == 0) goto Label_7003;
		@sync();
		var_1316_object->IsDialogEnd(var_1319_bool);
	}
	
Label_7003:
	object var_1367_object;
	var_1310_object = var_1367_object;
	func_10042();
	@StopDialog(var_1316_object);
	var_1316_object->GetReturnValue(-1);
	int var_1318_int = var_1309_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_10521(object var_167_object)
{
	@Trace("money20000 is given");
	object var_170_object;
	var_167_object = var_170_object;
	func_10335(var_170_object, 20000);
}


void func_282(bool var_0_bool, int var_95_int, object var_96_object)
{
	var_0_bool = var_96_object;
	bool var_106_bool; object var_107_object;
	var_96_object = var_107_object;
	func_9973(var_106_bool, var_107_object, 70.0);
	if(!var_106_bool) { //@nz
		var_95_int = -2;
		return 8;
	}
	object var_102_object;
	@CreateDialog(var_102_object);
	int var_154_int;
	func_10503(var_154_int);
	var_102_object->SetNPCName(var_154_int);
	int var_155_int;
	func_10501(var_155_int);
	var_102_object->SetNPCDescription(var_155_int);
	string var_156_string;
	func_10505(var_156_string);
	var_102_object->SetPhoto(var_156_string);
	string var_157_string;
	func_10507(var_157_string);
	var_102_object->SetPhoto2(var_157_string);
	int var_158_int;
	func_12312(var_158_int);
	var_102_object->SetPlayerName(var_158_int);
	bool var_103_bool;
	@IsOverrideActive(var_103_bool);
	if(var_103_bool != 0) {
		var_95_int = -2;
		return 8;
	}
	@DoDialog(var_102_object);
	bool var_167_bool; object var_168_object;
	object var_169_object;
	func_10251(var_169_object);
	var_169_object = var_168_object;
	func_10060(var_167_bool, var_168_object);
	object var_262_object; object var_263_object;
	var_96_object = var_262_object;
	var_102_object = var_263_object;
	TaskCall(5);
	func_363(var_264_object, var_265_object, var_266_string, var_267_bool, var_262_object, var_263_object);
	TaskReturn();
	bool var_105_bool;
	var_102_object->IsDialogEnd(var_105_bool);
	
	for(;;) {
		var_316_bool = !var_105_bool; //@nz
		if(var_316_bool == 0) goto Label_352;
		@sync();
		var_102_object->IsDialogEnd(var_105_bool);
	}
	
Label_352:
	object var_317_object;
	var_96_object = var_317_object;
	func_10042();
	@StopDialog(var_102_object);
	var_102_object->GetReturnValue(-1);
	int var_104_int = var_95_int;
}
EMIT "Stack[-4] = 0";


void func_7455(bool var_0_bool, int var_1431_int, object var_1432_object)
{
	var_0_bool = var_1432_object;
	bool var_1442_bool; object var_1443_object;
	var_1432_object = var_1443_object;
	func_9973(var_1442_bool, var_1443_object, 70.0);
	if(!var_1442_bool) { //@nz
		var_1431_int = -2;
		return 8;
	}
	object var_1438_object;
	@CreateDialog(var_1438_object);
	int var_1446_int;
	func_10503(var_1446_int);
	var_1438_object->SetNPCName(var_1446_int);
	int var_1447_int;
	func_10501(var_1447_int);
	var_1438_object->SetNPCDescription(var_1447_int);
	string var_1448_string;
	func_10505(var_1448_string);
	var_1438_object->SetPhoto(var_1448_string);
	string var_1449_string;
	func_10507(var_1449_string);
	var_1438_object->SetPhoto2(var_1449_string);
	int var_1450_int;
	func_12312(var_1450_int);
	var_1438_object->SetPlayerName(var_1450_int);
	bool var_1439_bool;
	@IsOverrideActive(var_1439_bool);
	if(var_1439_bool != 0) {
		var_1431_int = -2;
		return 8;
	}
	@DoDialog(var_1438_object);
	bool var_1452_bool; object var_1453_object;
	object var_1454_object;
	func_10251(var_1454_object);
	var_1454_object = var_1453_object;
	func_10060(var_1452_bool, var_1453_object);
	object var_1455_object; object var_1456_object;
	var_1432_object = var_1455_object;
	var_1438_object = var_1456_object;
	TaskCall(25);
	func_7536(var_1457_object, var_1458_object, var_1459_string, var_1460_bool, var_1455_object, var_1456_object);
	TaskReturn();
	bool var_1441_bool;
	var_1438_object->IsDialogEnd(var_1441_bool);
	
	for(;;) {
		var_1500_bool = !var_1441_bool; //@nz
		if(var_1500_bool == 0) goto Label_7525;
		@sync();
		var_1438_object->IsDialogEnd(var_1441_bool);
	}
	
Label_7525:
	object var_1501_object;
	var_1432_object = var_1501_object;
	func_10042();
	@StopDialog(var_1438_object);
	var_1438_object->GetReturnValue(-1);
	int var_1440_int = var_1431_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_11552(bool var_730_bool)
{
	int var_732_int;
	func_10296(var_732_int, "d4q01");
	if(var_732_int == 2)
		var_730_bool = true;
	var_730_bool = false;
}


// @pe
void func_1313(object var_2_object, string var_593_string)
{
	bool var_594_bool;
	func_10509(var_594_bool);
	if(!var_594_bool) //@nz
		return 0;
	if(var_593_string == var_2_object)
		return 0;
	string var_597_string; bool var_598_bool;
	var_593_string = var_597_string;
	if(var_593_string == "")
		var_598_bool = false;
	else
		var_598_bool = true;
	func_10214(var_597_string, var_598_bool);
	var_2_object = var_593_string;
	
}


// @pe
void func_2337(object var_2_object, string var_741_string)
{
	bool var_742_bool;
	func_10509(var_742_bool);
	if(!var_742_bool) //@nz
		return 0;
	if(var_741_string == var_2_object)
		return 0;
	string var_745_string; bool var_746_bool;
	var_741_string = var_745_string;
	if(var_741_string == "")
		var_746_bool = false;
	else
		var_746_bool = true;
	func_10214(var_745_string, var_746_bool);
	var_2_object = var_741_string;
	
}


void func_10531(void)
{
	int var_128_int;
	func_10448(var_128_int);
	int var_127_int;
	var_128_int = var_127_int;
	@SetVariable(("RMap" + var_127_int), 1);
}


void func_12065(void)
{
	object var_136_object;
	@CreateDiaryEntry(var_136_object, 92, 2, 512174);
	bool var_140_bool; object var_141_object;
	var_136_object = var_141_object;
	func_12234(var_140_bool, var_141_object, 21);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11564(bool var_764_bool)
{
	int var_766_int;
	func_10296(var_766_int, "ood4MladVlad1");
	if(var_766_int == 0) {
		var_764_bool = true;
		return 0;
	}
	var_764_bool = false;
}


// @pe
void func_4909(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1142_object, object var_1143_object)
{
	var_0_bool = var_1143_object;
	var_1_object = var_1142_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_1149_bool;
		func_11408(var_1_object);
		if(var_1149_bool != 0) {
			object var_1155_object; object var_1156_object;
			var_1155_object = var_1_object;
			var_1156_object = var_0_bool;
			func_10665();
			object var_1159_object; object var_1160_object;
			var_1159_object = var_1_object;
			var_1160_object = var_0_bool;
			func_10694();
			func_5162(var_1143_object, "Sly");
			var_0_bool->SetMessage(533324); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(535993, 37724, 37723); //@t
			var_0_bool->AddReply(536001, 37724, 37731); //@t
		} else {
					func_5162(var_1143_object, "Neutral");
					var_0_bool->SetMessage(512410); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_1188_bool = false;
					bool var_1189_bool = false;
					bool var_1190_bool;
					func_11768(var_1_object);
					if(var_1190_bool != 0) {
						bool var_1196_bool;
						func_11792(var_1_object);
						if(var_1196_bool != 0)
							var_1189_bool = true;
					}
					if(var_1189_bool != 0) {
						bool var_1202_bool;
						func_11780(var_1_object);
						if(!var_1202_bool) //@nz
							var_1188_bool = true;
					}
					if(var_1188_bool != 0)
						var_0_bool->AddReply(512412, 13577, 13576); //@t
					bool var_1212_bool = false;
					bool var_1213_bool;
					func_11780(var_1_object);
					if(var_1213_bool != 0) {
						bool var_1215_bool;
						func_11804(var_1_object);
						if(var_1215_bool != 0)
							var_1212_bool = true;
					}
					if(var_1212_bool != 0)
						var_0_bool->AddReply(513588, 14840, 14839); //@t
					bool var_1224_bool = false;
					bool var_1225_bool = false;
					bool var_1226_bool = false;
					bool var_1227_bool;
					func_11816(var_1_object);
					if(var_1227_bool != 0) {
						bool var_1233_bool;
						func_11780(var_1_object);
						if(var_1233_bool != 0)
							var_1226_bool = true;
					}
					if(var_1226_bool != 0) {
						bool var_1235_bool;
						func_11828(var_1_object);
						if(var_1235_bool != 0)
							var_1225_bool = true;
					}
					if(var_1225_bool != 0) {
						bool var_1241_bool;
						func_11864(var_1_object);
						if(!var_1241_bool) //@nz
							var_1224_bool = true;
					}
					if(var_1224_bool != 0)
						var_0_bool->AddReply(513607, 14868, 14862); //@t
					bool var_1251_bool = false;
					bool var_1252_bool = false;
					bool var_1253_bool;
					func_11816(var_1_object);
					if(var_1253_bool != 0) {
						bool var_1255_bool;
						func_11852(var_1_object);
						if(var_1255_bool != 0)
							var_1252_bool = true;
					}
					if(var_1252_bool != 0) {
						bool var_1261_bool;
						func_11876(var_1_object);
						if(!var_1261_bool) //@nz
							var_1251_bool = true;
					}
					if(var_1251_bool != 0)
						var_0_bool->AddReply(513618, 14874, 14873); //@t
					bool var_1271_bool = false;
					bool var_1272_bool = false;
					bool var_1273_bool;
					func_11780(var_1_object);
					if(!var_1273_bool) { //@nz
						bool var_1276_bool;
						func_11768(var_1_object);
						if(var_1276_bool != 0)
							var_1272_bool = true;
					}
					if(var_1272_bool != 0) {
						bool var_1278_bool;
						func_11840(var_1_object);
						if(var_1278_bool != 0)
							var_1271_bool = true;
					}
					if(var_1271_bool != 0)
						var_0_bool->AddReply(513612, 14863, 14867); //@t
					bool var_1287_bool;
					func_11922(var_1287_bool, var_1_object);
					if(!var_1287_bool) //@nz
						var_0_bool->AddReply(520922, 22140, 22139); //@t
					bool var_1293_bool;
					func_11420(var_1_object);
					if(var_1293_bool != 0)
						var_0_bool->AddReply(533337, 37749, 34841); //@t
					var_0_bool->AddReply(512411, -1, 13575); //@t
		}
	}
	for(;;) {
		bool var_1178_bool;
		func_10509(var_1178_bool);
		if(var_1178_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10198(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5161;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5161:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1331";


// @pe
void func_10542(object var_137_object)
{
	object var_139_object;
	var_137_object = var_139_object;
	func_10335(var_139_object, -1000);
}


void func_12078(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 154, 2, 515365);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_12234(var_111_bool, var_112_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11056(void)
{
	@SetVariable("ood6MladVlad1", 1);
}


// @pe
void func_3379(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_828_object, object var_829_object)
{
	var_0_bool = var_829_object;
	var_1_object = var_828_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_835_bool = false;
		bool var_836_bool = false;
		bool var_837_bool;
		func_11732(var_1_object);
		if(var_837_bool != 0) {
			bool var_843_bool;
			func_11672(var_1_object);
			if(!var_843_bool) //@nz
				var_836_bool = true;
		}
		if(var_836_bool != 0) {
			bool var_850_bool;
			func_11684(var_1_object);
			if(!var_850_bool) //@nz
				var_835_bool = true;
		}
		if(var_835_bool != 0) {
			object var_857_object; object var_858_object;
			var_857_object = var_1_object;
			var_858_object = var_0_bool;
			func_11111();
			func_3542(var_829_object, "Rage");
			var_0_bool->SetMessage(511741); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(511743, 12951, 12949); //@t
			var_0_bool->AddReply(511742, 12950, 12948); //@t
			bool var_876_bool;
			func_11660(var_1_object);
			if(!var_876_bool) //@nz
				var_0_bool->AddReply(512586, 13766, 13753); //@t
		} else {
					func_3542(var_829_object, "Neutral");
					var_0_bool->SetMessage(512573); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_896_bool = false;
					bool var_897_bool;
					func_11696(var_1_object);
					if(var_897_bool != 0) {
						bool var_903_bool;
						func_11708(var_1_object);
						if(var_903_bool != 0)
							var_896_bool = true;
					}
					if(var_896_bool != 0)
						var_0_bool->AddReply(512574, 13744, 13743); //@t
					bool var_912_bool = false;
					bool var_913_bool;
					func_11672(var_1_object);
					if(var_913_bool != 0) {
						bool var_915_bool;
						func_11720(var_1_object);
						if(var_915_bool != 0)
							var_912_bool = true;
					}
					if(var_912_bool != 0)
						var_0_bool->AddReply(512577, 13747, 13746); //@t
					bool var_924_bool;
					func_11922(var_924_bool, var_1_object);
					if(!var_924_bool) //@nz
						var_0_bool->AddReply(520905, 22123, 22122); //@t
					var_0_bool->AddReply(512580, -1, 13749); //@t
		}
	}
	for(;;) {
		bool var_886_bool;
		func_10509(var_886_bool);
		if(var_886_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10198(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3541;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3541:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd37";


// @pe
void func_10549(void)
{
	@SetVariable("ood3MladVlad2", 1);
}


// @pe
void func_11062(void)
{
	@SetVariable("ood6MladVlad2", 1);
}


// @pe
void func_11576(bool var_724_bool)
{
	int var_726_int;
	func_10296(var_726_int, "ood4MladVlad2");
	if(var_726_int == 0) {
		var_724_bool = true;
		return 0;
	}
	var_724_bool = false;
}


void func_10042(void)
{
	bool var_319_bool;
	@CameraSwitchToNormal(true);
	bool var_321_bool;
	func_10509(var_321_bool);
	if(var_321_bool != 0) {
	} else {
		@HasAnimationTrack(var_319_bool, "head");
		if(var_319_bool == 0) goto Label_10059;
		@UnlookAsync("head");
	}
Label_10059:
	
}


// @pe
void func_10555(object var_217_object)
{
	@Trace("money2000 is given");
	object var_220_object;
	var_217_object = var_220_object;
	func_10335(var_220_object, 2000);
}


// @pe
void func_11068(void)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}


// @pe
void func_7997(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_353_object, object var_354_object)
{
	var_0_bool = var_354_object;
	var_1_object = var_353_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_360_bool = false;
		bool var_361_bool = false;
		bool var_362_bool;
		func_11372(var_1_object);
		if(var_362_bool != 0) {
			bool var_370_bool;
			func_11324(var_1_object);
			if(var_370_bool != 0)
				var_361_bool = true;
		}
		if(var_361_bool != 0) {
			bool var_376_bool;
			func_11888(var_1_object);
			if(var_376_bool != 0)
				var_360_bool = true;
		}
		if(var_360_bool != 0) {
			object var_392_object; object var_393_object;
			var_392_object = var_1_object;
			var_393_object = var_0_bool;
			func_10641();
			func_8176(var_354_object, "Untrust");
			var_0_bool->SetMessage(532641); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(532642, 34105, 34104); //@t
			var_0_bool->AddReply(532687, 34161, 34160); //@t
		} else {
					func_8176(var_354_object, "Neutral");
					var_0_bool->SetMessage(531953); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_421_bool = false;
					bool var_422_bool;
					func_11384(var_1_object);
					if(var_422_bool != 0) {
						bool var_428_bool;
						func_11888(var_1_object);
						if(var_428_bool != 0)
							var_421_bool = true;
					}
					if(var_421_bool != 0)
						var_0_bool->AddReply(532702, 34178, 34177); //@t
					bool var_433_bool;
					func_11360(var_1_object);
					if(var_433_bool != 0)
						var_0_bool->AddReply(531954, 33359, 33358); //@t
					bool var_442_bool = false;
					bool var_443_bool;
					func_11324(var_1_object);
					if(var_443_bool != 0) {
						bool var_445_bool;
						func_11372(var_1_object);
						if(!var_445_bool) //@nz
							var_442_bool = true;
					}
					if(var_442_bool != 0)
						var_0_bool->AddReply(532699, 34175, 34174); //@t
					bool var_451_bool = false;
					bool var_452_bool = false;
					bool var_453_bool;
					func_11348(var_1_object);
					if(!var_453_bool) { //@nz
						bool var_460_bool;
						func_11396(var_1_object);
						if(var_460_bool != 0)
							var_452_bool = true;
					}
					if(var_452_bool != 0) {
						bool var_466_bool;
						func_11336(var_1_object);
						if(var_466_bool != 0)
							var_451_bool = true;
					}
					if(var_451_bool != 0)
						var_0_bool->AddReply(532691, 34166, 34165); //@t
					var_0_bool->AddReply(531960, -1, 33364); //@t
		}
	}
	for(;;) {
		bool var_411_bool;
		func_10509(var_411_bool);
		if(var_411_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10198(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_8175;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_8175:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1f41";


void func_12091(void)
{
	object var_130_object;
	@CreateDiaryEntry(var_130_object, 155, 2, 515366);
	bool var_134_bool; object var_135_object;
	var_130_object = var_135_object;
	func_12234(var_134_bool, var_135_object, 154);
}
EMIT "Stack[-1] = 0";


void func_9531(bool var_0_bool, int var_1560_int, object var_1561_object)
{
	var_0_bool = var_1561_object;
	bool var_1571_bool; object var_1572_object;
	var_1561_object = var_1572_object;
	func_9973(var_1571_bool, var_1572_object, 70.0);
	if(!var_1571_bool) { //@nz
		var_1560_int = -2;
		return 8;
	}
	object var_1567_object;
	@CreateDialog(var_1567_object);
	int var_1575_int;
	func_10503(var_1575_int);
	var_1567_object->SetNPCName(var_1575_int);
	int var_1576_int;
	func_10501(var_1576_int);
	var_1567_object->SetNPCDescription(var_1576_int);
	string var_1577_string;
	func_10505(var_1577_string);
	var_1567_object->SetPhoto(var_1577_string);
	string var_1578_string;
	func_10507(var_1578_string);
	var_1567_object->SetPhoto2(var_1578_string);
	int var_1579_int;
	func_12312(var_1579_int);
	var_1567_object->SetPlayerName(var_1579_int);
	bool var_1568_bool;
	@IsOverrideActive(var_1568_bool);
	if(var_1568_bool != 0) {
		var_1560_int = -2;
		return 8;
	}
	@DoDialog(var_1567_object);
	bool var_1581_bool; object var_1582_object;
	object var_1583_object;
	func_10251(var_1583_object);
	var_1583_object = var_1582_object;
	func_10060(var_1581_bool, var_1582_object);
	object var_1584_object; object var_1585_object;
	var_1561_object = var_1584_object;
	var_1567_object = var_1585_object;
	TaskCall(31);
	func_9612(var_1586_object, var_1587_object, var_1588_string, var_1589_bool, var_1584_object, var_1585_object);
	TaskReturn();
	bool var_1570_bool;
	var_1567_object->IsDialogEnd(var_1570_bool);
	
	for(;;) {
		var_1614_bool = !var_1570_bool; //@nz
		if(var_1614_bool == 0) goto Label_9601;
		@sync();
		var_1567_object->IsDialogEnd(var_1570_bool);
	}
	
Label_9601:
	object var_1615_object;
	var_1561_object = var_1615_object;
	func_10042();
	@StopDialog(var_1567_object);
	var_1567_object->GetReturnValue(-1);
	int var_1569_int = var_1560_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_11074(void)
{
	@SetVariable("ood6MladVlad3", 1);
}


// @pe
void func_11588(bool var_782_bool)
{
	int var_784_int;
	func_10296(var_784_int, "d4q02");
	if(var_784_int == 1000)
		var_782_bool = true;
	var_782_bool = false;
}


void func_10565(void)
{
	@SetVariable("d1q03IsKapella", 0);
	object var_86_object;
	func_12262(var_86_object);
	object var_83_object;
	var_86_object = var_83_object;
	float var_97_float;
	func_10443(var_97_float);
	var_83_object->AddMark("d1q03MladVladGotoOspina", "pt_map_ospina", 0, 508642, var_97_float);
	func_11987();
	func_12000();
	object var_131_object;
	func_10301(var_131_object, "quest_d1_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_11080(void)
{
	func_12143();
	bool var_248_bool;
	func_10431(var_248_bool, "quest_d6_03", "failed");
}


void func_12104(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 102, 2, 513725);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_12234(var_112_bool, var_113_object, -1);
}
EMIT "Stack[-1] = 0";


void func_10060(bool var_167_bool, object var_168_object)
{
	int var_174_int; int var_175_int;
	@GetVariable("voice_common", var_174_int);
	if(var_174_int != 0) {
		bool var_178_bool; object var_179_object;
		var_168_object = var_179_object;
		func_10118(var_178_bool, var_179_object);
		if(!var_178_bool) { //@nz
			bool var_209_bool; object var_210_object;
			var_168_object = var_210_object;
			func_10155(var_209_bool, var_210_object);
			if(!var_209_bool) { //@nz
				var_167_bool = false;
				return 4;
			}
		}
		@irand(var_175_int, 2);
		if(var_175_int != 0)
			@SetVariable("voice_common", ((var_174_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_254_bool; object var_255_object;
		var_168_object = var_255_object;
		func_10155(var_254_bool, var_255_object);
		if(!var_254_bool) { //@nz
			bool var_257_bool; object var_258_object;
			var_168_object = var_258_object;
			func_10118(var_257_bool, var_258_object);
			if(!var_257_bool) { //@nz
				var_167_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_10116;
	
Label_10116:
	var_167_bool = true;
	
}


// @pe
void func_11600(bool var_776_bool)
{
	int var_778_int;
	func_10296(var_778_int, "ood4MladVlad3");
	if(var_778_int == 0) {
		var_776_bool = true;
		return 0;
	}
	var_776_bool = false;
}


// @pe
void func_11090(object var_196_object)
{
	object var_199_object;
	var_196_object = var_199_object;
	bool var_198_bool;
	func_10386(var_198_bool, var_199_object, 0.3);
}


void func_12117(void)
{
	object var_194_object;
	@CreateDiaryEntry(var_194_object, 104, 2, 513727);
	bool var_198_bool; object var_199_object;
	var_194_object = var_199_object;
	func_12234(var_198_bool, var_199_object, 102);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11097(void)
{
	@SetVariable("ood5MladVlad1", 1);
}


// @pe
void func_11612(bool var_999_bool)
{
	int var_1001_int;
	func_10296(var_1001_int, "d6q02");
	if(var_1001_int == 0) {
		var_999_bool = true;
		return 0;
	}
	var_999_bool = false;
}


// @pe
void func_11103(void)
{
	@SetVariable("ood5MladVlad2", 1);
}


void func_12130(void)
{
	object var_131_object;
	@CreateDiaryEntry(var_131_object, 106, 2, 513729);
	bool var_135_bool; object var_136_object;
	var_131_object = var_136_object;
	func_12234(var_135_bool, var_136_object, 102);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10595(object var_201_object)
{
	@Trace("money10000 is given");
	object var_204_object;
	var_201_object = var_204_object;
	func_10335(var_204_object, 10000);
}


// @pe
void func_11109(void)
{
}


// @pe
void func_7014(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1333_object, object var_1334_object)
{
	var_0_bool = var_1334_object;
	var_3_object = false;
	if(1 != 0) {
		func_7078(var_1334_object, "Neutral");
		var_0_bool->SetMessage(520927); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1349_bool;
		func_11922(var_1349_bool, var_1333_object);
		if(!var_1349_bool) //@nz
			var_0_bool->AddReply(520928, 22146, 22145); //@t
		var_0_bool->AddReply(520932, -1, 22149); //@t
		goto Label_7048;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1b6a";
	}
Label_7048:
	bool var_1358_bool;
	func_10509(var_1358_bool);
	if(var_1358_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_7077;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_7077:
		return 0;

	}
	
}


// @pe
void func_11111(void)
{
	@SetVariable("ood5MladVlad3", 1);
}


// @pe
void func_11624(bool var_968_bool)
{
	int var_970_int;
	func_10296(var_970_int, "ood6MladVlad1");
	if(var_970_int == 0) {
		var_968_bool = true;
		return 0;
	}
	var_968_bool = false;
}


// @pe
void func_363(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_262_object, object var_263_object)
{
	var_0_bool = var_263_object;
	var_1_object = var_262_object;
	var_3_object = false;
	if(1 != 0) {
		object var_269_object; object var_270_object;
		var_269_object = var_1_object;
		var_270_object = var_0_bool;
		func_11245();
		object var_273_object; object var_274_object;
		var_273_object = var_1_object;
		var_274_object = var_0_bool;
		func_10765();
		func_426(var_263_object, "Neutral");
		var_0_bool->SetMessage(500416); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(533500, 35031, 35030); //@t
		goto Label_396;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16f";
	}
Label_396:
	bool var_298_bool;
	func_10509(var_298_bool);
	if(var_298_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_425;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_425:
		return 0;

	}
	
}


// @pe
void func_10605(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_11117(void)
{
	object var_184_object;
	func_12262(var_184_object);
	object var_182_object;
	var_184_object = var_182_object;
	object var_183_object;
	var_182_object->FindMark(var_183_object, "d6q02BigVlad");
	if(var_183_object != 0)
		var_183_object->Remove();
	var_182_object->FindMark(var_183_object, "d6q02KapellaGotoMladVlad");
	if(var_183_object != 0)
		var_183_object->Remove();
	var_182_object->FindMark(var_183_object, "d6q02MladVladGotoBigVlad");
	if(var_183_object != 0)
		var_183_object->Remove();
	var_182_object->FindMark(var_183_object, "d6q02MladVladGotoBigVladSelf");
	if(var_183_object != 0)
		var_183_object->Remove();
	func_12117();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_12143(void)
{
	object var_241_object;
	@CreateDiaryEntry(var_241_object, 110, 2, 513733);
	bool var_245_bool; object var_246_object;
	var_241_object = var_246_object;
	func_12234(var_245_bool, var_246_object, 107);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7536(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1455_object, object var_1456_object)
{
	var_0_bool = var_1456_object;
	var_1_object = var_1455_object;
	var_3_object = false;
	if(1 != 0) {
		func_7615(var_1456_object, "Neutral");
		var_0_bool->SetMessage(520941); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1471_bool;
		func_11432(var_1_object);
		if(var_1471_bool != 0)
			var_0_bool->AddReply(534490, 38444, 36135); //@t
		bool var_1480_bool;
		func_11922(var_1480_bool, var_1_object);
		if(!var_1480_bool) //@nz
			var_0_bool->AddReply(520942, 22160, 22159); //@t
		var_0_bool->AddReply(520946, -1, 22163); //@t
		var_0_bool->AddReply(536616, -1, 38443); //@t
		goto Label_7585;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1d74";
	}
Label_7585:
	bool var_1492_bool;
	func_10509(var_1492_bool);
	if(var_1492_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_7614;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_7614:
		return 0;

	}
	
}


// @pe
void func_10611(object var_249_object)
{
	object var_253_object;
	func_12262(var_253_object);
	object var_250_object;
	var_253_object = var_250_object;
	func_12279(var_250_object, "pt_map_mat", (float)2);
	object var_254_object;
	func_12262(var_254_object);
	var_249_object->ShowMap(var_254_object);
}


// @pe
void func_11636(bool var_1009_bool)
{
	int var_1011_int;
	func_10296(var_1011_int, "ood6MladVlad2");
	if(var_1011_int == 0) {
		var_1009_bool = true;
		return 0;
	}
	var_1009_bool = false;
}


void func_12156(void)
{
	object var_231_object;
	@CreateDiaryEntry(var_231_object, 718, 1, 538759);
	bool var_235_bool; object var_236_object;
	var_231_object = var_236_object;
	func_12234(var_235_bool, var_236_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11648(bool var_1026_bool)
{
	int var_1028_int;
	func_10296(var_1028_int, "ood6MladVlad3");
	if(var_1028_int == 0) {
		var_1026_bool = true;
		return 0;
	}
	var_1026_bool = false;
}


// @pe
void func_10627(void)
{
	@SetVariable("d1q01", 7);
	func_11974();
	bool var_185_bool;
	func_10431(var_185_bool, "quest_d1_01", "place_rubin");
}


void func_10118(bool var_178_bool, object var_179_object)
{
	string var_185_string; bool var_187_bool; int var_188_int; string var_189_string;
	var_185_string = "c";
	int var_186_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_179_object->HasProperty((var_185_string + (var_186_int + 1)), var_187_bool);
			if(!var_187_bool) { //@nz
			} else {
				var_186_int += 1;
			}
		}
		if(!var_186_int) { //@nz
			var_178_bool = false;
			return 10;
		}
		var_188_int = 0;
		if(var_186_int > 1)
			@irand(var_188_int, var_186_int);
		var_179_object->GetProperty((var_185_string + (var_188_int + 1)), var_189_string);
		bool var_201_bool; string var_202_string;
		var_189_string = var_202_string;
		func_10229(var_201_bool, var_202_string);
		var_201_bool = var_178_bool;
		return 10;

	}
}


void func_12169(void)
{
	object var_152_object;
	@CreateDiaryEntry(var_152_object, 177, 1, 515436);
	bool var_156_bool; object var_157_object;
	var_152_object = var_157_object;
	func_12234(var_156_bool, var_157_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11660(bool var_876_bool)
{
	int var_878_int;
	func_10296(var_878_int, "d5q03");
	if(var_878_int == 0) {
		var_876_bool = true;
		return 0;
	}
	var_876_bool = false;
}


// @pe
void func_9612(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1584_object, object var_1585_object)
{
	var_0_bool = var_1585_object;
	var_1_object = var_1584_object;
	var_3_object = false;
	if(1 != 0) {
		func_9670(var_1585_object, "Neutral");
		var_0_bool->SetMessage(540542); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540543, -1, 42552); //@t
		var_0_bool->AddReply(540796, -1, 42845); //@t
		goto Label_9640;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2590";
	}
Label_9640:
	bool var_1606_bool;
	func_10509(var_1606_bool);
	if(var_1606_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10198(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_9669;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_9669:
		return 0;

	}
	
}


// @pe
void func_10641(void)
{
	@SetVariable("ood1MladVlad1", 1);
}


// @pe
void func_11156(void)
{
	@SetVariable("ood8MladVlad1", 1);
}


void func_12182(void)
{
	object var_85_object;
	@CreateDiaryEntry(var_85_object, 649, 2, 533362);
	bool var_89_bool; object var_90_object;
	var_85_object = var_90_object;
	func_12234(var_89_bool, var_90_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10647(void)
{
	@SetVariable("ood1MladVlad2", 1);
}


// @pe
void func_11672(bool var_843_bool)
{
	int var_845_int;
	func_10296(var_845_int, "d5q03");
	if(var_845_int == 1000)
		var_843_bool = true;
	var_843_bool = false;
}


// @pe
void func_11162(void)
{
	@SetVariable("ood8MladVlad2", 1);
}


// @pe
void func_10653(void)
{
	@SetVariable("ood1MladVlad3", 1);
}


void func_11168(void)
{
	object var_212_object;
	bool var_213_bool = false;
	int var_214_int;
	func_10296(var_214_int, "d8q01BringBadBoy");
	if(var_214_int != 1) {
		int var_220_int;
		func_10296(var_220_int, "d8q01MatBringToy");
		if(var_220_int != 1)
			var_213_bool = true;
	}
	if(var_213_bool != 0) {
		object var_224_object;
		func_12262(var_224_object);
		var_224_object = var_212_object;
		float var_229_float;
		func_10443(var_229_float);
		var_212_object->AddMark("d8q01MladVladGotoMat", "pt_map_mat", 1, 515327, var_229_float);
		func_12156();
		var_212_object = null;
	}
}


// @pe
void func_10659(void)
{
	@SetVariable("d4MladVladVisit", 1);
}


// @pe
void func_11684(bool var_850_bool)
{
	int var_852_int;
	func_10296(var_852_int, "d5q03");
	if(var_852_int == -1)
		var_850_bool = true;
	var_850_bool = false;
}


void func_12195(void)
{
	object var_349_object;
	@CreateDiaryEntry(var_349_object, 652, 2, 533365);
	bool var_353_bool; object var_354_object;
	var_349_object = var_354_object;
	func_12234(var_353_bool, var_354_object, 649);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7078(object var_2_object, string var_1340_string)
{
	bool var_1341_bool;
	func_10509(var_1341_bool);
	if(!var_1341_bool) //@nz
		return 0;
	if(var_1340_string == var_2_object)
		return 0;
	string var_1344_string; bool var_1345_bool;
	var_1340_string = var_1344_string;
	if(var_1340_string == "")
		var_1345_bool = false;
	else
		var_1345_bool = true;
	func_10214(var_1344_string, var_1345_bool);
	var_2_object = var_1340_string;
	
}


// @pe
void func_10665(void)
{
	@SetVariable("ood8MladVlad6", 1);
}


// @pe
void func_426(object var_2_object, string var_277_string)
{
	bool var_278_bool;
	func_10509(var_278_bool);
	if(!var_278_bool) //@nz
		return 0;
	if(var_277_string == var_2_object)
		return 0;
	string var_281_string; bool var_282_bool;
	var_277_string = var_281_string;
	if(var_277_string == "")
		var_282_bool = false;
	else
		var_282_bool = true;
	func_10214(var_281_string, var_282_bool);
	var_2_object = var_277_string;
	
}


void func_10155(bool var_209_bool, object var_210_object)
{
	bool var_218_bool; int var_219_int; string var_220_string;
	int var_222_int;
	func_10448(var_222_int);
	string var_216_string = ("d" + var_222_int) + "m";
	int var_217_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_210_object->HasProperty((var_216_string + (var_217_int + 1)), var_218_bool);
			if(!var_218_bool) { //@nz
			} else {
				var_217_int += 1;
			}
		}
		if(!var_217_int) { //@nz
			var_209_bool = false;
			return 10;
		}
		var_219_int = 0;
		if(var_217_int > 1)
			@irand(var_219_int, var_217_int);
		var_210_object->GetProperty((var_216_string + (var_219_int + 1)), var_220_string);
		bool var_241_bool; string var_242_string;
		var_220_string = var_242_string;
		func_10229(var_241_bool, var_242_string);
		var_241_bool = var_209_bool;
		return 10;

	}
}


void func_10671(void)
{
	@SetVariable("d8q04", 3);
	object var_342_object;
	func_12262(var_342_object);
	object var_339_object;
	var_342_object = var_339_object;
	float var_347_float;
	func_10443(var_347_float);
	var_339_object->AddMark("d8q04MladVladGotoMark", "pt_map_theater", 0, 515322, var_347_float);
	func_12195();
}
EMIT "Stack[-1] = 0";


// @pe
void func_11696(bool var_897_bool)
{
	int var_899_int;
	func_10296(var_899_int, "d5q03");
	if(var_899_int == 2)
		var_897_bool = true;
	var_897_bool = false;
}


void func_12208(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 650, 2, 533363);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_12234(var_112_bool, var_113_object, 649);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11708(bool var_903_bool)
{
	int var_905_int;
	func_10296(var_905_int, "ood5MladVlad1");
	if(var_905_int == 0) {
		var_903_bool = true;
		return 0;
	}
	var_903_bool = false;
}


void func_12221(object var_114_object)
{
	object var_116_object;
	@GetDiaryRoot(var_116_object);
	if(!var_116_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_114_object = false;
	}
	var_116_object = var_114_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7615(object var_2_object, string var_1462_string)
{
	bool var_1463_bool;
	func_10509(var_1463_bool);
	if(!var_1463_bool) //@nz
		return 0;
	if(var_1462_string == var_2_object)
		return 0;
	string var_1466_string; bool var_1467_bool;
	var_1462_string = var_1466_string;
	if(var_1462_string == "")
		var_1467_bool = false;
	else
		var_1467_bool = true;
	func_10214(var_1466_string, var_1467_bool);
	var_2_object = var_1462_string;
	
}


// @pe
void func_11205(void)
{
	@SetVariable("ood8MladVlad3", 1);
}


// @pe
void func_10694(void)
{
	@SetVariable("d8MladVladVisit", 1);
}


// @pe
void func_9670(object var_2_object, string var_1591_string)
{
	bool var_1592_bool;
	func_10509(var_1592_bool);
	if(!var_1592_bool) //@nz
		return 0;
	if(var_1591_string == var_2_object)
		return 0;
	string var_1595_string; bool var_1596_bool;
	var_1591_string = var_1595_string;
	if(var_1591_string == "")
		var_1596_bool = false;
	else
		var_1596_bool = true;
	func_10214(var_1595_string, var_1596_bool);
	var_2_object = var_1591_string;
	
}


// @pe
void func_11720(bool var_915_bool)
{
	int var_917_int;
	func_10296(var_917_int, "ood5MladVlad2");
	if(var_917_int == 0) {
		var_915_bool = true;
		return 0;
	}
	var_915_bool = false;
}


void func_12234(bool var_105_bool, object var_106_object, int var_107_int)
{
	object var_114_object;
	func_12221(var_114_object);
	object var_111_object;
	var_114_object = var_111_object;
	object var_112_object;
	var_111_object->Find(var_107_int, var_112_object);
	if(!var_112_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_107_int);
		var_105_bool = false;
	}
	var_112_object->AddChild(var_106_object);
	@SendWorldWndMessage(7);
	int var_113_int;
	var_106_object->GetCategory(var_113_int);
	@SetDiarySection(var_113_int);
	var_105_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_11211(void)
{
	@SetVariable("d8q01MladVladIsVictim", 1);
}


// @pe
void func_10700(object var_166_object)
{
	object var_170_object;
	func_12262(var_170_object);
	object var_167_object;
	var_170_object = var_167_object;
	func_12279(var_167_object, "pt_gmap_r7_house2_01", (float)2);
	object var_190_object;
	func_12262(var_190_object);
	var_166_object->ShowMap(var_190_object);
}


// @pe
void func_11217(void)
{
	@SetVariable("ood8MladVlad4", 1);
}


// @pe
void func_11732(bool var_837_bool)
{
	int var_839_int;
	func_10296(var_839_int, "ood5MladVlad3");
	if(var_839_int == 0) {
		var_837_bool = true;
		return 0;
	}
	var_837_bool = false;
}


void func_10198(string var_300_string)
{
	bool var_304_bool; float var_305_float; float var_306_float;
	@lshHasAnimation(var_304_bool, var_300_string);
	if(var_304_bool != 0) {
		@lshGetAnimTimes(var_300_string, var_305_float, var_306_float);
		@lshPlayAnimation(var_305_float, var_306_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_300_string);
	}
	
}


// @pe
void func_3542(object var_2_object, string var_861_string)
{
	bool var_862_bool;
	func_10509(var_862_bool);
	if(!var_862_bool) //@nz
		return 0;
	if(var_861_string == var_2_object)
		return 0;
	string var_865_string; bool var_866_bool;
	var_861_string = var_865_string;
	if(var_861_string == "")
		var_866_bool = false;
	else
		var_866_bool = true;
	func_10214(var_865_string, var_866_bool);
	var_2_object = var_861_string;
	
}


// @pe
void func_11223(void)
{
	@SetVariable("ood8MladVlad5", 1);
}


// @pe
void func_10716(void)
{
	func_11961();
	bool var_105_bool;
	func_10431(var_105_bool, "quest_d11_05", "place_enemy_after");
	bool var_111_bool;
	func_10431(var_111_bool, "quest_d11_05", "completed");
}


// @pe
void func_11229(void)
{
	@SetVariable("d8q04", 1);
	func_12182();
	func_12208();
	object var_115_object;
	func_10301(var_115_object, "quest_d8_04");
}


void func_4061(bool var_0_bool, int var_937_int, object var_938_object)
{
	var_0_bool = var_938_object;
	bool var_948_bool; object var_949_object;
	var_938_object = var_949_object;
	func_9973(var_948_bool, var_949_object, 70.0);
	if(!var_948_bool) { //@nz
		var_937_int = -2;
		return 8;
	}
	object var_944_object;
	@CreateDialog(var_944_object);
	int var_952_int;
	func_10503(var_952_int);
	var_944_object->SetNPCName(var_952_int);
	int var_953_int;
	func_10501(var_953_int);
	var_944_object->SetNPCDescription(var_953_int);
	string var_954_string;
	func_10505(var_954_string);
	var_944_object->SetPhoto(var_954_string);
	string var_955_string;
	func_10507(var_955_string);
	var_944_object->SetPhoto2(var_955_string);
	int var_956_int;
	func_12312(var_956_int);
	var_944_object->SetPlayerName(var_956_int);
	bool var_945_bool;
	@IsOverrideActive(var_945_bool);
	if(var_945_bool != 0) {
		var_937_int = -2;
		return 8;
	}
	@DoDialog(var_944_object);
	bool var_958_bool; object var_959_object;
	object var_960_object;
	func_10251(var_960_object);
	var_960_object = var_959_object;
	func_10060(var_958_bool, var_959_object);
	object var_961_object; object var_962_object;
	var_938_object = var_961_object;
	var_944_object = var_962_object;
	TaskCall(15);
	func_4142(var_963_object, var_964_object, var_965_string, var_966_bool, var_961_object, var_962_object);
	TaskReturn();
	bool var_947_bool;
	var_944_object->IsDialogEnd(var_947_bool);
	
	for(;;) {
		var_1053_bool = !var_947_bool; //@nz
		if(var_1053_bool == 0) goto Label_4131;
		@sync();
		var_944_object->IsDialogEnd(var_947_bool);
	}
	
Label_4131:
	object var_1054_object;
	var_938_object = var_1054_object;
	func_10042();
	@StopDialog(var_944_object);
	var_944_object->GetReturnValue(-1);
	int var_946_int = var_937_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_11744(bool var_1015_bool)
{
	int var_1017_int;
	func_10296(var_1017_int, "d6q02GorbunDeath");
	if(var_1017_int != 0) {
		var_1015_bool = true;
		return 0;
	}
	var_1015_bool = false;
}


void func_10214(string var_281_string, bool var_282_bool)
{
	bool var_288_bool; float var_289_float; float var_290_float;
	@lshHasAnimation(var_288_bool, var_281_string);
	if(var_288_bool != 0) {
		@lshGetAnimTimes(var_281_string, var_289_float, var_290_float);
		@lshPlayAnimation(var_289_float, var_290_float, var_282_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_281_string);
	}
	
}


void func_12262(object var_86_object)
{
	object var_89_object; object var_90_object;
	@GetMainOutdoorScene(var_89_object);
	if(var_89_object == null) {
		@Trace("Can't find main outdoor scene");
		var_90_object = null;
		var_90_object = var_86_object;
	}
	var_89_object->GetMap(var_90_object);
	var_90_object = var_86_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10731(void)
{
	@SetVariable("ood3MladVlad3", 1);
}


// @pe
void func_11756(bool var_1032_bool)
{
	int var_1034_int;
	func_10296(var_1034_int, "d6q02Trigger");
	if(var_1034_int != 0) {
		var_1032_bool = true;
		return 0;
	}
	var_1032_bool = false;
}


// @pe
void func_11245(void)
{
	@SetVariable("KnowMladVlad", 1);
}


// @pe
void func_8176(object var_2_object, string var_396_string)
{
	bool var_397_bool;
	func_10509(var_397_bool);
	if(!var_397_bool) //@nz
		return 0;
	if(var_396_string == var_2_object)
		return 0;
	string var_400_string; bool var_401_bool;
	var_396_string = var_400_string;
	if(var_396_string == "")
		var_401_bool = false;
	else
		var_401_bool = true;
	func_10214(var_400_string, var_401_bool);
	var_2_object = var_396_string;
	
}


// @pe
void func_10737(void)
{
	int var_240_int;
	func_10296(var_240_int, "map_chertez_state");
	if(var_240_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_11251(void)
{
	object var_83_object;
	int var_84_int;
	func_10296(var_84_int, "d5q03");
	if(var_84_int == 0) {
		@SetVariable("d5q03", 1);
		object var_92_object;
		func_12262(var_92_object);
		var_92_object = var_83_object;
		float var_103_float;
		func_10443(var_103_float);
		var_83_object->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 515370, var_103_float);
		func_12078();
		func_12091();
		object var_137_object;
		func_10301(var_137_object, "quest_d5_03");
		bool var_145_bool;
		func_10431(var_145_bool, "quest_d5_03", "place_prisoners");
		var_83_object = null;
	}
}


void func_10229(bool var_201_bool, string var_202_string)
{
	bool var_204_bool;
	bool var_205_bool;
	func_10509(var_205_bool);
	if(var_205_bool != 0) {
		@lshHasSpeech(var_204_bool, var_202_string);
		if(var_204_bool != 0) {
			@lshPlaySpeech(var_202_string);
			var_201_bool = true;
		}
	}
	var_201_bool = false;
}


void func_12279(object var_141_object, string var_142_string, float var_143_float)
{
	object var_151_object;
	@GetMainOutdoorScene(var_151_object);
	if(var_151_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_149_cvector;
	cvector var_150_cvector;
	bool var_152_bool;
	var_151_object->GetLocator(var_142_string, var_152_bool, var_149_cvector, var_150_cvector);
	if(!var_152_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_142_string) + " doesnt exist");
	var_151_object->GetMap(var_141_object);
	if(var_141_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_162_float = GetByIndex(var_149_cvector, 0);
	var_163_float = GetByIndex(var_149_cvector, 2);
	var_141_object->SetMapParams(var_162_float, var_163_float, var_143_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_11768(bool var_1190_bool)
{
	int var_1192_int;
	func_10296(var_1192_int, "d8q01");
	if(var_1192_int == 1)
		var_1190_bool = true;
	var_1190_bool = false;
}


void func_9210(bool var_0_bool, int var_1504_int, object var_1505_object)
{
	var_0_bool = var_1505_object;
	bool var_1515_bool; object var_1516_object;
	var_1505_object = var_1516_object;
	func_9973(var_1515_bool, var_1516_object, 70.0);
	if(!var_1515_bool) { //@nz
		var_1504_int = -2;
		return 8;
	}
	object var_1511_object;
	@CreateDialog(var_1511_object);
	int var_1519_int;
	func_10503(var_1519_int);
	var_1511_object->SetNPCName(var_1519_int);
	int var_1520_int;
	func_10501(var_1520_int);
	var_1511_object->SetNPCDescription(var_1520_int);
	string var_1521_string;
	func_10505(var_1521_string);
	var_1511_object->SetPhoto(var_1521_string);
	string var_1522_string;
	func_10507(var_1522_string);
	var_1511_object->SetPhoto2(var_1522_string);
	int var_1523_int;
	func_12312(var_1523_int);
	var_1511_object->SetPlayerName(var_1523_int);
	bool var_1512_bool;
	@IsOverrideActive(var_1512_bool);
	if(var_1512_bool != 0) {
		var_1504_int = -2;
		return 8;
	}
	@DoDialog(var_1511_object);
	bool var_1525_bool; object var_1526_object;
	object var_1527_object;
	func_10251(var_1527_object);
	var_1527_object = var_1526_object;
	func_10060(var_1525_bool, var_1526_object);
	object var_1528_object; object var_1529_object;
	var_1505_object = var_1528_object;
	var_1511_object = var_1529_object;
	TaskCall(29);
	func_9291(var_1530_object, var_1531_object, var_1532_string, var_1533_bool, var_1528_object, var_1529_object);
	TaskReturn();
	bool var_1514_bool;
	var_1511_object->IsDialogEnd(var_1514_bool);
	
	for(;;) {
		var_1558_bool = !var_1514_bool; //@nz
		if(var_1558_bool == 0) goto Label_9280;
		@sync();
		var_1511_object->IsDialogEnd(var_1514_bool);
	}
	
Label_9280:
	object var_1559_object;
	var_1505_object = var_1559_object;
	func_10042();
	@StopDialog(var_1511_object);
	var_1511_object->GetReturnValue(-1);
	int var_1513_int = var_1504_int;
}
EMIT "Stack[-4] = 0";


