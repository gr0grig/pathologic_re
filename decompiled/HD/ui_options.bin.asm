GlobalVarCount = 0

Strings:
	options_border.xml
	add
	video_page
	audio_page
	control_page
	anisotropic_scrollbar
	gamma_scrollbar
	fov_scrollbar
	vsync_check
	shadow_check
	dof_check
	ssao_check
	bloom_check
	motionblur_check
	fxaa_check
	master_scrollbar
	music_scrollbar
	voice_scrollbar
	sounds_scrollbar
	sensivity_scrollbar
	gamepad_scrollbar
	gamepad_ui_scrollbar
	invert_mouse_check
	invert_gamepad_check
	rumble_gamepad_check
	key_form
	apply
	cancel
	video
	audio
	controls
	resolution_button_next
	resolution_button_prev
	DestroyWindow
	video_page.xml
	audio_page.xml
	control_page.xml

Import:
	CreateWindow (3 args)
	CaptureKeyboard (0 args)
	ProcessEvents (0 args)
	SendMessageToParent (1 args)
	GetMaxAnisotropic (1 args)
	round (2 args)
	SetPlayerFOV (1 args)
	CreateFloatVector (1 args)
	SendMessage (3 args)
	SetAnisotropic (1 args)
	SetGammaCorrection (1 args)
	SetResolution (1 args)
	SetVolMaster (1 args)
	SetVolMusic (1 args)
	SetVolVoice (1 args)
	SetVolSounds (1 args)
	SetMouseSensivity (1 args)
	SetGamepadSensivity (1 args)
	SetGamepadUISensivity (1 args)
	EnableVSync (1 args)
	GetCurrentResolution (1 args)
	GetCurrentAnisotropic (1 args)
	GetGammaCorrection (1 args)
	GetPlayerFOV (1 args)
	IsVSyncEnabled (1 args)
	IsShadowsEnabled (1 args)
	IsDOFEnabled (1 args)
	IsSSAOEnabled (1 args)
	IsBloomEnabled (1 args)
	IsMotionBlurEnabled (1 args)
	IsFXAAEnabled (1 args)
	GetVolMaster (1 args)
	GetVolMusic (1 args)
	GetVolVoice (1 args)
	GetVolSounds (1 args)
	GetMouseSensivity (1 args)
	IsMouseInverted (1 args)
	GetGamepadSensivity (1 args)
	GetGamepadUISensivity (1 args)
	IsGamepadInverted (1 args)
	IsGamepadRumbleEnabled (1 args)
	EnableShadows (1 args)
	EnableDOF (1 args)
	EnableSSAO (1 args)
	EnableBloom (1 args)
	EnableMotionBlur (1 args)
	EnableFXAA (1 args)
	InvertMouse (1 args)
	InvertGamepad (1 args)
	EnableGamepadRumble (1 args)
	SaveConfig (0 args)
	WriteBinds (0 args)
	SendMessage (2 args)
	GetResolutionsCount (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, int, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool) Params = 0
		EVENT_100 Op = 0x11 Vars = (int)
		EVENT_101 Op = 0x19 Vars = (int)
		EVENT_200 Op = 0x2b6 Vars = (int, string, object)


0x0: PushEmpty()
0x1: Call2 0x151

0x2: Pop(0)
0x3: Push("options_border.xml")
0x4: Push((bool) 0)
0x5: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0x6: Pop(2)
0x7: Stack[2 + Tasks[-1].StackPointer] = (int)-1
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 0
0xa: Call2 0x3cf

0xb: Pop(1)
0xc: @ CaptureKeyboard()
0xd: Pop(0)
0xe: @ ProcessEvents()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: PushEmpty()
0x13: Call2 0x1d8

0x14: Pop(0)
0x15: Push((int) 1)
0x16: @ SendMessageToParent(Stack[-1])
0x17: Pop(1)
0x18: Return(); Pop(0)

0x19: PushEmpty()
0x1a: Push((int) 266)
0x1b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x1d: Push((int) 0)
0x1e: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x20: PushEmpty(int)
0x21: Stack[-1] = (int) 1
0x22: Call2 0x3cf

0x23: Pop(1)
0x24: GOTO 0x34

0x25: Push((int) 1)
0x26: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x28: PushEmpty(int)
0x29: Stack[-1] = (int) 2
0x2a: Call2 0x3cf

0x2b: Pop(1)
0x2c: GOTO 0x34

0x2d: Push((int) 2)
0x2e: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x30: PushEmpty(int)
0x31: Stack[-1] = (int) 0
0x32: Call2 0x3cf

0x33: Pop(1)
0x34: GOTO 0x4f

0x35: Push((int) 265)
0x36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x38: Push((int) 0)
0x39: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: PushEmpty(int)
0x3c: Stack[-1] = (int) 2
0x3d: Call2 0x3cf

0x3e: Pop(1)
0x3f: GOTO 0x4f

0x40: Push((int) 1)
0x41: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: PushEmpty(int)
0x44: Stack[-1] = (int) 0
0x45: Call2 0x3cf

0x46: Pop(1)
0x47: GOTO 0x4f

0x48: Push((int) 2)
0x49: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4b: PushEmpty(int)
0x4c: Stack[-1] = (int) 1
0x4d: Call2 0x3cf

0x4e: Pop(1)
0x4f: Return(); Pop(0)

0x50: PushEmpty()
0x51: Push((int) 100)
0x52: Push((float)70.0)
0x53: Pop(1); Push(Stack[-3] - Stack[-1]);
0x54: Pop(2); Push(Stack[-2] * Stack[-1]);
0x55: Push((float)40.0)
0x56: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x57: Return(); Pop(0)

0x58: PushEmpty()
0x59: Push((float)70.0)
0x5a: Push((float)40.0)
0x5b: Pop(1); Push(Stack[-1] * Stack[-3]);
0x5c: Push((int) 100)
0x5d: Pop(2); Push(Stack[-2] / Stack[-1]);
0x5e: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x5f: Return(); Pop(0)

0x60: PushEmpty(float, float)
0x61: @ GetMaxAnisotropic(Stack[-1])
0x62: Pop(0)
0x63: Push((int) 100)
0x64: Push((float)0.0)
0x65: Pop(1); Push(Stack[-5] - Stack[-1]);
0x66: Pop(2); Push(Stack[-2] * Stack[-1]);
0x67: Push((float)0.0)
0x68: Pop(1); Push(Stack[-3] - Stack[-1]);
0x69: Stack[-6] = Stack[-2] / Stack[-1]; Pop(2);
0x6a: Return(); Pop(2)

0x6b: PushEmpty(float, float)
0x6c: @ GetMaxAnisotropic(Stack[-1])
0x6d: Pop(0)
0x6e: Push((float)0.0)
0x6f: Push((float)0.0)
0x70: Pop(1); Push(Stack[-3] - Stack[-1]);
0x71: Pop(1); Push(Stack[-1] * Stack[-5]);
0x72: Push((int) 100)
0x73: Pop(2); Push(Stack[-2] / Stack[-1]);
0x74: Stack[-6] = Stack[-2] + Stack[-1]; Pop(2);
0x75: Return(); Pop(2)

0x76: PushEmpty()
0x77: Push((int) 100)
0x78: Push((float)0.5)
0x79: Pop(1); Push(Stack[-3] - Stack[-1]);
0x7a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7b: Push((float)0.75)
0x7c: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x7d: Return(); Pop(0)

0x7e: PushEmpty()
0x7f: Push((float)0.5)
0x80: Push((float)0.75)
0x81: Pop(1); Push(Stack[-1] * Stack[-3]);
0x82: Push((int) 100)
0x83: Pop(2); Push(Stack[-2] / Stack[-1]);
0x84: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x85: Return(); Pop(0)

0x86: PushEmpty()
0x87: Push((int) 100)
0x88: Push((float)0.1)
0x89: Pop(1); Push(Stack[-3] - Stack[-1]);
0x8a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8b: Push((float)4.9)
0x8c: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Push((float)0.1)
0x90: Push((float)4.9)
0x91: Pop(1); Push(Stack[-1] * Stack[-3]);
0x92: Push((int) 100)
0x93: Pop(2); Push(Stack[-2] / Stack[-1]);
0x94: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: Push((float)0.1)
0x98: Push((float)4.9)
0x99: Pop(1); Push(Stack[-1] * Stack[-3]);
0x9a: Push((int) 100)
0x9b: Pop(2); Push(Stack[-2] / Stack[-1]);
0x9c: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x9d: Return(); Pop(0)

0x9e: PushEmpty()
0x9f: Push((float)0.1)
0xa0: Push((float)4.9)
0xa1: Pop(1); Push(Stack[-1] * Stack[-3]);
0xa2: Push((int) 100)
0xa3: Pop(2); Push(Stack[-2] / Stack[-1]);
0xa4: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xa5: Return(); Pop(0)

0xa6: PushEmpty(float, object, float, object)
0xa7: @ round(Stack[-5], Stack[-2])
0xa8: Pop(0)
0xa9: @ SetPlayerFOV(Stack[-5])
0xaa: Pop(0)
0xab: @ CreateFloatVector(Stack[-1])
0xac: Pop(0)
0xad: @@ add(Stack[-2])
0xae: Pop(0)
0xaf: Push((int) 104)
0xb0: Push("video_page")
0xb1: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xb2: Pop(2)
0xb3: Return(); Pop(4)

0xb4: Stack[-1] = 0
0xb5: PushEmpty(float, object, float, object)
0xb6: @ round(Stack[-5], Stack[-2])
0xb7: Pop(0)
0xb8: @ SetAnisotropic(Stack[-2])
0xb9: Pop(0)
0xba: @ CreateFloatVector(Stack[-1])
0xbb: Pop(0)
0xbc: @@ add(Stack[-2])
0xbd: Pop(0)
0xbe: Pop(0); Push((bool) Stack[-2] != Stack[23 + Tasks[-1].StackPointer])
0xbf: @@ add(Stack[-1])
0xc0: Pop(1)
0xc1: Push((int) 103)
0xc2: Push("video_page")
0xc3: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xc4: Pop(2)
0xc5: Return(); Pop(4)

0xc6: Stack[-1] = 0
0xc7: PushEmpty(object, object)
0xc8: @ SetGammaCorrection(Stack[-3])
0xc9: Pop(0)
0xca: @ CreateFloatVector(Stack[-1])
0xcb: Pop(0)
0xcc: @@ add(Stack[-3])
0xcd: Pop(0)
0xce: Push((int) 100)
0xcf: Push("video_page")
0xd0: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xd1: Pop(2)
0xd2: Return(); Pop(2)

0xd3: Stack[-1] = 0
0xd4: PushEmpty(float, object, float, object)
0xd5: @ round(Stack[-5], Stack[-2])
0xd6: Pop(0)
0xd7: @ SetResolution(Stack[-2])
0xd8: Pop(0)
0xd9: @ CreateFloatVector(Stack[-1])
0xda: Pop(0)
0xdb: @@ add(Stack[-2])
0xdc: Pop(0)
0xdd: Pop(0); Push((bool) Stack[-2] != Stack[22 + Tasks[-1].StackPointer])
0xde: @@ add(Stack[-1])
0xdf: Pop(1)
0xe0: Push((int) 101)
0xe1: Push("video_page")
0xe2: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xe3: Pop(2)
0xe4: Return(); Pop(4)

0xe5: Stack[-1] = 0
0xe6: PushEmpty(object, object)
0xe7: @ SetVolMaster(Stack[-3])
0xe8: Pop(0)
0xe9: @ CreateFloatVector(Stack[-1])
0xea: Pop(0)
0xeb: @@ add(Stack[-3])
0xec: Pop(0)
0xed: Push((int) 105)
0xee: Push("audio_page")
0xef: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xf0: Pop(2)
0xf1: Return(); Pop(2)

0xf2: Stack[-1] = 0
0xf3: PushEmpty(object, object)
0xf4: @ SetVolMusic(Stack[-3])
0xf5: Pop(0)
0xf6: @ CreateFloatVector(Stack[-1])
0xf7: Pop(0)
0xf8: @@ add(Stack[-3])
0xf9: Pop(0)
0xfa: Push((int) 106)
0xfb: Push("audio_page")
0xfc: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xfd: Pop(2)
0xfe: Return(); Pop(2)

0xff: Stack[-1] = 0
0x100: PushEmpty(object, object)
0x101: @ SetVolVoice(Stack[-3])
0x102: Pop(0)
0x103: @ CreateFloatVector(Stack[-1])
0x104: Pop(0)
0x105: @@ add(Stack[-3])
0x106: Pop(0)
0x107: Push((int) 107)
0x108: Push("audio_page")
0x109: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x10a: Pop(2)
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(object, object)
0x10e: @ SetVolSounds(Stack[-3])
0x10f: Pop(0)
0x110: @ CreateFloatVector(Stack[-1])
0x111: Pop(0)
0x112: @@ add(Stack[-3])
0x113: Pop(0)
0x114: Push((int) 108)
0x115: Push("audio_page")
0x116: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x117: Pop(2)
0x118: Return(); Pop(2)

0x119: Stack[-1] = 0
0x11a: PushEmpty(object, object)
0x11b: @ SetMouseSensivity(Stack[-3])
0x11c: Pop(0)
0x11d: @ CreateFloatVector(Stack[-1])
0x11e: Pop(0)
0x11f: @@ add(Stack[-3])
0x120: Pop(0)
0x121: Push((int) 109)
0x122: Push("control_page")
0x123: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x124: Pop(2)
0x125: Return(); Pop(2)

0x126: Stack[-1] = 0
0x127: PushEmpty(object, object)
0x128: @ SetGamepadSensivity(Stack[-3])
0x129: Pop(0)
0x12a: @ CreateFloatVector(Stack[-1])
0x12b: Pop(0)
0x12c: @@ add(Stack[-3])
0x12d: Pop(0)
0x12e: Push((int) 110)
0x12f: Push("control_page")
0x130: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x131: Pop(2)
0x132: Return(); Pop(2)

0x133: Stack[-1] = 0
0x134: PushEmpty(object, object)
0x135: @ SetGamepadUISensivity(Stack[-3])
0x136: Pop(0)
0x137: @ CreateFloatVector(Stack[-1])
0x138: Pop(0)
0x139: @@ add(Stack[-3])
0x13a: Pop(0)
0x13b: Push((int) 111)
0x13c: Push("control_page")
0x13d: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x13e: Pop(2)
0x13f: Return(); Pop(2)

0x140: Stack[-1] = 0
0x141: PushEmpty(object, object)
0x142: @ EnableVSync(Stack[-3])
0x143: Pop(0)
0x144: @ CreateFloatVector(Stack[-1])
0x145: Pop(0)
0x146: @@ add(Stack[-3])
0x147: Pop(0)
0x148: Pop(0); Push((bool) Stack[-3] != Stack[40 + Tasks[-1].StackPointer])
0x149: @@ add(Stack[-1])
0x14a: Pop(1)
0x14b: Push((int) 112)
0x14c: Push("video_page")
0x14d: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x14e: Pop(2)
0x14f: Return(); Pop(2)

0x150: Stack[-1] = 0
0x151: @ GetCurrentResolution(Stack[-11])
0x152: Pop(0)
0x153: Stack[22 + Tasks[-1].StackPointer] = Stack[11 + Tasks[-1].StackPointer]
0x154: @ GetCurrentAnisotropic(Stack[-12])
0x155: Pop(0)
0x156: Stack[23 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer]
0x157: @ GetGammaCorrection(Stack[-3])
0x158: Pop(0)
0x159: Stack[14 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer]
0x15a: @ GetPlayerFOV(Stack[-13])
0x15b: Pop(0)
0x15c: Stack[24 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer]
0x15d: @ IsVSyncEnabled(Stack[-40])
0x15e: Pop(0)
0x15f: Stack[30 + Tasks[-1].StackPointer] = Stack[40 + Tasks[-1].StackPointer]
0x160: @ IsShadowsEnabled(Stack[-35])
0x161: Pop(0)
0x162: Stack[25 + Tasks[-1].StackPointer] = Stack[35 + Tasks[-1].StackPointer]
0x163: @ IsDOFEnabled(Stack[-37])
0x164: Pop(0)
0x165: Stack[27 + Tasks[-1].StackPointer] = Stack[37 + Tasks[-1].StackPointer]
0x166: @ IsSSAOEnabled(Stack[-36])
0x167: Pop(0)
0x168: Stack[26 + Tasks[-1].StackPointer] = Stack[36 + Tasks[-1].StackPointer]
0x169: @ IsBloomEnabled(Stack[-38])
0x16a: Pop(0)
0x16b: Stack[28 + Tasks[-1].StackPointer] = Stack[38 + Tasks[-1].StackPointer]
0x16c: @ IsMotionBlurEnabled(Stack[-39])
0x16d: Pop(0)
0x16e: Stack[29 + Tasks[-1].StackPointer] = Stack[39 + Tasks[-1].StackPointer]
0x16f: @ IsFXAAEnabled(Stack[-44])
0x170: Pop(0)
0x171: Stack[34 + Tasks[-1].StackPointer] = Stack[44 + Tasks[-1].StackPointer]
0x172: @ GetVolMaster(Stack[-4])
0x173: Pop(0)
0x174: Stack[15 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer]
0x175: @ GetVolMusic(Stack[-5])
0x176: Pop(0)
0x177: Stack[16 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer]
0x178: @ GetVolVoice(Stack[-6])
0x179: Pop(0)
0x17a: Stack[17 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer]
0x17b: @ GetVolSounds(Stack[-7])
0x17c: Pop(0)
0x17d: Stack[18 + Tasks[-1].StackPointer] = Stack[7 + Tasks[-1].StackPointer]
0x17e: @ GetMouseSensivity(Stack[-19])
0x17f: Pop(0)
0x180: Stack[8 + Tasks[-1].StackPointer] = Stack[19 + Tasks[-1].StackPointer]
0x181: @ IsMouseInverted(Stack[-41])
0x182: Pop(0)
0x183: Stack[31 + Tasks[-1].StackPointer] = Stack[41 + Tasks[-1].StackPointer]
0x184: @ GetGamepadSensivity(Stack[-20])
0x185: Pop(0)
0x186: Stack[9 + Tasks[-1].StackPointer] = Stack[20 + Tasks[-1].StackPointer]
0x187: @ GetGamepadUISensivity(Stack[-21])
0x188: Pop(0)
0x189: Stack[10 + Tasks[-1].StackPointer] = Stack[21 + Tasks[-1].StackPointer]
0x18a: @ IsGamepadInverted(Stack[-42])
0x18b: Pop(0)
0x18c: Stack[32 + Tasks[-1].StackPointer] = Stack[42 + Tasks[-1].StackPointer]
0x18d: @ IsGamepadRumbleEnabled(Stack[-43])
0x18e: Pop(0)
0x18f: Stack[33 + Tasks[-1].StackPointer] = Stack[43 + Tasks[-1].StackPointer]
0x190: Return(); Pop(0)

0x191: PushEmpty(float)
0x192: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x193: Call2 0xd4

0x194: Pop(1)
0x195: PushEmpty(float)
0x196: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x197: Call2 0xb5

0x198: Pop(1)
0x199: PushEmpty(float)
0x19a: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x19b: Call2 0xc7

0x19c: Pop(1)
0x19d: PushEmpty(float)
0x19e: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x19f: Call2 0xa6

0x1a0: Pop(1)
0x1a1: @ EnableShadows(Stack[-25])
0x1a2: Pop(0)
0x1a3: PushEmpty(bool)
0x1a4: Stack[-1] = Stack[30 + Tasks[-1].StackPointer]
0x1a5: Call2 0x141

0x1a6: Pop(1)
0x1a7: @ EnableDOF(Stack[-27])
0x1a8: Pop(0)
0x1a9: @ EnableSSAO(Stack[-26])
0x1aa: Pop(0)
0x1ab: @ EnableBloom(Stack[-28])
0x1ac: Pop(0)
0x1ad: @ EnableMotionBlur(Stack[-29])
0x1ae: Pop(0)
0x1af: @ EnableFXAA(Stack[-34])
0x1b0: Pop(0)
0x1b1: PushEmpty(float)
0x1b2: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b3: Call2 0xe6

0x1b4: Pop(1)
0x1b5: PushEmpty(float)
0x1b6: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x1b7: Call2 0xf3

0x1b8: Pop(1)
0x1b9: PushEmpty(float)
0x1ba: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x1bb: Call2 0x100

0x1bc: Pop(1)
0x1bd: PushEmpty(float)
0x1be: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0x1bf: Call2 0x10d

0x1c0: Pop(1)
0x1c1: PushEmpty(float)
0x1c2: Stack[-1] = Stack[8 + Tasks[-1].StackPointer]
0x1c3: Call2 0x11a

0x1c4: Pop(1)
0x1c5: PushEmpty(float)
0x1c6: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x1c7: Call2 0x127

0x1c8: Pop(1)
0x1c9: PushEmpty(float)
0x1ca: Stack[-1] = Stack[10 + Tasks[-1].StackPointer]
0x1cb: Call2 0x134

0x1cc: Pop(1)
0x1cd: @ InvertMouse(Stack[-31])
0x1ce: Pop(0)
0x1cf: @ InvertGamepad(Stack[-32])
0x1d0: Pop(0)
0x1d1: @ EnableGamepadRumble(Stack[-33])
0x1d2: Pop(0)
0x1d3: @ SaveConfig()
0x1d4: Pop(0)
0x1d5: @ WriteBinds()
0x1d6: Pop(0)
0x1d7: Return(); Pop(0)

0x1d8: PushEmpty(float)
0x1d9: Stack[-1] = Stack[22 + Tasks[-1].StackPointer]
0x1da: Call2 0xd4

0x1db: Pop(1)
0x1dc: PushEmpty(float)
0x1dd: Stack[-1] = Stack[23 + Tasks[-1].StackPointer]
0x1de: Call2 0xb5

0x1df: Pop(1)
0x1e0: PushEmpty(float)
0x1e1: Stack[-1] = Stack[14 + Tasks[-1].StackPointer]
0x1e2: Call2 0xc7

0x1e3: Pop(1)
0x1e4: PushEmpty(float)
0x1e5: Stack[-1] = Stack[24 + Tasks[-1].StackPointer]
0x1e6: Call2 0xa6

0x1e7: Pop(1)
0x1e8: PushEmpty(bool)
0x1e9: Stack[-1] = Stack[40 + Tasks[-1].StackPointer]
0x1ea: Call2 0x141

0x1eb: Pop(1)
0x1ec: @ EnableShadows(Stack[-35])
0x1ed: Pop(0)
0x1ee: @ EnableDOF(Stack[-37])
0x1ef: Pop(0)
0x1f0: @ EnableSSAO(Stack[-36])
0x1f1: Pop(0)
0x1f2: @ EnableBloom(Stack[-38])
0x1f3: Pop(0)
0x1f4: @ EnableMotionBlur(Stack[-39])
0x1f5: Pop(0)
0x1f6: @ EnableFXAA(Stack[-44])
0x1f7: Pop(0)
0x1f8: PushEmpty(float)
0x1f9: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x1fa: Call2 0xe6

0x1fb: Pop(1)
0x1fc: PushEmpty(float)
0x1fd: Stack[-1] = Stack[16 + Tasks[-1].StackPointer]
0x1fe: Call2 0xf3

0x1ff: Pop(1)
0x200: PushEmpty(float)
0x201: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x202: Call2 0x100

0x203: Pop(1)
0x204: PushEmpty(float)
0x205: Stack[-1] = Stack[18 + Tasks[-1].StackPointer]
0x206: Call2 0x10d

0x207: Pop(1)
0x208: PushEmpty(float)
0x209: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x20a: Call2 0x11a

0x20b: Pop(1)
0x20c: PushEmpty(float)
0x20d: Stack[-1] = Stack[20 + Tasks[-1].StackPointer]
0x20e: Call2 0x127

0x20f: Pop(1)
0x210: PushEmpty(float)
0x211: Stack[-1] = Stack[21 + Tasks[-1].StackPointer]
0x212: Call2 0x134

0x213: Pop(1)
0x214: @ InvertMouse(Stack[-41])
0x215: Pop(0)
0x216: @ InvertGamepad(Stack[-42])
0x217: Pop(0)
0x218: @ EnableGamepadRumble(Stack[-43])
0x219: Pop(0)
0x21a: Return(); Pop(0)

0x21b: PushEmpty()
0x21c: Push((int) 0)
0x21d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x21f: PushEmpty(int, float)
0x220: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x221: Call2 0x60

0x222: Pop(1)
0x223: Push("anisotropic_scrollbar")
0x224: @ SendMessage(Stack[-2], Stack[-1])
0x225: Pop(2)
0x226: PushEmpty(int, float)
0x227: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x228: Call2 0x76

0x229: Pop(1)
0x22a: Push("gamma_scrollbar")
0x22b: @ SendMessage(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: PushEmpty(int, float)
0x22e: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x22f: Call2 0x50

0x230: Pop(1)
0x231: Push("fov_scrollbar")
0x232: @ SendMessage(Stack[-2], Stack[-1])
0x233: Pop(2)
0x234: Push( Stack[30 + Tasks[-1].StackPointer] )
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Push((int) 1)
0x237: GOTO 0x239

0x238: Push((int) 0)
0x239: Push("vsync_check")
0x23a: @ SendMessage(Stack[-2], Stack[-1])
0x23b: Pop(2)
0x23c: Push( Stack[25 + Tasks[-1].StackPointer] )
0x23d: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23e: Push((int) 1)
0x23f: GOTO 0x241

0x240: Push((int) 0)
0x241: Push("shadow_check")
0x242: @ SendMessage(Stack[-2], Stack[-1])
0x243: Pop(2)
0x244: Push( Stack[27 + Tasks[-1].StackPointer] )
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Push((int) 1)
0x247: GOTO 0x249

0x248: Push((int) 0)
0x249: Push("dof_check")
0x24a: @ SendMessage(Stack[-2], Stack[-1])
0x24b: Pop(2)
0x24c: Push( Stack[26 + Tasks[-1].StackPointer] )
0x24d: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24e: Push((int) 1)
0x24f: GOTO 0x251

0x250: Push((int) 0)
0x251: Push("ssao_check")
0x252: @ SendMessage(Stack[-2], Stack[-1])
0x253: Pop(2)
0x254: Push( Stack[28 + Tasks[-1].StackPointer] )
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Push((int) 1)
0x257: GOTO 0x259

0x258: Push((int) 0)
0x259: Push("bloom_check")
0x25a: @ SendMessage(Stack[-2], Stack[-1])
0x25b: Pop(2)
0x25c: Push( Stack[29 + Tasks[-1].StackPointer] )
0x25d: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25e: Push((int) 1)
0x25f: GOTO 0x261

0x260: Push((int) 0)
0x261: Push("motionblur_check")
0x262: @ SendMessage(Stack[-2], Stack[-1])
0x263: Pop(2)
0x264: Push( Stack[34 + Tasks[-1].StackPointer] )
0x265: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x266: Push((int) 1)
0x267: GOTO 0x269

0x268: Push((int) 0)
0x269: Push("fxaa_check")
0x26a: @ SendMessage(Stack[-2], Stack[-1])
0x26b: Pop(2)
0x26c: GOTO 0x2b5

0x26d: Push((int) 1)
0x26e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x270: Push((int) 100)
0x271: Pop(1); Push(Stack[-1] * Stack[4 + StackPtr]);
0x272: Push("master_scrollbar")
0x273: @ SendMessage(Stack[-2], Stack[-1])
0x274: Pop(2)
0x275: Push((int) 100)
0x276: Pop(1); Push(Stack[-1] * Stack[5 + StackPtr]);
0x277: Push("music_scrollbar")
0x278: @ SendMessage(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: Push((int) 100)
0x27b: Pop(1); Push(Stack[-1] * Stack[6 + StackPtr]);
0x27c: Push("voice_scrollbar")
0x27d: @ SendMessage(Stack[-2], Stack[-1])
0x27e: Pop(2)
0x27f: Push((int) 100)
0x280: Pop(1); Push(Stack[-1] * Stack[7 + StackPtr]);
0x281: Push("sounds_scrollbar")
0x282: @ SendMessage(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: GOTO 0x2b5

0x285: Push((int) 2)
0x286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x288: PushEmpty(int, float)
0x289: Stack[-1] = Stack[8 + Tasks[-1].StackPointer]
0x28a: Call2 0x86

0x28b: Pop(1)
0x28c: Push("sensivity_scrollbar")
0x28d: @ SendMessage(Stack[-2], Stack[-1])
0x28e: Pop(2)
0x28f: PushEmpty(int, float)
0x290: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x291: Call2 0x86

0x292: Pop(1)
0x293: Push("gamepad_scrollbar")
0x294: @ SendMessage(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: PushEmpty(int, float)
0x297: Stack[-1] = Stack[10 + Tasks[-1].StackPointer]
0x298: Call2 0x86

0x299: Pop(1)
0x29a: Push("gamepad_ui_scrollbar")
0x29b: @ SendMessage(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: Push( Stack[31 + Tasks[-1].StackPointer] )
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: Push((int) 1)
0x2a0: GOTO 0x2a2

0x2a1: Push((int) 0)
0x2a2: Push("invert_mouse_check")
0x2a3: @ SendMessage(Stack[-2], Stack[-1])
0x2a4: Pop(2)
0x2a5: Push( Stack[32 + Tasks[-1].StackPointer] )
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a7: Push((int) 1)
0x2a8: GOTO 0x2aa

0x2a9: Push((int) 0)
0x2aa: Push("invert_gamepad_check")
0x2ab: @ SendMessage(Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: Push( Stack[33 + Tasks[-1].StackPointer] )
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Push((int) 1)
0x2b0: GOTO 0x2b2

0x2b1: Push((int) 0)
0x2b2: Push("rumble_gamepad_check")
0x2b3: @ SendMessage(Stack[-2], Stack[-1])
0x2b4: Pop(2)
0x2b5: Return(); Pop(0)

0x2b6: PushEmpty(float, float, float, float)
0x2b7: Push("key_form")
0x2b8: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: @ CaptureKeyboard()
0x2bb: Pop(0)
0x2bc: GOTO 0x2c7

0x2bd: Push("apply")
0x2be: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c0: EventDisable(200)
0x2c1: PushEmpty()
0x2c2: Call2 0x191

0x2c3: Pop(0)
0x2c4: Push((int) 1)
0x2c5: @ SendMessageToParent(Stack[-1])
0x2c6: Pop(1)
0x2c7: Push("cancel")
0x2c8: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2ca: EventDisable(200)
0x2cb: PushEmpty()
0x2cc: Call2 0x1d8

0x2cd: Pop(0)
0x2ce: Push((int) 1)
0x2cf: @ SendMessageToParent(Stack[-1])
0x2d0: Pop(1)
0x2d1: GOTO 0x2ec

0x2d2: Push("video")
0x2d3: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d5: PushEmpty(int)
0x2d6: Stack[-1] = (int) 0
0x2d7: Call2 0x3cf

0x2d8: Pop(1)
0x2d9: Return(); Pop(4)

0x2da: GOTO 0x2ec

0x2db: Push("audio")
0x2dc: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2de: PushEmpty(int)
0x2df: Stack[-1] = (int) 1
0x2e0: Call2 0x3cf

0x2e1: Pop(1)
0x2e2: Return(); Pop(4)

0x2e3: GOTO 0x2ec

0x2e4: Push("controls")
0x2e5: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: PushEmpty(int)
0x2e8: Stack[-1] = (int) 2
0x2e9: Call2 0x3cf

0x2ea: Pop(1)
0x2eb: Return(); Pop(4)

0x2ec: Push((int) 0)
0x2ed: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x2ef: Push("resolution_button_next")
0x2f0: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2f2: @ GetResolutionsCount(Stack[-2])
0x2f3: Pop(0)
0x2f4: Push((int) 1)
0x2f5: Pop(1); Push(Stack[-3] - Stack[-1]);
0x2f6: Pop(1); Push((bool) Stack[11 + Tasks[-1].StackPointer] >= Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[11 + Tasks[-1].StackPointer] = (int)0
0x2f9: GOTO 0x2fc

0x2fa: Push((int) 1)
0x2fb: Stack[11 + Tasks[-1].StackPointer] = Stack[11 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2fc: PushEmpty(float)
0x2fd: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x2fe: Call2 0xd4

0x2ff: Pop(1)
0x300: GOTO 0x367

0x301: Push("resolution_button_prev")
0x302: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x304: @ GetResolutionsCount(Stack[-1])
0x305: Pop(0)
0x306: Push((int) 0)
0x307: Pop(1); Push((bool) Stack[11 + Tasks[-1].StackPointer] <= Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x309: Push((int) 1)
0x30a: Stack[11 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(1);
0x30b: GOTO 0x30e

0x30c: Push((int) 1)
0x30d: Stack[11 + Tasks[-1].StackPointer] = Stack[11 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x30e: PushEmpty(float)
0x30f: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x310: Call2 0xd4

0x311: Pop(1)
0x312: GOTO 0x367

0x313: Push("anisotropic_scrollbar")
0x314: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x316: PushEmpty(float, int)
0x317: Stack[-1] = Stack[-9]
0x318: Call2 0x6b

0x319: Stack[12 + Tasks[-1].StackPointer] = Stack[-2]
0x31a: Pop(2)
0x31b: PushEmpty(float)
0x31c: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x31d: Call2 0xb5

0x31e: Pop(1)
0x31f: GOTO 0x367

0x320: Push("gamma_scrollbar")
0x321: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x323: PushEmpty(float, int)
0x324: Stack[-1] = Stack[-9]
0x325: Call2 0x7e

0x326: Stack[3 + Tasks[-1].StackPointer] = Stack[-2]
0x327: Pop(2)
0x328: PushEmpty(float)
0x329: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x32a: Call2 0xc7

0x32b: Pop(1)
0x32c: GOTO 0x367

0x32d: Push("fov_scrollbar")
0x32e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x330: PushEmpty(float, int)
0x331: Stack[-1] = Stack[-9]
0x332: Call2 0x58

0x333: Stack[13 + Tasks[-1].StackPointer] = Stack[-2]
0x334: Pop(2)
0x335: PushEmpty(float)
0x336: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x337: Call2 0xa6

0x338: Pop(1)
0x339: GOTO 0x367

0x33a: Push("vsync_check")
0x33b: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33d: Push((int) 0)
0x33e: Stack[30 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x33f: PushEmpty(bool)
0x340: Stack[-1] = Stack[30 + Tasks[-1].StackPointer]
0x341: Call2 0x141

0x342: Pop(1)
0x343: GOTO 0x367

0x344: Push("shadow_check")
0x345: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x347: Push((int) 0)
0x348: Stack[25 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x349: GOTO 0x367

0x34a: Push("dof_check")
0x34b: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34d: Push((int) 0)
0x34e: Stack[27 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x34f: GOTO 0x367

0x350: Push("ssao_check")
0x351: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x353: Push((int) 0)
0x354: Stack[26 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x355: GOTO 0x367

0x356: Push("bloom_check")
0x357: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x359: Push((int) 0)
0x35a: Stack[28 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x35b: GOTO 0x367

0x35c: Push("motionblur_check")
0x35d: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35f: Push((int) 0)
0x360: Stack[29 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x361: GOTO 0x367

0x362: Push("fxaa_check")
0x363: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Push((int) 0)
0x366: Stack[34 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x367: GOTO 0x3ce

0x368: Push((int) 1)
0x369: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x36b: Push("master_scrollbar")
0x36c: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36e: Push((float)100.0)
0x36f: Stack[4 + Tasks[-1].StackPointer] = Stack[-8] / Stack[-1]; Pop(1);
0x370: PushEmpty(float)
0x371: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x372: Call2 0xe6

0x373: Pop(1)
0x374: GOTO 0x392

0x375: Push("music_scrollbar")
0x376: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x378: Push((float)100.0)
0x379: Stack[5 + Tasks[-1].StackPointer] = Stack[-8] / Stack[-1]; Pop(1);
0x37a: PushEmpty(float)
0x37b: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x37c: Call2 0xf3

0x37d: Pop(1)
0x37e: GOTO 0x392

0x37f: Push("voice_scrollbar")
0x380: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x382: Push((float)100.0)
0x383: Stack[6 + Tasks[-1].StackPointer] = Stack[-8] / Stack[-1]; Pop(1);
0x384: PushEmpty(float)
0x385: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x386: Call2 0x100

0x387: Pop(1)
0x388: GOTO 0x392

0x389: Push("sounds_scrollbar")
0x38a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38c: Push((float)100.0)
0x38d: Stack[7 + Tasks[-1].StackPointer] = Stack[-8] / Stack[-1]; Pop(1);
0x38e: PushEmpty(float)
0x38f: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0x390: Call2 0x10d

0x391: Pop(1)
0x392: GOTO 0x3ce

0x393: Push((int) 2)
0x394: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x396: Push("sensivity_scrollbar")
0x397: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x399: PushEmpty(float, int)
0x39a: Stack[-1] = Stack[-9]
0x39b: Call2 0x8e

0x39c: Stack[8 + Tasks[-1].StackPointer] = Stack[-2]
0x39d: Pop(2)
0x39e: PushEmpty(float)
0x39f: Stack[-1] = Stack[8 + Tasks[-1].StackPointer]
0x3a0: Call2 0x11a

0x3a1: Pop(1)
0x3a2: GOTO 0x3ce

0x3a3: Push("invert_mouse_check")
0x3a4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a6: Push((int) 0)
0x3a7: Stack[31 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x3a8: GOTO 0x3ce

0x3a9: Push("gamepad_scrollbar")
0x3aa: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3ac: PushEmpty(float, int)
0x3ad: Stack[-1] = Stack[-9]
0x3ae: Call2 0x96

0x3af: Stack[9 + Tasks[-1].StackPointer] = Stack[-2]
0x3b0: Pop(2)
0x3b1: PushEmpty(float)
0x3b2: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x3b3: Call2 0x127

0x3b4: Pop(1)
0x3b5: GOTO 0x3ce

0x3b6: Push("gamepad_ui_scrollbar")
0x3b7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3b9: PushEmpty(float, int)
0x3ba: Stack[-1] = Stack[-9]
0x3bb: Call2 0x9e

0x3bc: Stack[10 + Tasks[-1].StackPointer] = Stack[-2]
0x3bd: Pop(2)
0x3be: PushEmpty(float)
0x3bf: Stack[-1] = Stack[10 + Tasks[-1].StackPointer]
0x3c0: Call2 0x134

0x3c1: Pop(1)
0x3c2: GOTO 0x3ce

0x3c3: Push("invert_gamepad_check")
0x3c4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c6: Push((int) 0)
0x3c7: Stack[32 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x3c8: GOTO 0x3ce

0x3c9: Push("rumble_gamepad_check")
0x3ca: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: Push((int) 0)
0x3cd: Stack[33 + Tasks[-1].StackPointer] = Stack[-8] != Stack[-1]; Pop(1);
0x3ce: Return(); Pop(4)

0x3cf: PushEmpty()
0x3d0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Return(); Pop(0)

0x3d3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3d4: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: @@ DestroyWindow()
0x3d7: Pop(0)
0x3d8: Push((int) 0)
0x3d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3db: Push("video_page.xml")
0x3dc: Push((bool) 0)
0x3dd: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x3de: Pop(2)
0x3df: Push((int) 1)
0x3e0: Push("video")
0x3e1: @ SendMessage(Stack[-2], Stack[-1])
0x3e2: Pop(2)
0x3e3: Push((int) 0)
0x3e4: Push("audio")
0x3e5: @ SendMessage(Stack[-2], Stack[-1])
0x3e6: Pop(2)
0x3e7: Push((int) 0)
0x3e8: Push("controls")
0x3e9: @ SendMessage(Stack[-2], Stack[-1])
0x3ea: Pop(2)
0x3eb: PushEmpty(bool)
0x3ec: Stack[-1] = Stack[30 + Tasks[-1].StackPointer]
0x3ed: Call2 0x141

0x3ee: Pop(1)
0x3ef: PushEmpty(float)
0x3f0: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x3f1: Call2 0xb5

0x3f2: Pop(1)
0x3f3: PushEmpty(float)
0x3f4: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x3f5: Call2 0xd4

0x3f6: Pop(1)
0x3f7: GOTO 0x41f

0x3f8: Push((int) 1)
0x3f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3fb: Push("audio_page.xml")
0x3fc: Push((bool) 0)
0x3fd: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x3fe: Pop(2)
0x3ff: Push((int) 0)
0x400: Push("video")
0x401: @ SendMessage(Stack[-2], Stack[-1])
0x402: Pop(2)
0x403: Push((int) 1)
0x404: Push("audio")
0x405: @ SendMessage(Stack[-2], Stack[-1])
0x406: Pop(2)
0x407: Push((int) 0)
0x408: Push("controls")
0x409: @ SendMessage(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: GOTO 0x41f

0x40c: Push((int) 2)
0x40d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x40f: Push((int) 0)
0x410: Push("video")
0x411: @ SendMessage(Stack[-2], Stack[-1])
0x412: Pop(2)
0x413: Push((int) 0)
0x414: Push("audio")
0x415: @ SendMessage(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: Push((int) 1)
0x418: Push("controls")
0x419: @ SendMessage(Stack[-2], Stack[-1])
0x41a: Pop(2)
0x41b: Push("control_page.xml")
0x41c: Push((bool) 0)
0x41d: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x41e: Pop(2)
0x41f: PushEmpty(int)
0x420: Stack[-1] = Stack[-2]
0x421: Call2 0x21b

0x422: Pop(1)
0x423: Return(); Pop(0)

