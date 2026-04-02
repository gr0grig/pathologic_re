// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		func_6959();
		bool var_36_bool;
		func_5559(var_36_bool);
		if(!var_36_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_5624("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_36_object;
		var_35_bool = var_36_object;
		func_6963(var_36_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_37_object;
		var_35_bool = var_37_object;
		bool var_36_bool;
		func_5547(var_36_bool, var_37_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_5642();
			if(var_35_string == 543) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5778();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5784();
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(473); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(476, 547, 546); //@t
				var_0_object->AddReply(474, 545, 544); //@t
				return 0;
			}
			if(var_35_string == 545) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_6060();
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(480, 547, 550); //@t
				var_0_object->AddReply(479, -1, 549); //@t
				return 0;
			}
			if(var_35_string == 547) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_6104();
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(481, 554, 552); //@t
				var_0_object->AddReply(8439, 9263, 9262); //@t
				return 0;
			}
			if(var_35_string == 9263) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(8440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8442, -1, 9265); //@t
				var_0_object->AddReply(8441, -1, 9264); //@t
				return 0;
			}
			if(var_35_string == 554) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(484, -1, 555); //@t
				var_0_object->AddReply(485, -1, 556); //@t
				return 0;
			}
			var_3_string = true;
			bool var_119_bool;
			func_5746(var_119_bool);
			if(var_119_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_5642();
			if(var_36_bool == 13328) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_6048();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_6110();
			}
			if(var_36_bool == 13695) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_6048();
			}
			if(var_35_string == 3618) {
				bool var_69_bool = false;
				bool var_70_bool;
				func_6531(var_1_object);
				if(var_70_bool != 0) {
					bool var_78_bool;
					func_6687(var_1_object);
					if(var_78_bool != 0)
						var_69_bool = true;
				}
				if(var_69_bool != 0) {
					object var_84_object; object var_85_object;
					var_84_object = var_1_object;
					var_85_object = var_0_object;
					func_6126();
					object var_88_object; object var_89_object;
					var_88_object = var_1_object;
					var_89_object = var_0_object;
					func_6132();
					func_555(var_36_bool, "Neutral");
					var_0_object->SetMessage(3371); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(3375, 3621, 3619); //@t
					var_0_object->AddReply(3376, 3621, 3620); //@t
					return 0;
				}
				bool var_114_bool = false;
				bool var_115_bool = false;
				bool var_116_bool;
				func_6519(var_1_object);
				if(var_116_bool != 0) {
					bool var_122_bool;
					func_6495(var_1_object);
					if(!var_122_bool) //@nz
						var_115_bool = true;
				}
				if(var_115_bool != 0) {
					bool var_129_bool;
					func_6507(var_1_object);
					if(!var_129_bool) //@nz
						var_114_bool = true;
				}
				if(var_114_bool != 0) {
					object var_136_object; object var_137_object;
					var_136_object = var_1_object;
					var_137_object = var_0_object;
					func_6126();
					func_555(var_36_bool, "Neutral");
					var_0_object->SetMessage(12095); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12096, 13323, 13322); //@t
					return 0;
				}
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(12523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12524, -1, 13694); //@t
				return 0;
			}
			if(var_35_string == 13323) {
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(12097); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12098, 13325, 13324); //@t
				return 0;
			}
			if(var_35_string == 13325) {
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(12099); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12100, 13327, 13326); //@t
				return 0;
			}
			if(var_35_string == 13327) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_object;
				func_6054();
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(12101); //@t
				var_0_object->ClearReplies(); //@t
				bool var_170_bool;
				func_6483(var_1_object);
				if(var_170_bool != 0)
					var_0_object->AddReply(12102, -1, 13328); //@t
				bool var_179_bool;
				func_6483(var_1_object);
				if(!var_179_bool) //@nz
					var_0_object->AddReply(12525, -1, 13695); //@t
				return 0;
			}
			if(var_35_string == 3621) {
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(3377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3378, 3626, 3622); //@t
				var_0_object->AddReply(3379, 3626, 3624); //@t
				var_0_object->AddReply(3380, 3626, 3625); //@t
				return 0;
			}
			if(var_35_string == 3626) {
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(3381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3382, 3631, 3627); //@t
				var_0_object->AddReply(3383, -1, 3630); //@t
				var_0_object->AddReply(3396, -1, 3643); //@t
				return 0;
			}
			if(var_35_string == 3631) {
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(3384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3385, 3639, 3632); //@t
				var_0_object->AddReply(3386, -1, 3633); //@t
				var_0_object->AddReply(3387, -1, 3634); //@t
				var_0_object->AddReply(3388, 3636, 3635); //@t
				return 0;
			}
			if(var_35_string == 3636) {
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(3389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3390, -1, 3637); //@t
				var_0_object->AddReply(3391, -1, 3638); //@t
				return 0;
			}
			if(var_35_string == 3639) {
				func_555(var_36_bool, "Neutral");
				var_0_object->SetMessage(3392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3393, -1, 3640); //@t
				var_0_object->AddReply(3394, -1, 3641); //@t
				var_0_object->AddReply(3395, -1, 3642); //@t
				return 0;
			}
			var_3_string = true;
			bool var_250_bool;
			func_5746(var_250_bool);
			if(var_250_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x23c";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_5642();
			if(var_36_bool == 6610) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5754();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5790();
				object var_98_object = var_1_object;
				func_5875(var_0_object);
			}
			if(var_36_bool == 6606) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_5754();
			}
			if(var_36_bool == 6611) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_5754();
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_5790();
				object var_134_object = var_1_object;
				func_5875(var_0_object);
			}
			if(var_36_bool == 6612) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_5754();
			}
			if(var_36_bool == 6035) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_5760();
			}
			if(var_36_bool == 6036) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_5760();
			}
			if(var_36_bool == 6037) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_5760();
			}
			if(var_36_bool == 6038) {
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_5760();
			}
			if(var_36_bool == 6041) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_5760();
			}
			if(var_36_bool == 6042) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_object;
				func_5760();
			}
			if(var_36_bool == 6015) {
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_object;
				func_5766();
			}
			if(var_36_bool == 6016) {
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_5766();
			}
			if(var_36_bool == 6017) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_5766();
			}
			if(var_36_bool == 6675) {
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_5772();
			}
			if(var_36_bool == 6700) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_5772();
			}
			if(var_36_bool == 6701) {
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_5772();
			}
			if(var_36_bool == 6006) {
				object var_196_object; object var_197_object;
				var_196_object = var_1_object;
				var_197_object = var_0_object;
				func_5790();
			}
			if(var_36_bool == 9564) {
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_5790();
				object var_202_object = var_1_object;
				func_5875(var_0_object);
			}
			if(var_36_bool == 6942) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_5817();
			}
			if(var_36_bool == 6943) {
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_5817();
			}
			if(var_36_bool == 8783) {
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_5907();
			}
			if(var_36_bool == 8794) {
				object var_222_object; object var_223_object;
				var_222_object = var_1_object;
				var_223_object = var_0_object;
				func_5913();
			}
			if(var_36_bool == 8803) {
				object var_228_object; object var_229_object;
				var_228_object = var_1_object;
				var_229_object = var_0_object;
				func_5919();
			}
			if(var_36_bool == 8804) {
				object var_234_object; object var_235_object;
				var_234_object = var_1_object;
				var_235_object = var_0_object;
				func_5919();
			}
			if(var_36_bool == 8811) {
				object var_238_object; object var_239_object;
				var_238_object = var_1_object;
				var_239_object = var_0_object;
				func_5925();
			}
			if(var_36_bool == 8812) {
				object var_244_object; object var_245_object;
				var_244_object = var_1_object;
				var_245_object = var_0_object;
				func_5925();
			}
			if(var_36_bool == 8817) {
				object var_248_object; object var_249_object;
				var_248_object = var_1_object;
				var_249_object = var_0_object;
				func_5925();
			}
			if(var_36_bool == 9568) {
				object var_252_object; object var_253_object;
				var_252_object = var_1_object;
				var_253_object = var_0_object;
				func_5931();
			}
			if(var_35_string == 6003) {
				bool var_258_bool = false;
				bool var_259_bool;
				func_6723(var_1_object);
				if(var_259_bool != 0) {
					bool var_267_bool;
					func_6192(var_1_object);
					if(var_267_bool != 0)
						var_258_bool = true;
				}
				if(var_258_bool != 0) {
					func_1302(var_36_bool, "Neutral");
					var_0_object->SetMessage(5449); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5453, 6575, 6007); //@t
					var_0_object->AddReply(5974, 6575, 6579); //@t
					return 0;
				}
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5484); //@t
				var_0_object->ClearReplies(); //@t
				bool var_297_bool;
				func_6735(var_1_object);
				if(var_297_bool != 0)
					var_0_object->AddReply(8729, 6028, 9566); //@t
				bool var_306_bool = false;
				bool var_307_bool;
				func_6144(var_1_object);
				if(var_307_bool != 0) {
					bool var_313_bool;
					func_6168(var_1_object);
					if(var_313_bool != 0)
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_object->AddReply(8728, 6008, 9565); //@t
				bool var_322_bool = false;
				bool var_323_bool = false;
				bool var_324_bool;
				func_6156(var_1_object);
				if(var_324_bool != 0) {
					bool var_330_bool;
					func_6204(var_1_object);
					if(var_330_bool != 0)
						var_323_bool = true;
				}
				if(var_323_bool != 0) {
					bool var_336_bool;
					func_6216(var_1_object);
					if(var_336_bool != 0)
						var_322_bool = true;
				}
				if(var_322_bool != 0)
					var_0_object->AddReply(5451, 6666, 6005); //@t
				bool var_345_bool = false;
				bool var_346_bool = false;
				bool var_347_bool;
				func_6180(var_1_object);
				if(var_347_bool != 0) {
					bool var_353_bool;
					func_6192(var_1_object);
					if(var_353_bool != 0)
						var_346_bool = true;
				}
				if(var_346_bool != 0) {
					bool var_355_bool;
					func_6723(var_1_object);
					if(!var_355_bool) //@nz
						var_345_bool = true;
				}
				if(var_345_bool != 0)
					var_0_object->AddReply(5452, 9563, 6006); //@t
				bool var_361_bool = false;
				bool var_362_bool;
				func_6228(var_1_object);
				if(var_362_bool != 0) {
					bool var_368_bool;
					func_6240(var_1_object);
					if(var_368_bool != 0)
						var_361_bool = true;
				}
				if(var_361_bool != 0)
					var_0_object->AddReply(6288, 6941, 6940); //@t
				bool var_377_bool = false;
				bool var_378_bool;
				func_6615(var_1_object);
				if(var_378_bool != 0) {
					bool var_384_bool;
					func_6300(var_1_object);
					if(var_384_bool != 0)
						var_377_bool = true;
				}
				if(var_377_bool != 0)
					var_0_object->AddReply(7933, 8773, 8753); //@t
				bool var_393_bool = false;
				bool var_394_bool;
				func_6603(var_1_object);
				if(var_394_bool != 0) {
					bool var_400_bool;
					func_6312(var_1_object);
					if(var_400_bool != 0)
						var_393_bool = true;
				}
				if(var_393_bool != 0)
					var_0_object->AddReply(7938, 8784, 8758); //@t
				bool var_409_bool = false;
				bool var_410_bool;
				func_6639(var_1_object);
				if(var_410_bool != 0) {
					bool var_416_bool;
					func_6324(var_1_object);
					if(var_416_bool != 0)
						var_409_bool = true;
				}
				if(var_409_bool != 0)
					var_0_object->AddReply(7943, 8775, 8763); //@t
				bool var_425_bool = false;
				bool var_426_bool;
				func_6627(var_1_object);
				if(var_426_bool != 0) {
					bool var_432_bool;
					func_6336(var_1_object);
					if(var_432_bool != 0)
						var_425_bool = true;
				}
				if(var_425_bool != 0)
					var_0_object->AddReply(7950, 8776, 8770); //@t
				bool var_441_bool = false;
				bool var_442_bool;
				func_6699(var_1_object);
				if(var_442_bool != 0) {
					bool var_448_bool;
					func_6348(var_1_object);
					if(var_448_bool != 0)
						var_441_bool = true;
				}
				if(var_441_bool != 0)
					var_0_object->AddReply(7951, 8777, 8771); //@t
				bool var_457_bool = false;
				bool var_458_bool;
				func_6675(var_1_object);
				if(var_458_bool != 0) {
					bool var_464_bool;
					func_6360(var_1_object);
					if(var_464_bool != 0)
						var_457_bool = true;
				}
				if(var_457_bool != 0)
					var_0_object->AddReply(7952, 8778, 8772); //@t
				var_0_object->AddReply(6264, -1, 6931); //@t
				return 0;
			}
			if(var_35_string == 8778) {
				object var_478_object; object var_479_object;
				var_478_object = var_1_object;
				var_479_object = var_0_object;
				func_6138();
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8000, 9567, 8823); //@t
				return 0;
			}
			if(var_35_string == 9567) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(8730); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8731, -1, 9568); //@t
				return 0;
			}
			if(var_35_string == 8777) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7957); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7995, 8819, 8818); //@t
				return 0;
			}
			if(var_35_string == 8819) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7997, 9569, 8820); //@t
				return 0;
			}
			if(var_35_string == 9569) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(8732); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8733, 9571, 9570); //@t
				return 0;
			}
			if(var_35_string == 9571) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(8734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8735, -1, 9572); //@t
				return 0;
			}
			if(var_35_string == 8776) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7983, 8807, 8805); //@t
				var_0_object->AddReply(7984, 8807, 8806); //@t
				return 0;
			}
			if(var_35_string == 8807) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7986, 8810, 8809); //@t
				var_0_object->AddReply(7990, 8814, 8813); //@t
				return 0;
			}
			if(var_35_string == 8814) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7991); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7992, 8816, 8815); //@t
				return 0;
			}
			if(var_35_string == 8816) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7993); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7994, -1, 8817); //@t
				return 0;
			}
			if(var_35_string == 8810) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7988, -1, 8811); //@t
				var_0_object->AddReply(7989, -1, 8812); //@t
				return 0;
			}
			if(var_35_string == 8775) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7977, 8800, 8799); //@t
				return 0;
			}
			if(var_35_string == 8800) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7979, 8802, 8801); //@t
				return 0;
			}
			if(var_35_string == 8802) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7981, -1, 8803); //@t
				var_0_object->AddReply(7982, -1, 8804); //@t
				return 0;
			}
			if(var_35_string == 8784) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7965, 8786, 8785); //@t
				return 0;
			}
			if(var_35_string == 8786) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7966); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7967, 8774, 8787); //@t
				var_0_object->AddReply(7976, 8774, 8797); //@t
				return 0;
			}
			if(var_35_string == 8774) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7954); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7969, 8790, 8789); //@t
				var_0_object->AddReply(7975, 8790, 8795); //@t
				return 0;
			}
			if(var_35_string == 8790) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7971, 8792, 8791); //@t
				return 0;
			}
			if(var_35_string == 8792) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7974, -1, 8794); //@t
				return 0;
			}
			if(var_35_string == 8773) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7959, 8780, 8779); //@t
				return 0;
			}
			if(var_35_string == 8780) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7960); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7961, 8782, 8781); //@t
				return 0;
			}
			if(var_35_string == 8782) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(7962); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7963, -1, 8783); //@t
				return 0;
			}
			if(var_35_string == 6941) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6290, -1, 6942); //@t
				var_0_object->AddReply(6291, -1, 6943); //@t
				return 0;
			}
			if(var_35_string == 9563) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(8726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8727, -1, 9564); //@t
				return 0;
			}
			if(var_35_string == 6666) {
				object var_671_object; object var_672_object;
				var_671_object = var_1_object;
				var_672_object = var_0_object;
				func_5772();
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6043); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6044, 6670, 6667); //@t
				var_0_object->AddReply(6045, 6669, 6668); //@t
				return 0;
			}
			if(var_35_string == 6669) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6046); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6053, 6679, 6677); //@t
				var_0_object->AddReply(6054, 6681, 6678); //@t
				return 0;
			}
			if(var_35_string == 6679) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6055); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6056, 6681, 6680); //@t
				bool var_698_bool;
				func_6711(var_1_object);
				if(!var_698_bool) //@nz
					var_0_object->AddReply(6058, 6702, 6683); //@t
				return 0;
			}
			if(var_35_string == 6702) {
				object var_710_object; object var_711_object;
				var_710_object = var_1_object;
				var_711_object = var_0_object;
				func_5748();
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6075, 6681, 6703); //@t
				return 0;
			}
			if(var_35_string == 6681) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6057); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6059, 6686, 6684); //@t
				var_0_object->AddReply(6060, 6688, 6685); //@t
				return 0;
			}
			if(var_35_string == 6688) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6063); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6064, 6686, 6689); //@t
				return 0;
			}
			if(var_35_string == 6686) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6062, 6691, 6687); //@t
				return 0;
			}
			if(var_35_string == 6691) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6065); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6066, 6696, 6692); //@t
				var_0_object->AddReply(6067, 6694, 6693); //@t
				return 0;
			}
			if(var_35_string == 6694) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6069, 6696, 6695); //@t
				var_0_object->AddReply(6071, 6696, 6698); //@t
				return 0;
			}
			if(var_35_string == 6696) {
				object var_765_object = var_1_object;
				func_5823(var_0_object);
				object var_784_object; object var_785_object;
				var_784_object = var_1_object;
				var_785_object = var_0_object;
				func_5834();
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6072, -1, 6700); //@t
				var_0_object->AddReply(6073, -1, 6701); //@t
				return 0;
			}
			if(var_35_string == 6670) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6048, 6673, 6671); //@t
				var_0_object->AddReply(6049, 6673, 6672); //@t
				return 0;
			}
			if(var_35_string == 6673) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(6050); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6051, -1, 6675); //@t
				return 0;
			}
			if(var_35_string == 6008) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5455, 6010, 6009); //@t
				var_0_object->AddReply(5467, 6010, 6024); //@t
				return 0;
			}
			if(var_35_string == 6010) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5456); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5457, 6012, 6011); //@t
				var_0_object->AddReply(5466, 6012, 6022); //@t
				return 0;
			}
			if(var_35_string == 6012) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5459, 6014, 6013); //@t
				var_0_object->AddReply(5465, 6014, 6020); //@t
				var_0_object->AddReply(5464, 6014, 6018); //@t
				return 0;
			}
			if(var_35_string == 6014) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5460); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5461, -1, 6015); //@t
				var_0_object->AddReply(5462, -1, 6016); //@t
				var_0_object->AddReply(5463, -1, 6017); //@t
				return 0;
			}
			if(var_35_string == 6028) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5469); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5470, 6030, 6029); //@t
				var_0_object->AddReply(5480, 6040, 6039); //@t
				return 0;
			}
			if(var_35_string == 6040) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5481); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5482, -1, 6041); //@t
				var_0_object->AddReply(5483, -1, 6042); //@t
				return 0;
			}
			if(var_35_string == 6030) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5471); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5472, 6032, 6031); //@t
				var_0_object->AddReply(5479, -1, 6038); //@t
				return 0;
			}
			if(var_35_string == 6032) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5473); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5474, 6034, 6033); //@t
				var_0_object->AddReply(5478, -1, 6037); //@t
				return 0;
			}
			if(var_35_string == 6034) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5476, -1, 6035); //@t
				var_0_object->AddReply(5477, -1, 6036); //@t
				return 0;
			}
			if(var_35_string == 6575) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5971, 6580, 6576); //@t
				var_0_object->AddReply(5973, 6580, 6578); //@t
				return 0;
			}
			if(var_35_string == 6580) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5976, 6588, 6583); //@t
				var_0_object->AddReply(5977, 6585, 6584); //@t
				return 0;
			}
			if(var_35_string == 6585) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5979, -1, 6586); //@t
				var_0_object->AddReply(5980, -1, 6587); //@t
				return 0;
			}
			if(var_35_string == 6588) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5982, 6593, 6589); //@t
				var_0_object->AddReply(5983, 6591, 6590); //@t
				return 0;
			}
			if(var_35_string == 6591) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5984); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5985, 6593, 6592); //@t
				return 0;
			}
			if(var_35_string == 6593) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5986); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5987, 6595, 6594); //@t
				var_0_object->AddReply(5993, 6599, 6601); //@t
				return 0;
			}
			if(var_35_string == 6595) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5989, 6597, 6596); //@t
				var_0_object->AddReply(5994, 6597, 6603); //@t
				return 0;
			}
			if(var_35_string == 6597) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5991, 6599, 6598); //@t
				return 0;
			}
			if(var_35_string == 6599) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5992); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5995, 6609, 6605); //@t
				var_0_object->AddReply(5997, 6608, 6607); //@t
				return 0;
			}
			if(var_35_string == 6608) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6001, -1, 6611); //@t
				var_0_object->AddReply(6002, -1, 6612); //@t
				return 0;
			}
			if(var_35_string == 6609) {
				func_1302(var_36_bool, "Neutral");
				var_0_object->SetMessage(5999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6000, -1, 6610); //@t
				var_0_object->AddReply(5996, -1, 6606); //@t
				return 0;
			}
			var_3_string = true;
			bool var_1013_bool;
			func_5746(var_1013_bool);
			if(var_1013_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x527";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_5642();
			if(var_36_bool == 7322) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5840();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5852();
				object var_90_object = var_1_object;
				func_5891(var_0_object);
			}
			if(var_36_bool == 8137) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_5840();
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_5852();
				object var_122_object = var_1_object;
				func_5891(var_0_object);
			}
			if(var_36_bool == 7317) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_5846();
			}
			if(var_36_bool == 7313) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_5846();
			}
			if(var_35_string == 7320) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(6647); //@t
				var_0_object->ClearReplies(); //@t
				bool var_152_bool = false;
				bool var_153_bool;
				func_6264(var_1_object);
				if(var_153_bool != 0) {
					bool var_161_bool;
					func_6288(var_1_object);
					if(var_161_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0)
					var_0_object->AddReply(7373, 8135, 8134); //@t
				bool var_170_bool;
				func_6276(var_1_object);
				if(var_170_bool != 0)
					var_0_object->AddReply(6640, 7312, 7311); //@t
				var_0_object->AddReply(7533, -1, 8315); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xca9";
			EMIT "Pop(1)";
			EMIT "Push((int) 9438)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9439)";
			EMIT "Push((int) 10375)";
			EMIT "Push((int) 10374)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9449)";
			EMIT "Push((int) 10375)";
			EMIT "Push((int) 10385)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9450)";
			EMIT "Push((int) 10375)";
			EMIT "Push((int) 10387)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_35_string == 10375) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(9440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9441, 10377, 10376); //@t
				var_0_object->AddReply(9448, 10377, 10383); //@t
				return 0;
			}
			if(var_35_string == 10377) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(9442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9443, 10379, 10378); //@t
				var_0_object->AddReply(9447, -1, 10382); //@t
				return 0;
			}
			if(var_35_string == 10379) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(9444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9445, -1, 10380); //@t
				var_0_object->AddReply(9446, -1, 10381); //@t
				return 0;
			}
			if(var_35_string == 7312) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(6641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6643, 7316, 7315); //@t
				var_0_object->AddReply(6642, -1, 7313); //@t
				return 0;
			}
			if(var_35_string == 7316) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(6644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6645, -1, 7317); //@t
				return 0;
			}
			if(var_35_string == 8135) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(7374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7375, 7298, 8136); //@t
				return 0;
			}
			if(var_35_string == 7298) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(6629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6630, 7300, 7299); //@t
				return 0;
			}
			if(var_35_string == 7300) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(6631); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6632, 7302, 7301); //@t
				var_0_object->AddReply(6636, 7306, 7305); //@t
				return 0;
			}
			if(var_35_string == 7306) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(6637); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6638, 7302, 7307); //@t
				return 0;
			}
			if(var_35_string == 7302) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(6633); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6634, 7297, 7303); //@t
				var_0_object->AddReply(6635, 7297, 7304); //@t
				return 0;
			}
			if(var_35_string == 7297) {
				func_3241(var_36_bool, "Neutral");
				var_0_object->SetMessage(6628); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6648, -1, 7322); //@t
				var_0_object->AddReply(7376, -1, 8137); //@t
				return 0;
			}
			var_3_string = true;
			bool var_280_bool;
			func_5746(var_280_bool);
			if(var_280_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcba";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_5642();
			if(var_36_bool == 12015) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5972();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5937();
				object var_113_object = var_1_object;
				func_5978(var_0_object);
			}
			if(var_36_bool == 12018) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_5972();
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_5937();
				object var_145_object = var_1_object;
				func_5978(var_0_object);
			}
			if(var_36_bool == 12019) {
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_5972();
			}
			if(var_36_bool == 12023) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_5937();
				object var_155_object = var_1_object;
				func_5978(var_0_object);
			}
			if(var_36_bool == 12033) {
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_5994();
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_6000();
			}
			if(var_36_bool == 12029) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_5994();
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_object;
				func_6000();
			}
			if(var_36_bool == 10893) {
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_6030();
			}
			if(var_36_bool == 10894) {
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_6030();
			}
			if(var_36_bool == 10895) {
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_6030();
			}
			if(var_36_bool == 10888) {
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_6030();
			}
			if(var_36_bool == 10904) {
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_6036();
			}
			if(var_36_bool == 10914) {
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_6042();
			}
			if(var_36_bool == 10915) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_object;
				func_6042();
			}
			if(var_36_bool == 10916) {
				object var_228_object; object var_229_object;
				var_228_object = var_1_object;
				var_229_object = var_0_object;
				func_6042();
			}
			if(var_35_string == 11988) {
				bool var_232_bool = false;
				bool var_233_bool;
				func_6372(var_1_object);
				if(var_233_bool != 0) {
					bool var_241_bool;
					func_6384(var_1_object);
					if(var_241_bool != 0)
						var_232_bool = true;
				}
				if(var_232_bool != 0) {
					func_3875(var_36_bool, "Neutral");
					var_0_object->SetMessage(10844); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10845, 11990, 11989); //@t
					return 0;
				}
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10841); //@t
				var_0_object->ClearReplies(); //@t
				bool var_268_bool;
				func_6372(var_1_object);
				if(var_268_bool != 0)
					var_0_object->AddReply(10873, 12022, 12021); //@t
				bool var_273_bool = false;
				bool var_274_bool = false;
				bool var_275_bool;
				func_6396(var_1_object);
				if(var_275_bool != 0) {
					bool var_281_bool;
					func_6408(var_1_object);
					if(var_281_bool != 0)
						var_274_bool = true;
				}
				if(var_274_bool != 0) {
					bool var_287_bool;
					func_6468(var_287_bool, var_1_object);
					if(var_287_bool != 0)
						var_273_bool = true;
				}
				if(var_273_bool != 0)
					var_0_object->AddReply(10876, 12025, 12024); //@t
				bool var_298_bool = false;
				bool var_299_bool = false;
				bool var_300_bool;
				func_6396(var_1_object);
				if(var_300_bool != 0) {
					bool var_302_bool;
					func_6478(var_1_object);
					if(var_302_bool != 0)
						var_299_bool = true;
				}
				if(var_299_bool != 0) {
					bool var_304_bool;
					func_6468(var_304_bool, var_1_object);
					if(!var_304_bool) //@nz
						var_298_bool = true;
				}
				if(var_298_bool != 0)
					var_0_object->AddReply(11160, 12344, 12343); //@t
				bool var_310_bool;
				func_6420(var_1_object);
				if(var_310_bool != 0)
					var_0_object->AddReply(10842, 10885, 11986); //@t
				bool var_319_bool;
				func_6432(var_1_object);
				if(var_319_bool != 0)
					var_0_object->AddReply(9894, 10899, 10898); //@t
				bool var_328_bool;
				func_6444(var_1_object);
				if(var_328_bool != 0)
					var_0_object->AddReply(10843, 10909, 11987); //@t
				var_0_object->AddReply(11157, -1, 12342); //@t
				return 0;
			}
			if(var_35_string == 10909) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9905, 10911, 10910); //@t
				var_0_object->AddReply(9912, 10911, 10917); //@t
				var_0_object->AddReply(9913, 10911, 10919); //@t
				return 0;
			}
			if(var_35_string == 10911) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9907, 10913, 10912); //@t
				var_0_object->AddReply(9911, -1, 10916); //@t
				return 0;
			}
			if(var_35_string == 10913) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9909, -1, 10914); //@t
				var_0_object->AddReply(9910, -1, 10915); //@t
				return 0;
			}
			if(var_35_string == 10899) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9896, 10901, 10900); //@t
				var_0_object->AddReply(9901, 10906, 10905); //@t
				return 0;
			}
			if(var_35_string == 10906) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9903, 10901, 10907); //@t
				return 0;
			}
			if(var_35_string == 10901) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9898, 10903, 10902); //@t
				return 0;
			}
			if(var_35_string == 10903) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9900, -1, 10904); //@t
				return 0;
			}
			if(var_35_string == 10885) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9883, 10887, 10886); //@t
				var_0_object->AddReply(9893, 10887, 10896); //@t
				return 0;
			}
			if(var_35_string == 10887) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9886, 10890, 10889); //@t
				var_0_object->AddReply(9885, -1, 10888); //@t
				return 0;
			}
			if(var_35_string == 10890) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9888, 10892, 10891); //@t
				var_0_object->AddReply(9892, -1, 10895); //@t
				return 0;
			}
			if(var_35_string == 10892) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(9889); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9890, -1, 10893); //@t
				var_0_object->AddReply(9891, -1, 10894); //@t
				return 0;
			}
			if(var_35_string == 12344) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(11161); //@t
				var_0_object->ClearReplies(); //@t
				bool var_448_bool;
				func_6456(var_1_object);
				if(var_448_bool != 0)
					var_0_object->AddReply(11162, -1, 12345); //@t
				return 0;
			}
			if(var_35_string == 12025) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10878, 12030, 12026); //@t
				var_0_object->AddReply(10879, 12028, 12027); //@t
				return 0;
			}
			if(var_35_string == 12028) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10881, -1, 12029); //@t
				return 0;
			}
			if(var_35_string == 12030) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10883, 12032, 12031); //@t
				return 0;
			}
			if(var_35_string == 12032) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10885, -1, 12033); //@t
				return 0;
			}
			if(var_35_string == 12022) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10875, -1, 12023); //@t
				return 0;
			}
			if(var_35_string == 11990) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10846); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10847, 11994, 11991); //@t
				var_0_object->AddReply(10849, 11994, 11993); //@t
				var_0_object->AddReply(10848, 11994, 11992); //@t
				return 0;
			}
			if(var_35_string == 11994) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10852, 12003, 11997); //@t
				bool var_515_bool;
				func_6252(var_1_object);
				if(!var_515_bool) //@nz
					var_0_object->AddReply(10851, 12001, 11995); //@t
				bool var_525_bool;
				func_6252(var_1_object);
				if(var_525_bool != 0)
					var_0_object->AddReply(10853, 11999, 11998); //@t
				return 0;
			}
			if(var_35_string == 11999) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10854); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10855, 12003, 12000); //@t
				return 0;
			}
			if(var_35_string == 12001) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10856); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10857, 12003, 12002); //@t
				return 0;
			}
			if(var_35_string == 12003) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10858); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10859, 12007, 12006); //@t
				return 0;
			}
			if(var_35_string == 12007) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10861, 12010, 12008); //@t
				var_0_object->AddReply(10862, 12014, 12009); //@t
				return 0;
			}
			if(var_35_string == 12010) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10864, 12012, 12011); //@t
				return 0;
			}
			if(var_35_string == 12012) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10865); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10866, 12014, 12013); //@t
				return 0;
			}
			if(var_35_string == 12014) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10868, -1, 12015); //@t
				var_0_object->AddReply(10869, 12017, 12016); //@t
				return 0;
			}
			if(var_35_string == 12017) {
				func_3875(var_36_bool, "Neutral");
				var_0_object->SetMessage(10870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10871, -1, 12018); //@t
				var_0_object->AddReply(10872, -1, 12019); //@t
				return 0;
			}
			var_3_string = true;
			bool var_595_bool;
			func_5746(var_595_bool);
			if(var_595_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf34";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_5642();
			if(var_36_bool == 12437) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_6098();
			}
			if(var_35_string == 12435) {
				func_4923(var_36_bool, "Neutral");
				var_0_object->SetMessage(11245); //@t
				var_0_object->ClearReplies(); //@t
				bool var_63_bool = false;
				bool var_64_bool;
				func_6651(var_1_object);
				if(var_64_bool != 0) {
					bool var_72_bool;
					func_6663(var_1_object);
					if(var_72_bool != 0)
						var_63_bool = true;
				}
				if(var_63_bool != 0)
					var_0_object->AddReply(11247, 12438, 12437); //@t
				var_0_object->AddReply(11246, -1, 12436); //@t
				return 0;
			}
			if(var_35_string == 12438) {
				func_4923(var_36_bool, "Neutral");
				var_0_object->SetMessage(11248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11249, 12440, 12439); //@t
				return 0;
			}
			if(var_35_string == 12440) {
				func_4923(var_36_bool, "Neutral");
				var_0_object->SetMessage(11250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11251, 12442, 12441); //@t
				return 0;
			}
			if(var_35_string == 12442) {
				func_4923(var_36_bool, "Neutral");
				var_0_object->SetMessage(11252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11253, -1, 12443); //@t
				return 0;
			}
			var_3_string = true;
			bool var_105_bool;
			func_5746(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x134c";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int)
	{
		if(1 != 0) {
			func_5642();
			if(var_36_int == 14724) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_6072();
				object var_70_object = var_1_object;
				func_6081(var_0_object);
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_5834();
			}
			if(var_36_int == 14700) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_6092();
			}
			if(var_35_int == 14701) {
				bool var_101_bool;
				func_6555(var_1_object);
				if(var_101_bool != 0) {
					object var_109_object; object var_110_object;
					var_109_object = var_1_object;
					var_110_object = var_0_object;
					func_6066();
					func_5227(var_36_int, "Neutral");
					var_0_object->SetMessage(13464); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13465, 14704, 14702); //@t
					bool var_132_bool;
					func_6591(var_1_object);
					if(var_132_bool != 0)
						var_0_object->AddReply(13466, 14705, 14703); //@t
					return 0;
				}
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13462); //@t
				var_0_object->ClearReplies(); //@t
				bool var_143_bool = false;
				bool var_144_bool;
				func_6567(var_1_object);
				if(var_144_bool != 0) {
					bool var_150_bool;
					func_6579(var_1_object);
					if(var_150_bool != 0)
						var_143_bool = true;
				}
				if(var_143_bool != 0)
					var_0_object->AddReply(13463, 14713, 14700); //@t
				var_0_object->AddReply(13483, -1, 14721); //@t
				return 0;
			}
			if(var_35_int == 14713) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13477, 14715, 14714); //@t
				return 0;
			}
			if(var_35_int == 14715) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13480, 14718, 14717); //@t
				var_0_object->AddReply(13479, -1, 14716); //@t
				return 0;
			}
			if(var_35_int == 14718) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13481); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13482, -1, 14719); //@t
				return 0;
			}
			if(var_35_int == 14705) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13469, 14704, 14706); //@t
				bool var_193_bool;
				func_6543(var_1_object);
				if(var_193_bool != 0)
					var_0_object->AddReply(13470, 14708, 14707); //@t
				return 0;
			}
			if(var_35_int == 14708) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13471); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13472, 14711, 14709); //@t
				var_0_object->AddReply(13473, 14727, 14710); //@t
				return 0;
			}
			if(var_35_int == 14727) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13488); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13489, 14711, 14728); //@t
				return 0;
			}
			if(var_35_int == 14711) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13490, -1, 14730); //@t
				return 0;
			}
			if(var_35_int == 14704) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13467); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13475, 14723, 14712); //@t
				var_0_object->AddReply(13484, -1, 14722); //@t
				return 0;
			}
			if(var_35_int == 14723) {
				func_5227(var_36_int, "Neutral");
				var_0_object->SetMessage(13485); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13486, -1, 14724); //@t
				return 0;
			}
			var_3_string = true;
			bool var_243_bool;
			func_5746(var_243_bool);
			if(var_243_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x147c";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_6144(bool var_307_bool)
{
	int var_309_int;
	func_5659(var_309_int, "ood1Kapella3");
	if(var_309_int == 0) {
		var_307_bool = true;
		return 0;
	}
	var_307_bool = false;
}


// @pe
void func_5120(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_791_object, object var_792_object)
{
	var_0_object = var_792_object;
	var_1_object = var_791_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_798_bool;
		func_6555(var_1_object);
		if(var_798_bool != 0) {
			object var_804_object; object var_805_object;
			var_804_object = var_1_object;
			var_805_object = var_0_object;
			func_6066();
			func_5227(var_792_object, "Neutral");
			var_0_object->SetMessage(13464); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(13465, 14704, 14702); //@t
			bool var_817_bool;
			func_6591(var_1_object);
			if(var_817_bool != 0)
				var_0_object->AddReply(13466, 14705, 14703); //@t
		} else {
					func_5227(var_792_object, "Neutral");
					var_0_object->SetMessage(13462); //@t
					var_0_object->ClearReplies(); //@t
					bool var_836_bool = false;
					bool var_837_bool;
					func_6567(var_1_object);
					if(var_837_bool != 0) {
						bool var_843_bool;
						func_6579(var_1_object);
						if(var_843_bool != 0)
							var_836_bool = true;
					}
					if(var_836_bool != 0)
						var_0_object->AddReply(13463, 14713, 14700); //@t
					var_0_object->AddReply(13483, -1, 14721); //@t
		}
	}
	for(;;) {
		bool var_826_bool;
		func_5746(var_826_bool);
		if(var_826_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5624(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5226;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5226:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1404";


// @pe
void func_6663(bool var_72_bool)
{
	int var_74_int;
	func_5659(var_74_int, "d4q02");
	if(var_74_int == 0) {
		var_72_bool = true;
		return 0;
	}
	var_72_bool = false;
}


void func_5642(void)
{
	bool var_38_bool;
	func_5746(var_38_bool);
	if(var_38_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_6156(bool var_324_bool)
{
	int var_326_int;
	func_5659(var_326_int, "ood1Kapella4");
	if(var_326_int == 0) {
		var_324_bool = true;
		return 0;
	}
	var_324_bool = false;
}


void func_5649(cvector var_75_cvector, cvector var_76_cvector)
{
	float var_79_float = sqrt(var_76_cvector | var_76_cvector);
	if(var_79_float < 0.000001)
		var_75_cvector = [0.0, 0.0, 0.0];
	var_75_cvector = var_76_cvector / var_79_float;
}


// @pe
void func_6675(bool var_458_bool)
{
	int var_460_int;
	func_5659(var_460_int, "KnowNotkin");
	if(var_460_int == 1)
		var_458_bool = true;
	var_458_bool = false;
}


// @pe
void func_6168(bool var_313_bool)
{
	int var_315_int;
	func_5659(var_315_int, "d1q01FirstGeorgVisit");
	if(var_315_int == 1)
		var_313_bool = true;
	var_313_bool = false;
}


void func_5659(int var_103_int, string var_104_string)
{
	int var_106_int;
	@GetVariable(var_104_string, var_106_int);
	var_106_int = var_103_int;
}


// @pe
void func_6687(bool var_78_bool)
{
	int var_80_int;
	func_5659(var_80_int, "ood6Kapella3");
	if(var_80_int == 0) {
		var_78_bool = true;
		return 0;
	}
	var_78_bool = false;
}


void func_5664(object var_99_object, string var_100_string)
{
	object var_103_object;
	@GetMainOutdoorScene(var_103_object);
	object var_104_object;
	@AddBlankActor(var_104_object, var_103_object, var_100_string, (var_100_string + ".bin"));
	var_104_object = var_99_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6180(bool var_347_bool)
{
	int var_349_int;
	func_5659(var_349_int, "ood1Kapella5");
	if(var_349_int == 0) {
		var_347_bool = true;
		return 0;
	}
	var_347_bool = false;
}


// @pe
void func_555(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_5746(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string;
	func_5624(var_96_string);
	var_2_object = var_96_string;
}


// @pe
void func_6699(bool var_442_bool)
{
	int var_444_int;
	func_5659(var_444_int, "KnowSpi4ka");
	if(var_444_int == 1)
		var_442_bool = true;
	var_442_bool = false;
}


void func_5675(object var_78_object, object var_79_object, int var_80_int)
{
	int var_84_int;
	var_79_object->GetItemID(var_84_int);
	int var_85_int;
	@GetInvItemProperty(var_85_int, var_84_int, "Category");
	bool var_86_bool;
	var_78_object->AddItem(var_86_bool, var_79_object, var_85_int, var_80_int);
	if(!var_86_bool) //@nz
		var_78_object->DropItems(var_79_object, var_80_int);
}


// @pe
void func_6192(bool var_267_bool)
{
	int var_269_int;
	func_5659(var_269_int, "d1q03");
	if(var_269_int == 0) {
		var_267_bool = true;
		return 0;
	}
	var_267_bool = false;
}


void func_49(object var_0_object, int var_39_int, object var_40_object)
{
	var_0_object = var_40_object;
	bool var_50_bool; object var_51_object;
	var_40_object = var_51_object;
	func_5564(var_50_bool, var_51_object);
	if(!var_50_bool) { //@nz
		var_39_int = -2;
		return 8;
	}
	object var_46_object;
	@CreateDialog(var_46_object);
	int var_91_int;
	func_5742(var_91_int);
	var_46_object->SetNPCName(var_91_int);
	string var_92_string;
	func_5744(var_92_string);
	var_46_object->SetPhoto(var_92_string);
	int var_93_int;
	func_6846(var_93_int);
	var_46_object->SetPlayerName(var_93_int);
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	@DoDialog(var_46_object);
	object var_102_object; object var_103_object;
	var_40_object = var_102_object;
	var_46_object = var_103_object;
	TaskCall(3);
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	bool var_49_bool;
	var_46_object->IsDialogEnd(var_49_bool);
	
	for(;;) {
		var_147_bool = !var_49_bool; //@nz
		if(var_147_bool == 0) goto Label_101;
		@sync();
		var_46_object->IsDialogEnd(var_49_bool);
	}
	
Label_101:
	object var_148_object;
	var_40_object = var_148_object;
	func_5620();
	@StopDialog(var_46_object);
	var_46_object->GetReturnValue(-1);
	int var_48_int = var_39_int;
}
EMIT "Stack[-4] = 0";


void func_3633(object var_0_object, int var_474_int, object var_475_object)
{
	var_0_object = var_475_object;
	bool var_485_bool; object var_486_object;
	var_475_object = var_486_object;
	func_5564(var_485_bool, var_486_object);
	if(!var_485_bool) { //@nz
		var_474_int = -2;
		return 8;
	}
	object var_481_object;
	@CreateDialog(var_481_object);
	int var_488_int;
	func_5742(var_488_int);
	var_481_object->SetNPCName(var_488_int);
	string var_489_string;
	func_5744(var_489_string);
	var_481_object->SetPhoto(var_489_string);
	int var_490_int;
	func_6846(var_490_int);
	var_481_object->SetPlayerName(var_490_int);
	bool var_482_bool;
	@IsOverrideActive(var_482_bool);
	if(var_482_bool != 0) {
		var_474_int = -2;
		return 8;
	}
	@DoDialog(var_481_object);
	object var_492_object; object var_493_object;
	var_475_object = var_492_object;
	var_481_object = var_493_object;
	TaskCall(11);
	func_3696(var_494_object, var_495_object, var_496_string, var_497_bool, var_492_object, var_493_object);
	TaskReturn();
	bool var_484_bool;
	var_481_object->IsDialogEnd(var_484_bool);
	
	for(;;) {
		var_603_bool = !var_484_bool; //@nz
		if(var_603_bool == 0) goto Label_3685;
		@sync();
		var_481_object->IsDialogEnd(var_484_bool);
	}
	
Label_3685:
	object var_604_object;
	var_475_object = var_604_object;
	func_5620();
	@StopDialog(var_481_object);
	var_481_object->GetReturnValue(-1);
	int var_483_int = var_474_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6711(bool var_698_bool)
{
	int var_700_int;
	func_5659(var_700_int, "KnowUklad");
	if(var_700_int == 1)
		var_698_bool = true;
	var_698_bool = false;
}


void func_5688(object var_73_object, string var_74_string, int var_75_int)
{
	object var_77_object;
	@CreateInvItem(var_77_object);
	var_77_object->SetItemName(var_74_string);
	object var_78_object; object var_79_object; int var_80_int;
	var_73_object = var_78_object;
	var_77_object = var_79_object;
	var_75_int = var_80_int;
	func_5675(var_78_object, var_79_object, var_80_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6204(bool var_330_bool)
{
	int var_332_int;
	func_5659(var_332_int, "d1q03");
	if(var_332_int == 1000)
		var_330_bool = true;
	var_330_bool = false;
}


// @pe
void func_3134(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_421_object, object var_422_object)
{
	var_0_object = var_422_object;
	var_1_object = var_421_object;
	var_3_object = false;
	if(1 != 0) {
		func_3241(var_422_object, "Neutral");
		var_0_object->SetMessage(6647); //@t
		var_0_object->ClearReplies(); //@t
		bool var_434_bool = false;
		bool var_435_bool;
		func_6264(var_1_object);
		if(var_435_bool != 0) {
			bool var_441_bool;
			func_6288(var_1_object);
			if(var_441_bool != 0)
				var_434_bool = true;
		}
		if(var_434_bool != 0)
			var_0_object->AddReply(7373, 8135, 8134); //@t
		bool var_450_bool;
		func_6276(var_1_object);
		if(var_450_bool != 0)
			var_0_object->AddReply(6640, 7312, 7311); //@t
		var_0_object->AddReply(7533, -1, 8315); //@t
		goto Label_3211;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xca9";
	EMIT "Pop(1)";
	EMIT "Push((int) 9438)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9439)";
	EMIT "Push((int) 10375)";
	EMIT "Push((int) 10374)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9449)";
	EMIT "Push((int) 10375)";
	EMIT "Push((int) 10385)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9450)";
	EMIT "Push((int) 10375)";
	EMIT "Push((int) 10387)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xc8b";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc42";
	}
Label_3211:
	bool var_462_bool;
	func_5746(var_462_bool);
	if(var_462_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5624(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3240;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3240:
		return 0;

	}
	
}


// @pe
void func_6723(bool var_259_bool)
{
	int var_261_int;
	func_5659(var_261_int, "ood1Kapella1");
	if(var_261_int == 0) {
		var_259_bool = true;
		return 0;
	}
	var_259_bool = false;
}


void func_5701(bool var_107_bool, string var_108_string, string var_109_string)
{
	object var_111_object;
	@FindActor(var_111_object, var_108_string);
	if(var_111_object == null)
		var_107_bool = false;
	@Trigger(var_111_object, var_109_string);
	var_107_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6216(bool var_336_bool)
{
	int var_338_int;
	func_5659(var_338_int, "d1q03IsKapella");
	if(var_338_int == 1)
		var_336_bool = true;
	var_336_bool = false;
}


// @pe
void func_6735(bool var_297_bool)
{
	int var_299_int;
	func_5659(var_299_int, "ood1Kapella2");
	if(var_299_int == 0) {
		var_297_bool = true;
		return 0;
	}
	var_297_bool = false;
}


void func_5713(float var_62_float)
{
	float var_64_float;
	@GetGameTime(var_64_float);
	var_64_float = var_62_float;
}


// @pe
void func_6228(bool var_362_bool)
{
	int var_364_int;
	func_5659(var_364_int, "ood1Kapella6");
	if(var_364_int == 0) {
		var_362_bool = true;
		return 0;
	}
	var_362_bool = false;
}


void func_5718(int var_152_int)
{
	float var_154_float;
	@GetGameTime(var_154_float);
	var_152_int = 1 + (var_154_float / 24);
}


void func_6747(bool var_289_bool, object var_290_object)
{
	float var_292_float;
	var_290_object->GetProperty("disease", var_292_float);
	var_289_bool = var_292_float == 0;
}


// @pe
void func_5727(bool var_150_bool, int var_151_int)
{
	int var_152_int;
	func_5718(var_152_int);
	var_150_bool = var_152_int == var_151_int;
}


// @pe
void func_6240(bool var_368_bool)
{
	int var_370_int;
	func_5659(var_370_int, "d1q03");
	if(var_370_int == -1)
		var_368_bool = true;
	var_368_bool = false;
}


void func_6754(object var_60_object)
{
	object var_62_object;
	@GetDiaryRoot(var_62_object);
	if(!var_62_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_60_object = false;
	}
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


void func_5733(bool var_857_bool)
{
	func_5624("No");
	bool var_859_bool;
	@lshWaitForAnimEnd(var_859_bool);
	var_859_bool = var_857_bool;
}


// @pe
void func_5227(object var_2_object, string var_113_string)
{
	bool var_114_bool;
	func_5746(var_114_bool);
	if(!var_114_bool) //@nz
		return 0;
	if(var_113_string == var_2_object)
		return 0;
	string var_117_string;
	func_5624(var_117_string);
	var_2_object = var_117_string;
}


// @pe
void func_6252(bool var_515_bool)
{
	int var_517_int;
	func_5659(var_517_int, "KnowAgo");
	if(var_517_int == 1)
		var_515_bool = true;
	var_515_bool = false;
}


void func_5742(int var_91_int)
{
	var_91_int = 2863;
}


void func_6767(bool var_51_bool, object var_52_object, int var_53_int)
{
	object var_60_object;
	func_6754(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	object var_58_object;
	var_57_object->Find(var_53_int, var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_53_int);
		var_51_bool = false;
	}
	var_58_object->AddChild(var_52_object);
	@SetVariable("player_diary", 1);
	int var_59_int;
	var_52_object->GetCategory(var_59_int);
	@SetDiarySection(var_59_int);
	var_51_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_5744(string var_92_string)
{
	var_92_string = "ui/NPC_Kapella.png";
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_102_object, object var_103_object)
{
	var_0_object = var_103_object;
	var_1_object = var_102_object;
	var_3_object = false;
	if(1 != 0) {
		object var_109_object; object var_110_object;
		var_109_object = var_1_object;
		var_110_object = var_0_object;
		func_5778();
		object var_113_object; object var_114_object;
		var_113_object = var_1_object;
		var_114_object = var_0_object;
		func_5784();
		func_180(var_103_object, "Neutral");
		var_0_object->SetMessage(473); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(476, 547, 546); //@t
		var_0_object->AddReply(474, 545, 544); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_139_bool;
	func_5746(var_139_bool);
	if(var_139_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5624(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


void func_5746(bool var_38_bool)
{
	var_38_bool = true;
}


// @pe
void func_3696(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_492_object, object var_493_object)
{
	var_0_object = var_493_object;
	var_1_object = var_492_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_499_bool = false;
		bool var_500_bool;
		func_6372(var_1_object);
		if(var_500_bool != 0) {
			bool var_506_bool;
			func_6384(var_1_object);
			if(var_506_bool != 0)
				var_499_bool = true;
		}
		if(var_499_bool != 0) {
			func_3875(var_493_object, "Neutral");
			var_0_object->SetMessage(10844); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(10845, 11990, 11989); //@t
		} else {
					func_3875(var_493_object, "Neutral");
					var_0_object->SetMessage(10841); //@t
					var_0_object->ClearReplies(); //@t
					bool var_531_bool;
					func_6372(var_1_object);
					if(var_531_bool != 0)
						var_0_object->AddReply(10873, 12022, 12021); //@t
					bool var_536_bool = false;
					bool var_537_bool = false;
					bool var_538_bool;
					func_6396(var_1_object);
					if(var_538_bool != 0) {
						bool var_544_bool;
						func_6408(var_1_object);
						if(var_544_bool != 0)
							var_537_bool = true;
					}
					if(var_537_bool != 0) {
						bool var_550_bool;
						func_6468(var_550_bool, var_1_object);
						if(var_550_bool != 0)
							var_536_bool = true;
					}
					if(var_536_bool != 0)
						var_0_object->AddReply(10876, 12025, 12024); //@t
					bool var_561_bool = false;
					bool var_562_bool = false;
					bool var_563_bool;
					func_6396(var_1_object);
					if(var_563_bool != 0) {
						bool var_565_bool;
						func_6478(var_1_object);
						if(var_565_bool != 0)
							var_562_bool = true;
					}
					if(var_562_bool != 0) {
						bool var_567_bool;
						func_6468(var_567_bool, var_1_object);
						if(!var_567_bool) //@nz
							var_561_bool = true;
					}
					if(var_561_bool != 0)
						var_0_object->AddReply(11160, 12344, 12343); //@t
					bool var_573_bool;
					func_6420(var_1_object);
					if(var_573_bool != 0)
						var_0_object->AddReply(10842, 10885, 11986); //@t
					bool var_582_bool;
					func_6432(var_1_object);
					if(var_582_bool != 0)
						var_0_object->AddReply(9894, 10899, 10898); //@t
					bool var_591_bool;
					func_6444(var_1_object);
					if(var_591_bool != 0)
						var_0_object->AddReply(10843, 10909, 11987); //@t
					var_0_object->AddReply(11157, -1, 12342); //@t
		}
	}
	for(;;) {
		bool var_521_bool;
		func_5746(var_521_bool);
		if(var_521_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5624(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3874;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3874:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe74";


// @pe
void func_5748(void)
{
	@SetVariable("KnowUklad", 1);
}


// @pe
void func_6264(bool var_153_bool)
{
	int var_155_int;
	func_5659(var_155_int, "ood2Kapella1");
	if(var_155_int == 0) {
		var_153_bool = true;
		return 0;
	}
	var_153_bool = false;
}


// @pe
void func_5754(void)
{
	@SetVariable("ood1Kapella1", 1);
}


// @pe
void func_5760(void)
{
	@SetVariable("ood1Kapella2", 1);
}


// @pe
void func_6276(bool var_170_bool)
{
	int var_172_int;
	func_5659(var_172_int, "ood2Kapella2");
	if(var_172_int == 0) {
		var_170_bool = true;
		return 0;
	}
	var_170_bool = false;
}


// @pe
void func_5766(void)
{
	@SetVariable("ood1Kapella3", 1);
}


// @pe
void func_5772(void)
{
	@SetVariable("ood1Kapella4", 1);
}


void func_6796(object var_51_object)
{
	object var_54_object; object var_55_object;
	@GetMainOutdoorScene(var_54_object);
	if(var_54_object == null) {
		@Trace("Can't find main outdoor scene");
		var_55_object = null;
		var_55_object = var_51_object;
	}
	var_54_object->GetMap(var_55_object);
	var_55_object = var_51_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6288(bool var_161_bool)
{
	int var_163_int;
	func_5659(var_163_int, "d2q01");
	if(var_163_int == 2)
		var_161_bool = true;
	var_161_bool = false;
}


// @pe
void func_5778(void)
{
	@SetVariable("KnowKaterina", 1);
}


// @pe
void func_5784(void)
{
	@SetVariable("KnowKapella", 1);
}


// @pe
void func_6300(bool var_384_bool)
{
	int var_386_int;
	func_5659(var_386_int, "ood1Kapella7");
	if(var_386_int == 0) {
		var_384_bool = true;
		return 0;
	}
	var_384_bool = false;
}


void func_6813(object var_115_object, string var_116_string, float var_117_float)
{
	object var_125_object;
	@GetMainOutdoorScene(var_125_object);
	if(var_125_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_123_cvector;
	cvector var_124_cvector;
	bool var_126_bool;
	var_125_object->GetLocator(var_116_string, var_126_bool, var_123_cvector, var_124_cvector);
	if(!var_126_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_116_string) + " doesnt exist");
	var_125_object->GetMap(var_115_object);
	if(var_115_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_136_float = GetByIndex(var_123_cvector, 0);
	var_137_float = GetByIndex(var_123_cvector, 2);
	var_115_object->SetMapParams(var_136_float, var_137_float, var_117_float);
}
EMIT "Stack[-2] = 0";


void func_5790(void)
{
	@SetVariable("d1q03IsKapella", 1);
	object var_51_object;
	func_6796(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	float var_62_float;
	func_5713(var_62_float);
	var_48_object->AddMark("d1q03KapellaGotoOspina", "pt_map_ospina", 0, 8641, var_62_float);
	func_6863();
	object var_90_object;
	func_5664(var_90_object, "quest_d1_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_6312(bool var_400_bool)
{
	int var_402_int;
	func_5659(var_402_int, "ood1Kapella8");
	if(var_402_int == 0) {
		var_400_bool = true;
		return 0;
	}
	var_400_bool = false;
}


// @pe
void func_3241(object var_2_object, string var_136_string)
{
	bool var_137_bool;
	func_5746(var_137_bool);
	if(!var_137_bool) //@nz
		return 0;
	if(var_136_string == var_2_object)
		return 0;
	string var_140_string;
	func_5624(var_140_string);
	var_2_object = var_140_string;
}


// @pe
void func_180(object var_2_object, string var_49_string)
{
	bool var_50_bool;
	func_5746(var_50_bool);
	if(!var_50_bool) //@nz
		return 0;
	if(var_49_string == var_2_object)
		return 0;
	string var_53_string;
	func_5624(var_53_string);
	var_2_object = var_53_string;
}


// @pe
void func_6324(bool var_416_bool)
{
	int var_418_int;
	func_5659(var_418_int, "ood1Kapella9");
	if(var_418_int == 0) {
		var_416_bool = true;
		return 0;
	}
	var_416_bool = false;
}


void func_4788(object var_0_object, int var_607_int, object var_608_object)
{
	var_0_object = var_608_object;
	bool var_618_bool; object var_619_object;
	var_608_object = var_619_object;
	func_5564(var_618_bool, var_619_object);
	if(!var_618_bool) { //@nz
		var_607_int = -2;
		return 8;
	}
	object var_614_object;
	@CreateDialog(var_614_object);
	int var_621_int;
	func_5742(var_621_int);
	var_614_object->SetNPCName(var_621_int);
	string var_622_string;
	func_5744(var_622_string);
	var_614_object->SetPhoto(var_622_string);
	int var_623_int;
	func_6846(var_623_int);
	var_614_object->SetPlayerName(var_623_int);
	bool var_615_bool;
	@IsOverrideActive(var_615_bool);
	if(var_615_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	@DoDialog(var_614_object);
	object var_625_object; object var_626_object;
	var_608_object = var_625_object;
	var_614_object = var_626_object;
	TaskCall(13);
	func_4851(var_627_object, var_628_object, var_629_string, var_630_bool, var_625_object, var_626_object);
	TaskReturn();
	bool var_617_bool;
	var_614_object->IsDialogEnd(var_617_bool);
	
	for(;;) {
		var_665_bool = !var_617_bool; //@nz
		if(var_665_bool == 0) goto Label_4840;
		@sync();
		var_614_object->IsDialogEnd(var_617_bool);
	}
	
Label_4840:
	object var_666_object;
	var_608_object = var_666_object;
	func_5620();
	@StopDialog(var_614_object);
	var_614_object->GetReturnValue(-1);
	int var_616_int = var_607_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5817(void)
{
	@SetVariable("ood1Kapella6", 1);
}


void func_6846(int var_93_int)
{
	int var_95_int;
	@GetVariable("player", var_95_int);
	if(var_95_int == 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x1acd";
	}
	if(var_95_int == 1) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
}


// @pe
void func_5823(object var_765_object)
{
	@Trace("funduk3 is given");
	object var_768_object;
	var_765_object = var_768_object;
	func_5688(var_768_object, "funduk", 3);
}


// @pe
void func_6336(bool var_432_bool)
{
	int var_434_int;
	func_5659(var_434_int, "ood1Kapella10");
	if(var_434_int == 0) {
		var_432_bool = true;
		return 0;
	}
	var_432_bool = false;
}


// @pe
void func_5834(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_6348(bool var_448_bool)
{
	int var_450_int;
	func_5659(var_450_int, "ood1Kapella11");
	if(var_450_int == 0) {
		var_448_bool = true;
		return 0;
	}
	var_448_bool = false;
}


void func_6863(void)
{
	@Trace("Adding diary entry");
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 37, 2, 12119);
	bool var_71_bool; object var_72_object;
	var_66_object = var_72_object;
	func_6767(var_71_bool, var_72_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5840(void)
{
	@SetVariable("ood2Kapella1", 1);
}


// @pe
void func_5846(void)
{
	@SetVariable("ood2Kapella2", 1);
}


// @pe
void func_6360(bool var_464_bool)
{
	int var_466_int;
	func_5659(var_466_int, "ood1Kapella12");
	if(var_466_int == 0) {
		var_464_bool = true;
		return 0;
	}
	var_464_bool = false;
}


void func_5852(void)
{
	@SetVariable("d2q01", 3);
	object var_51_object;
	func_6796(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	float var_62_float;
	func_5713(var_62_float);
	var_48_object->AddMark("d2q01KapellaGotoSpi4ka", "pt_map_spi4ka", 1, 11389, var_62_float);
	func_6879();
}
EMIT "Stack[-1] = 0";


void func_6879(void)
{
	@Trace("Adding diary entry");
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 52, 1, 12134);
	bool var_71_bool; object var_72_object;
	var_66_object = var_72_object;
	func_6767(var_71_bool, var_72_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6372(bool var_233_bool)
{
	int var_235_int;
	func_5659(var_235_int, "d3q03");
	if(var_235_int == 0) {
		var_233_bool = true;
		return 0;
	}
	var_233_bool = false;
}


void func_6895(void)
{
	@Trace("Adding diary entry");
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 27, 2, 3367);
	bool var_71_bool; object var_72_object;
	var_66_object = var_72_object;
	func_6767(var_71_bool, var_72_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6384(bool var_241_bool)
{
	int var_243_int;
	func_5659(var_243_int, "ood3Kapella1");
	if(var_243_int == 0) {
		var_241_bool = true;
		return 0;
	}
	var_241_bool = false;
}


// @pe
void func_5875(object var_99_object)
{
	object var_103_object;
	func_6796(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	func_6813(var_100_object, "pt_map_ospina", (float)2);
	object var_123_object;
	func_6796(var_123_object);
	var_99_object->ShowMap(var_123_object);
}


// @pe
void func_4851(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_625_object, object var_626_object)
{
	var_0_object = var_626_object;
	var_1_object = var_625_object;
	var_3_object = false;
	if(1 != 0) {
		func_4923(var_626_object, "Neutral");
		var_0_object->SetMessage(11245); //@t
		var_0_object->ClearReplies(); //@t
		bool var_638_bool = false;
		bool var_639_bool;
		func_6651(var_1_object);
		if(var_639_bool != 0) {
			bool var_645_bool;
			func_6663(var_1_object);
			if(var_645_bool != 0)
				var_638_bool = true;
		}
		if(var_638_bool != 0)
			var_0_object->AddReply(11247, 12438, 12437); //@t
		var_0_object->AddReply(11246, -1, 12436); //@t
		goto Label_4893;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12f7";
	}
Label_4893:
	bool var_657_bool;
	func_5746(var_657_bool);
	if(var_657_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5624(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4922;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4922:
		return 0;

	}
	
}


// @pe
void func_6396(bool var_275_bool)
{
	int var_277_int;
	func_5659(var_277_int, "d3q03");
	if(var_277_int == 2)
		var_275_bool = true;
	var_275_bool = false;
}


void func_6911(void)
{
	@Trace("Adding diary entry");
	object var_91_object;
	@CreateDiaryEntry(var_91_object, 83, 2, 12165);
	bool var_96_bool; object var_97_object;
	var_91_object = var_97_object;
	func_6767(var_96_bool, var_97_object, 27);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5891(object var_91_object)
{
	object var_95_object;
	func_6796(var_95_object);
	object var_92_object;
	var_95_object = var_92_object;
	func_6813(var_92_object, "pt_map_spi4ka", (float)2);
	object var_115_object;
	func_6796(var_115_object);
	var_91_object->ShowMap(var_115_object);
}


// @pe
void func_6408(bool var_281_bool)
{
	int var_283_int;
	func_5659(var_283_int, "ood3Kapella2");
	if(var_283_int == 0) {
		var_281_bool = true;
		return 0;
	}
	var_281_bool = false;
}


void func_6927(void)
{
	@Trace("Adding diary entry");
	object var_175_object;
	@CreateDiaryEntry(var_175_object, 85, 2, 12167);
	bool var_180_bool; object var_181_object;
	var_175_object = var_181_object;
	func_6767(var_180_bool, var_181_object, 27);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5907(void)
{
	@SetVariable("ood1Kapella7", 1);
}


// @pe
void func_6420(bool var_310_bool)
{
	int var_312_int;
	func_5659(var_312_int, "ood3Kapella3");
	if(var_312_int == 0) {
		var_310_bool = true;
		return 0;
	}
	var_310_bool = false;
}


// @pe
void func_1302(object var_2_object, string var_273_string)
{
	bool var_274_bool;
	func_5746(var_274_bool);
	if(!var_274_bool) //@nz
		return 0;
	if(var_273_string == var_2_object)
		return 0;
	string var_277_string;
	func_5624(var_277_string);
	var_2_object = var_277_string;
}


// @pe
void func_5913(void)
{
	@SetVariable("ood1Kapella8", 1);
}


// @pe
void func_5919(void)
{
	@SetVariable("ood1Kapella9", 1);
}


// @pe
void func_6432(bool var_319_bool)
{
	int var_321_int;
	func_5659(var_321_int, "ood3Kapella4");
	if(var_321_int == 0) {
		var_319_bool = true;
		return 0;
	}
	var_319_bool = false;
}


void func_6943(void)
{
	@Trace("Adding diary entry");
	object var_46_object;
	@CreateDiaryEntry(var_46_object, 127, 2, 13772);
	bool var_51_bool; object var_52_object;
	var_46_object = var_52_object;
	func_6767(var_51_bool, var_52_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3875(object var_2_object, string var_247_string)
{
	bool var_248_bool;
	func_5746(var_248_bool);
	if(!var_248_bool) //@nz
		return 0;
	if(var_247_string == var_2_object)
		return 0;
	string var_251_string;
	func_5624(var_251_string);
	var_2_object = var_251_string;
}


// @pe
void func_5925(void)
{
	@SetVariable("ood1Kapella10", 1);
}


// @pe
void func_5931(void)
{
	@SetVariable("ood1Kapella12", 1);
}


// @pe
void func_6444(bool var_328_bool)
{
	int var_330_int;
	func_5659(var_330_int, "ood3Kapella5");
	if(var_330_int == 0) {
		var_328_bool = true;
		return 0;
	}
	var_328_bool = false;
}


void func_6959(void)
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


void func_5937(void)
{
	@SetVariable("d3q03", 1);
	object var_51_object;
	func_6796(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	float var_62_float;
	func_5713(var_62_float);
	var_48_object->AddMark("d3q03KapellaBoyLocation", "pt_d3q03_boy", 0, 11156, var_62_float);
	func_6895();
	func_6911();
	object var_99_object;
	func_5664(var_99_object, "quest_d3_03");
	bool var_107_bool;
	func_5701(var_107_bool, "quest_d3_03", "boy");
}
EMIT "Stack[-1] = 0";


// @pe
void func_6963(object var_36_object)
{
	var_37_bool = GlobalVars[1];
	if(!var_37_bool) { //@nz
		int var_39_int; object var_40_object;
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_149_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_150_bool;
	func_5727(var_150_bool, 1);
	if(var_150_bool != 0) {
		int var_158_int; object var_159_object;
		var_36_object = var_159_object;
		TaskCall(6);
		func_933(var_160_object, var_158_int, var_159_object);
		TaskReturn();
		return 0;
	}
	bool var_401_bool;
	func_5727(var_401_bool, 2);
	if(var_401_bool != 0) {
		int var_403_int; object var_404_object;
		var_36_object = var_404_object;
		TaskCall(8);
		func_3071(var_405_object, var_403_int, var_404_object);
		TaskReturn();
		return 0;
	}
	bool var_472_bool;
	func_5727(var_472_bool, 3);
	if(var_472_bool != 0) {
		int var_474_int; object var_475_object;
		var_36_object = var_475_object;
		TaskCall(10);
		func_3633(var_476_object, var_474_int, var_475_object);
		TaskReturn();
		return 0;
	}
	bool var_605_bool;
	func_5727(var_605_bool, 4);
	if(var_605_bool != 0) {
		int var_607_int; object var_608_object;
		var_36_object = var_608_object;
		TaskCall(12);
		func_4788(var_609_object, var_607_int, var_608_object);
		TaskReturn();
		return 0;
	}
	bool var_667_bool;
	func_5727(var_667_bool, 6);
	if(var_667_bool != 0) {
		int var_669_int; object var_670_object;
		var_36_object = var_670_object;
		TaskCall(4);
		func_350(var_671_object, var_669_int, var_670_object);
		TaskReturn();
		return 0;
	}
	bool var_771_bool;
	func_5727(var_771_bool, 8);
	if(var_771_bool != 0) {
		int var_773_int; object var_774_object;
		var_36_object = var_774_object;
		TaskCall(14);
		func_5057(var_775_object, var_773_int, var_774_object);
		TaskReturn();
		return 0;
	}
	bool var_857_bool;
	func_5733(var_857_bool);
}


// @pe
void func_6456(bool var_448_bool)
{
	int var_450_int;
	func_5659(var_450_int, "d3q01");
	if(var_450_int == -1)
		var_448_bool = true;
	var_448_bool = false;
}


// @pe
void func_4923(object var_2_object, string var_47_string)
{
	bool var_48_bool;
	func_5746(var_48_bool);
	if(!var_48_bool) //@nz
		return 0;
	if(var_47_string == var_2_object)
		return 0;
	string var_51_string;
	func_5624(var_51_string);
	var_2_object = var_51_string;
}


// @pe
void func_6468(bool var_287_bool, object var_288_object)
{
	object var_290_object;
	var_288_object = var_290_object;
	bool var_289_bool;
	func_6747(var_289_bool, var_290_object);
	if(var_289_bool != 0) {
		var_287_bool = true;
		return 0;
	}
	var_287_bool = false;
}


// @pe
void func_6478(bool var_302_bool)
{
	var_302_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_6483(bool var_170_bool)
{
	int var_172_int;
	func_5659(var_172_int, "d6q02");
	if(var_172_int == 0) {
		var_170_bool = true;
		return 0;
	}
	var_170_bool = false;
}


// @pe
void func_5972(void)
{
	@SetVariable("ood3Kapella1", 1);
}


// @pe
void func_5978(object var_114_object)
{
	object var_118_object;
	func_6796(var_118_object);
	object var_115_object;
	var_118_object = var_115_object;
	func_6813(var_115_object, "pt_d3q03_boy", (float)2);
	object var_138_object;
	func_6796(var_138_object);
	var_114_object->ShowMap(var_138_object);
}


void func_350(object var_0_object, int var_669_int, object var_670_object)
{
	var_0_object = var_670_object;
	bool var_680_bool; object var_681_object;
	var_670_object = var_681_object;
	func_5564(var_680_bool, var_681_object);
	if(!var_680_bool) { //@nz
		var_669_int = -2;
		return 8;
	}
	object var_676_object;
	@CreateDialog(var_676_object);
	int var_683_int;
	func_5742(var_683_int);
	var_676_object->SetNPCName(var_683_int);
	string var_684_string;
	func_5744(var_684_string);
	var_676_object->SetPhoto(var_684_string);
	int var_685_int;
	func_6846(var_685_int);
	var_676_object->SetPlayerName(var_685_int);
	bool var_677_bool;
	@IsOverrideActive(var_677_bool);
	if(var_677_bool != 0) {
		var_669_int = -2;
		return 8;
	}
	@DoDialog(var_676_object);
	object var_687_object; object var_688_object;
	var_670_object = var_687_object;
	var_676_object = var_688_object;
	TaskCall(5);
	func_413(var_689_object, var_690_object, var_691_string, var_692_bool, var_687_object, var_688_object);
	TaskReturn();
	bool var_679_bool;
	var_676_object->IsDialogEnd(var_679_bool);
	
	for(;;) {
		var_769_bool = !var_679_bool; //@nz
		if(var_769_bool == 0) goto Label_402;
		@sync();
		var_676_object->IsDialogEnd(var_679_bool);
	}
	
Label_402:
	object var_770_object;
	var_670_object = var_770_object;
	func_5620();
	@StopDialog(var_676_object);
	var_676_object->GetReturnValue(-1);
	int var_678_int = var_669_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6495(bool var_122_bool)
{
	int var_124_int;
	func_5659(var_124_int, "d6q02");
	if(var_124_int == 1000)
		var_122_bool = true;
	var_122_bool = false;
}


// @pe
void func_5994(void)
{
	@SetVariable("ood3Kapella2", 1);
}


// @pe
void func_6507(bool var_129_bool)
{
	int var_131_int;
	func_5659(var_131_int, "d6q02");
	if(var_131_int == -1)
		var_129_bool = true;
	var_129_bool = false;
}


void func_6000(void)
{
	object var_169_object;
	func_6796(var_169_object);
	object var_167_object;
	var_169_object = var_167_object;
	object var_168_object;
	var_167_object->FindMark(var_168_object, "d3q03KapellaBoyLocation");
	if(var_168_object != 0)
		var_168_object->Remove();
	var_167_object->FindMark(var_168_object, "d3q03KapellaBoyLocationSelf");
	if(var_168_object != 0)
		var_168_object->Remove();
	func_6927();
	bool var_183_bool;
	func_5701(var_183_bool, "quest_d3_03", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6519(bool var_116_bool)
{
	int var_118_int;
	func_5659(var_118_int, "ood6Kapella1");
	if(var_118_int == 0) {
		var_116_bool = true;
		return 0;
	}
	var_116_bool = false;
}


// @pe
void func_6531(bool var_70_bool)
{
	int var_72_int;
	func_5659(var_72_int, "d6q01");
	if(var_72_int == 0) {
		var_70_bool = true;
		return 0;
	}
	var_70_bool = false;
}


// @pe
void func_6030(void)
{
	@SetVariable("ood3Kapella3", 1);
}


// @pe
void func_6543(bool var_193_bool)
{
	int var_195_int;
	func_5659(var_195_int, "d8TalkToMat");
	if(var_195_int == 1)
		var_193_bool = true;
	var_193_bool = false;
}


// @pe
void func_6036(void)
{
	@SetVariable("ood3Kapella4", 1);
}


// @pe
void func_6042(void)
{
	@SetVariable("ood3Kapella5", 1);
}


// @pe
void func_6555(bool var_101_bool)
{
	int var_103_int;
	func_5659(var_103_int, "ood8Kapella1");
	if(var_103_int == 0) {
		var_101_bool = true;
		return 0;
	}
	var_101_bool = false;
}


// @pe
void func_413(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_687_object, object var_688_object)
{
	var_0_object = var_688_object;
	var_1_object = var_687_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_694_bool = false;
		bool var_695_bool;
		func_6531(var_1_object);
		if(var_695_bool != 0) {
			bool var_701_bool;
			func_6687(var_1_object);
			if(var_701_bool != 0)
				var_694_bool = true;
		}
		if(var_694_bool != 0) {
			object var_707_object; object var_708_object;
			var_707_object = var_1_object;
			var_708_object = var_0_object;
			func_6126();
			object var_711_object; object var_712_object;
			var_711_object = var_1_object;
			var_712_object = var_0_object;
			func_6132();
			func_555(var_688_object, "Neutral");
			var_0_object->SetMessage(3371); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(3375, 3621, 3619); //@t
			var_0_object->AddReply(3376, 3621, 3620); //@t
		} else {
					bool var_735_bool = false;
					bool var_736_bool = false;
					bool var_737_bool;
					func_6519(var_1_object);
					if(var_737_bool != 0) {
						bool var_743_bool;
						func_6495(var_1_object);
						if(!var_743_bool) //@nz
							var_736_bool = true;
					}
					if(var_736_bool != 0) {
						bool var_750_bool;
						func_6507(var_1_object);
						if(!var_750_bool) //@nz
							var_735_bool = true;
					}
					if(var_735_bool == 0) goto Label_508;
					object var_757_object; object var_758_object;
					var_757_object = var_1_object;
					var_758_object = var_0_object;
					func_6126();
					func_555(var_688_object, "Neutral");
					var_0_object->SetMessage(12095); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12096, 13323, 13322); //@t
		}
	}
Label_525:
	for(;;) {
		bool var_727_bool;
		func_5746(var_727_bool);
		if(var_727_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5624(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_554;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_554:
			return 0;

		}

	}
	
Label_508:
	func_555(var_688_object, "Neutral");
	var_0_object->SetMessage(12523); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(12524, -1, 13694); //@t
	goto Label_525;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1a1";


// @pe
void func_6048(void)
{
	@SetVariable("ood6Kapella1", 1);
}


void func_933(object var_0_object, int var_158_int, object var_159_object)
{
	var_0_object = var_159_object;
	bool var_169_bool; object var_170_object;
	var_159_object = var_170_object;
	func_5564(var_169_bool, var_170_object);
	if(!var_169_bool) { //@nz
		var_158_int = -2;
		return 8;
	}
	object var_165_object;
	@CreateDialog(var_165_object);
	int var_172_int;
	func_5742(var_172_int);
	var_165_object->SetNPCName(var_172_int);
	string var_173_string;
	func_5744(var_173_string);
	var_165_object->SetPhoto(var_173_string);
	int var_174_int;
	func_6846(var_174_int);
	var_165_object->SetPlayerName(var_174_int);
	bool var_166_bool;
	@IsOverrideActive(var_166_bool);
	if(var_166_bool != 0) {
		var_158_int = -2;
		return 8;
	}
	@DoDialog(var_165_object);
	object var_176_object; object var_177_object;
	var_159_object = var_176_object;
	var_165_object = var_177_object;
	TaskCall(7);
	func_996(var_178_object, var_179_object, var_180_string, var_181_bool, var_176_object, var_177_object);
	TaskReturn();
	bool var_168_bool;
	var_165_object->IsDialogEnd(var_168_bool);
	
	for(;;) {
		var_399_bool = !var_168_bool; //@nz
		if(var_399_bool == 0) goto Label_985;
		@sync();
		var_165_object->IsDialogEnd(var_168_bool);
	}
	
Label_985:
	object var_400_object;
	var_159_object = var_400_object;
	func_5620();
	@StopDialog(var_165_object);
	var_165_object->GetReturnValue(-1);
	int var_167_int = var_158_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6054(void)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}


// @pe
void func_6567(bool var_144_bool)
{
	int var_146_int;
	func_5659(var_146_int, "d8q02");
	if(var_146_int == 1000)
		var_144_bool = true;
	var_144_bool = false;
}


void func_5547(bool var_36_bool, object var_37_object)
{
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	bool var_45_bool;
	@Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
}


// @pe
void func_6060(void)
{
	@SetVariable("KnowViktoria", 1);
}


// @pe
void func_6066(void)
{
	@SetVariable("ood8Kapella1", 1);
}


// @pe
void func_6579(bool var_150_bool)
{
	int var_152_int;
	func_5659(var_152_int, "ood8Kapella2");
	if(var_152_int == 0) {
		var_150_bool = true;
		return 0;
	}
	var_150_bool = false;
}


void func_5559(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


// @pe
void func_6072(void)
{
	@SetVariable("d8q02", 1);
	func_6943();
}


void func_5564(bool var_50_bool, object var_51_object)
{
	cvector var_61_cvector;
	var_51_object->GetPosition(var_61_cvector);
	float var_60_float;
	var_51_object->GetEyesHeight(var_60_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	SetByIndex(var_61_cvector, 1) = (var_68_float + var_60_float);
	cvector var_62_cvector;
	@GetPosition(var_62_cvector);
	@GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_62_cvector, 1);
	SetByIndex(var_62_cvector, 1) = (var_69_float + var_60_float);
	cvector var_63_cvector = var_61_cvector - var_62_cvector;
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_72_float = sqrt(var_63_cvector | var_63_cvector);
	var_63_cvector /= var_72_float;
	cvector var_64_cvector = -var_63_cvector;
	cvector var_75_cvector;
	func_5649(var_75_cvector, (var_64_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_65_cvector = ((var_63_cvector * 70) + (var_75_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0)
		var_50_bool = false;
	@StopWorld();
	@CameraTransit((var_62_cvector + var_65_cvector), var_64_cvector);
	var_88_float = GetByIndex(var_65_cvector, 0);
	var_89_float = GetByIndex(var_65_cvector, 2);
	@Rotate(var_88_float, var_89_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_50_bool = true;
}


// @pe
void func_6591(bool var_132_bool)
{
	int var_134_int;
	func_5659(var_134_int, "d8TermitnikLoad");
	if(var_134_int != 0) {
		var_132_bool = true;
		return 0;
	}
	var_132_bool = false;
}


// @pe
void func_6081(object var_70_object)
{
	@Trace("feromicin is given");
	object var_73_object;
	var_70_object = var_73_object;
	func_5688(var_73_object, "feromicin", 1);
}


void func_5057(object var_0_object, int var_773_int, object var_774_object)
{
	var_0_object = var_774_object;
	bool var_784_bool; object var_785_object;
	var_774_object = var_785_object;
	func_5564(var_784_bool, var_785_object);
	if(!var_784_bool) { //@nz
		var_773_int = -2;
		return 8;
	}
	object var_780_object;
	@CreateDialog(var_780_object);
	int var_787_int;
	func_5742(var_787_int);
	var_780_object->SetNPCName(var_787_int);
	string var_788_string;
	func_5744(var_788_string);
	var_780_object->SetPhoto(var_788_string);
	int var_789_int;
	func_6846(var_789_int);
	var_780_object->SetPlayerName(var_789_int);
	bool var_781_bool;
	@IsOverrideActive(var_781_bool);
	if(var_781_bool != 0) {
		var_773_int = -2;
		return 8;
	}
	@DoDialog(var_780_object);
	object var_791_object; object var_792_object;
	var_774_object = var_791_object;
	var_780_object = var_792_object;
	TaskCall(15);
	func_5120(var_793_object, var_794_object, var_795_string, var_796_bool, var_791_object, var_792_object);
	TaskReturn();
	bool var_783_bool;
	var_780_object->IsDialogEnd(var_783_bool);
	
	for(;;) {
		var_855_bool = !var_783_bool; //@nz
		if(var_855_bool == 0) goto Label_5109;
		@sync();
		var_780_object->IsDialogEnd(var_783_bool);
	}
	
Label_5109:
	object var_856_object;
	var_774_object = var_856_object;
	func_5620();
	@StopDialog(var_780_object);
	var_780_object->GetReturnValue(-1);
	int var_782_int = var_773_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6603(bool var_394_bool)
{
	int var_396_int;
	func_5659(var_396_int, "KnowKaterina");
	if(var_396_int == 1)
		var_394_bool = true;
	var_394_bool = false;
}


// @pe
void func_6092(void)
{
	@SetVariable("ood8Kapella2", 1);
}


// @pe
void func_6098(void)
{
	@SetVariable("ood4Kapella1", 1);
}


// @pe
void func_6615(bool var_378_bool)
{
	int var_380_int;
	func_5659(var_380_int, "KnowLara");
	if(var_380_int == 1)
		var_378_bool = true;
	var_378_bool = false;
}


// @pe
void func_6104(void)
{
	@SetVariable("KnowPredictions", 1);
}


void func_6110(void)
{
	object var_49_object;
	func_6796(var_49_object);
	object var_48_object;
	var_49_object = var_48_object;
	float var_60_float;
	func_5713(var_60_float);
	var_48_object->AddMark("d6q02KapellaGotoMladVlad", "pt_map_mladvlad", 0, 15377, var_60_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6627(bool var_426_bool)
{
	int var_428_int;
	func_5659(var_428_int, "KnowMishka");
	if(var_428_int == 1)
		var_426_bool = true;
	var_426_bool = false;
}


// @pe
void func_996(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_176_object, object var_177_object)
{
	var_0_object = var_177_object;
	var_1_object = var_176_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_183_bool = false;
		bool var_184_bool;
		func_6723(var_1_object);
		if(var_184_bool != 0) {
			bool var_192_bool;
			func_6192(var_1_object);
			if(var_192_bool != 0)
				var_183_bool = true;
		}
		if(var_183_bool != 0) {
			func_1302(var_177_object, "Neutral");
			var_0_object->SetMessage(5449); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5453, 6575, 6007); //@t
			var_0_object->AddReply(5974, 6575, 6579); //@t
		} else {
					func_1302(var_177_object, "Neutral");
					var_0_object->SetMessage(5484); //@t
					var_0_object->ClearReplies(); //@t
					bool var_220_bool;
					func_6735(var_1_object);
					if(var_220_bool != 0)
						var_0_object->AddReply(8729, 6028, 9566); //@t
					bool var_229_bool = false;
					bool var_230_bool;
					func_6144(var_1_object);
					if(var_230_bool != 0) {
						bool var_236_bool;
						func_6168(var_1_object);
						if(var_236_bool != 0)
							var_229_bool = true;
					}
					if(var_229_bool != 0)
						var_0_object->AddReply(8728, 6008, 9565); //@t
					bool var_245_bool = false;
					bool var_246_bool = false;
					bool var_247_bool;
					func_6156(var_1_object);
					if(var_247_bool != 0) {
						bool var_253_bool;
						func_6204(var_1_object);
						if(var_253_bool != 0)
							var_246_bool = true;
					}
					if(var_246_bool != 0) {
						bool var_259_bool;
						func_6216(var_1_object);
						if(var_259_bool != 0)
							var_245_bool = true;
					}
					if(var_245_bool != 0)
						var_0_object->AddReply(5451, 6666, 6005); //@t
					bool var_268_bool = false;
					bool var_269_bool = false;
					bool var_270_bool;
					func_6180(var_1_object);
					if(var_270_bool != 0) {
						bool var_276_bool;
						func_6192(var_1_object);
						if(var_276_bool != 0)
							var_269_bool = true;
					}
					if(var_269_bool != 0) {
						bool var_278_bool;
						func_6723(var_1_object);
						if(!var_278_bool) //@nz
							var_268_bool = true;
					}
					if(var_268_bool != 0)
						var_0_object->AddReply(5452, 9563, 6006); //@t
					bool var_284_bool = false;
					bool var_285_bool;
					func_6228(var_1_object);
					if(var_285_bool != 0) {
						bool var_291_bool;
						func_6240(var_1_object);
						if(var_291_bool != 0)
							var_284_bool = true;
					}
					if(var_284_bool != 0)
						var_0_object->AddReply(6288, 6941, 6940); //@t
					bool var_300_bool = false;
					bool var_301_bool;
					func_6615(var_1_object);
					if(var_301_bool != 0) {
						bool var_307_bool;
						func_6300(var_1_object);
						if(var_307_bool != 0)
							var_300_bool = true;
					}
					if(var_300_bool != 0)
						var_0_object->AddReply(7933, 8773, 8753); //@t
					bool var_316_bool = false;
					bool var_317_bool;
					func_6603(var_1_object);
					if(var_317_bool != 0) {
						bool var_323_bool;
						func_6312(var_1_object);
						if(var_323_bool != 0)
							var_316_bool = true;
					}
					if(var_316_bool != 0)
						var_0_object->AddReply(7938, 8784, 8758); //@t
					bool var_332_bool = false;
					bool var_333_bool;
					func_6639(var_1_object);
					if(var_333_bool != 0) {
						bool var_339_bool;
						func_6324(var_1_object);
						if(var_339_bool != 0)
							var_332_bool = true;
					}
					if(var_332_bool != 0)
						var_0_object->AddReply(7943, 8775, 8763); //@t
					bool var_348_bool = false;
					bool var_349_bool;
					func_6627(var_1_object);
					if(var_349_bool != 0) {
						bool var_355_bool;
						func_6336(var_1_object);
						if(var_355_bool != 0)
							var_348_bool = true;
					}
					if(var_348_bool != 0)
						var_0_object->AddReply(7950, 8776, 8770); //@t
					bool var_364_bool = false;
					bool var_365_bool;
					func_6699(var_1_object);
					if(var_365_bool != 0) {
						bool var_371_bool;
						func_6348(var_1_object);
						if(var_371_bool != 0)
							var_364_bool = true;
					}
					if(var_364_bool != 0)
						var_0_object->AddReply(7951, 8777, 8771); //@t
					bool var_380_bool = false;
					bool var_381_bool;
					func_6675(var_1_object);
					if(var_381_bool != 0) {
						bool var_387_bool;
						func_6360(var_1_object);
						if(var_387_bool != 0)
							var_380_bool = true;
					}
					if(var_380_bool != 0)
						var_0_object->AddReply(7952, 8778, 8772); //@t
					var_0_object->AddReply(6264, -1, 6931); //@t
		}
	}
	for(;;) {
		bool var_210_bool;
		func_5746(var_210_bool);
		if(var_210_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5624(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1301;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1301:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3e8";


// @pe
void func_6126(void)
{
	@SetVariable("d6KapellaVisit", 1);
}


// @pe
void func_6639(bool var_410_bool)
{
	int var_412_int;
	func_5659(var_412_int, "KnowMladVlad");
	if(var_412_int == 1)
		var_410_bool = true;
	var_410_bool = false;
}


// @pe
void func_5620(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_6132(void)
{
	@SetVariable("ood6Kapella3", 1);
}


void func_5624(string var_40_string)
{
	@Trace("playing " + var_40_string);
	float var_43_float;
	float var_44_float;
	@lshGetAnimTimes(var_40_string, var_43_float, var_44_float);
	@lshPlayAnimation(var_43_float, var_44_float);
	@Trace("start: " + var_43_float);
	@Trace("end: " + var_44_float);
}


// @pe
void func_6138(void)
{
	@SetVariable("KnowTermitnik", 1);
}


// @pe
void func_6651(bool var_64_bool)
{
	int var_66_int;
	func_5659(var_66_int, "ood4Kapella1");
	if(var_66_int == 0) {
		var_64_bool = true;
		return 0;
	}
	var_64_bool = false;
}


void func_3071(object var_0_object, int var_403_int, object var_404_object)
{
	var_0_object = var_404_object;
	bool var_414_bool; object var_415_object;
	var_404_object = var_415_object;
	func_5564(var_414_bool, var_415_object);
	if(!var_414_bool) { //@nz
		var_403_int = -2;
		return 8;
	}
	object var_410_object;
	@CreateDialog(var_410_object);
	int var_417_int;
	func_5742(var_417_int);
	var_410_object->SetNPCName(var_417_int);
	string var_418_string;
	func_5744(var_418_string);
	var_410_object->SetPhoto(var_418_string);
	int var_419_int;
	func_6846(var_419_int);
	var_410_object->SetPlayerName(var_419_int);
	bool var_411_bool;
	@IsOverrideActive(var_411_bool);
	if(var_411_bool != 0) {
		var_403_int = -2;
		return 8;
	}
	@DoDialog(var_410_object);
	object var_421_object; object var_422_object;
	var_404_object = var_421_object;
	var_410_object = var_422_object;
	TaskCall(9);
	func_3134(var_423_object, var_424_object, var_425_string, var_426_bool, var_421_object, var_422_object);
	TaskReturn();
	bool var_413_bool;
	var_410_object->IsDialogEnd(var_413_bool);
	
	for(;;) {
		var_470_bool = !var_413_bool; //@nz
		if(var_470_bool == 0) goto Label_3123;
		@sync();
		var_410_object->IsDialogEnd(var_413_bool);
	}
	
Label_3123:
	object var_471_object;
	var_404_object = var_471_object;
	func_5620();
	@StopDialog(var_410_object);
	var_410_object->GetReturnValue(-1);
	int var_412_int = var_403_int;
}
EMIT "Stack[-4] = 0";


