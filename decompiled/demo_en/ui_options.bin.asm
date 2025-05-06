GlobalVarCount = 0

Strings:
	options_border.xml
	gamma_scrollbar
	shadow_check
	master_scrollbar
	music_scrollbar
	voice_scrollbar
	sounds_scrollbar
	sensivity_scrollbar
	invert_mouse_check
	key_form
	apply
	video
	audio
	controls
	DestroyWindow
	video_page.xml
	audio_page.xml
	control_page.xml

Import:
	CreateWindow (3 args)
	CaptureKeyboard (0 args)
	ProcessEvents (0 args)
	SendMessageToParent (1 args)
	GetGammaCorrection (1 args)
	IsShadowsEnabled (1 args)
	GetVolMaster (1 args)
	GetVolMusic (1 args)
	GetVolVoice (1 args)
	GetVolSounds (1 args)
	GetMouseSensivity (1 args)
	IsMouseInverted (1 args)
	SetGammaCorrection (1 args)
	EnableShadows (1 args)
	SetVolMaster (1 args)
	SetVolMusic (1 args)
	SetVolVoice (1 args)
	SetVolSounds (1 args)
	SetMouseSensivity (1 args)
	InvertMouse (1 args)
	SaveConfig (0 args)
	WriteBinds (0 args)
	SendMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, int, float, float, float, float, float, float, float, float, float, float, float, float, bool, bool, bool, bool) Params = 0
		EVENT_100 Op = 0x11 Vars = (int)
		EVENT_200 Op = 0xb7 Vars = (int, string, object)


0x0: PushEmpty()
0x1: Call2 0x39

0x2: Pop(0)
0x3: Push("options_border.xml")
0x4: Push((bool) 0)
0x5: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0x6: Pop(2)
0x7: Stack[2 + Tasks[-1].StackPointer] = (int)-1
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 0
0xa: Call2 0x12c

0xb: Pop(1)
0xc: @ CaptureKeyboard()
0xd: Pop(0)
0xe: @ ProcessEvents()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: PushEmpty()
0x13: Call2 0x67

0x14: Pop(0)
0x15: Push((int) 1)
0x16: @ SendMessageToParent(Stack[-1])
0x17: Pop(1)
0x18: Return(); Pop(0)

0x19: PushEmpty()
0x1a: Push((int) 100)
0x1b: Push((float)0.5)
0x1c: Pop(1); Push(Stack[-3] - Stack[-1]);
0x1d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e: Push((float)2.5)
0x1f: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x20: Return(); Pop(0)

0x21: PushEmpty()
0x22: Push((float)0.5)
0x23: Push((float)2.5)
0x24: Pop(1); Push(Stack[-1] * Stack[-3]);
0x25: Push((int) 100)
0x26: Pop(2); Push(Stack[-2] / Stack[-1]);
0x27: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: Push((int) 100)
0x2b: Push((float)0.1)
0x2c: Pop(1); Push(Stack[-3] - Stack[-1]);
0x2d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2e: Push((float)4.9)
0x2f: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x30: Return(); Pop(0)

0x31: PushEmpty()
0x32: Push((float)0.1)
0x33: Push((float)4.9)
0x34: Pop(1); Push(Stack[-1] * Stack[-3]);
0x35: Push((int) 100)
0x36: Pop(2); Push(Stack[-2] / Stack[-1]);
0x37: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x38: Return(); Pop(0)

0x39: @ GetGammaCorrection(Stack[-3])
0x3a: Pop(0)
0x3b: Stack[9 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer]
0x3c: @ IsShadowsEnabled(Stack[-17])
0x3d: Pop(0)
0x3e: Stack[15 + Tasks[-1].StackPointer] = Stack[17 + Tasks[-1].StackPointer]
0x3f: @ GetVolMaster(Stack[-4])
0x40: Pop(0)
0x41: Stack[10 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer]
0x42: @ GetVolMusic(Stack[-5])
0x43: Pop(0)
0x44: Stack[11 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer]
0x45: @ GetVolVoice(Stack[-6])
0x46: Pop(0)
0x47: Stack[12 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer]
0x48: @ GetVolSounds(Stack[-7])
0x49: Pop(0)
0x4a: Stack[13 + Tasks[-1].StackPointer] = Stack[7 + Tasks[-1].StackPointer]
0x4b: @ GetMouseSensivity(Stack[-14])
0x4c: Pop(0)
0x4d: Stack[8 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer]
0x4e: @ IsMouseInverted(Stack[-18])
0x4f: Pop(0)
0x50: Stack[16 + Tasks[-1].StackPointer] = Stack[18 + Tasks[-1].StackPointer]
0x51: Return(); Pop(0)

0x52: @ SetGammaCorrection(Stack[-3])
0x53: Pop(0)
0x54: @ EnableShadows(Stack[-15])
0x55: Pop(0)
0x56: @ SetVolMaster(Stack[-4])
0x57: Pop(0)
0x58: @ SetVolMusic(Stack[-5])
0x59: Pop(0)
0x5a: @ SetVolVoice(Stack[-6])
0x5b: Pop(0)
0x5c: @ SetVolSounds(Stack[-7])
0x5d: Pop(0)
0x5e: @ SetMouseSensivity(Stack[-8])
0x5f: Pop(0)
0x60: @ InvertMouse(Stack[-16])
0x61: Pop(0)
0x62: @ SaveConfig()
0x63: Pop(0)
0x64: @ WriteBinds()
0x65: Pop(0)
0x66: Return(); Pop(0)

0x67: @ SetGammaCorrection(Stack[-9])
0x68: Pop(0)
0x69: @ EnableShadows(Stack[-17])
0x6a: Pop(0)
0x6b: @ SetVolMaster(Stack[-10])
0x6c: Pop(0)
0x6d: @ SetVolMusic(Stack[-11])
0x6e: Pop(0)
0x6f: @ SetVolVoice(Stack[-12])
0x70: Pop(0)
0x71: @ SetVolSounds(Stack[-13])
0x72: Pop(0)
0x73: @ SetMouseSensivity(Stack[-14])
0x74: Pop(0)
0x75: @ InvertMouse(Stack[-18])
0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: PushEmpty()
0x79: Push((int) 0)
0x7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x7c: PushEmpty(int, float)
0x7d: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x7e: Call2 0x19

0x7f: Pop(1)
0x80: Push("gamma_scrollbar")
0x81: @ SendMessage(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: Push( Stack[15 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x85: Push((int) 1)
0x86: GOTO 0x88

0x87: Push((int) 0)
0x88: Push("shadow_check")
0x89: @ SendMessage(Stack[-2], Stack[-1])
0x8a: Pop(2)
0x8b: GOTO 0xb6

0x8c: Push((int) 1)
0x8d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x8f: Push((int) 100)
0x90: Pop(1); Push(Stack[-1] * Stack[4 + StackPtr]);
0x91: Push("master_scrollbar")
0x92: @ SendMessage(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: Push((int) 100)
0x95: Pop(1); Push(Stack[-1] * Stack[5 + StackPtr]);
0x96: Push("music_scrollbar")
0x97: @ SendMessage(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: Push((int) 100)
0x9a: Pop(1); Push(Stack[-1] * Stack[6 + StackPtr]);
0x9b: Push("voice_scrollbar")
0x9c: @ SendMessage(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: Push((int) 100)
0x9f: Pop(1); Push(Stack[-1] * Stack[7 + StackPtr]);
0xa0: Push("sounds_scrollbar")
0xa1: @ SendMessage(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0xb6

0xa4: Push((int) 2)
0xa5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xa7: PushEmpty(int, float)
0xa8: Stack[-1] = Stack[8 + Tasks[-1].StackPointer]
0xa9: Call2 0x29

0xaa: Pop(1)
0xab: Push("sensivity_scrollbar")
0xac: @ SendMessage(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: Push( Stack[16 + Tasks[-1].StackPointer] )
0xaf: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb0: Push((int) 1)
0xb1: GOTO 0xb3

0xb2: Push((int) 0)
0xb3: Push("invert_mouse_check")
0xb4: @ SendMessage(Stack[-2], Stack[-1])
0xb5: Pop(2)
0xb6: Return(); Pop(0)

0xb7: PushEmpty()
0xb8: Push("key_form")
0xb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbb: @ CaptureKeyboard()
0xbc: Pop(0)
0xbd: GOTO 0xe3

0xbe: Push("apply")
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc1: EventDisable(200)
0xc2: PushEmpty()
0xc3: Call2 0x52

0xc4: Pop(0)
0xc5: Push((int) 1)
0xc6: @ SendMessageToParent(Stack[-1])
0xc7: Pop(1)
0xc8: GOTO 0xe3

0xc9: Push("video")
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcc: PushEmpty(int)
0xcd: Stack[-1] = (int) 0
0xce: Call2 0x12c

0xcf: Pop(1)
0xd0: Return(); Pop(0)

0xd1: GOTO 0xe3

0xd2: Push("audio")
0xd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd5: PushEmpty(int)
0xd6: Stack[-1] = (int) 1
0xd7: Call2 0x12c

0xd8: Pop(1)
0xd9: Return(); Pop(0)

0xda: GOTO 0xe3

0xdb: Push("controls")
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(int)
0xdf: Stack[-1] = (int) 2
0xe0: Call2 0x12c

0xe1: Pop(1)
0xe2: Return(); Pop(0)

0xe3: Push((int) 0)
0xe4: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe6: Push("gamma_scrollbar")
0xe7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe9: PushEmpty(float, int)
0xea: Stack[-1] = Stack[-5]
0xeb: Call2 0x21

0xec: Stack[3 + Tasks[-1].StackPointer] = Stack[-2]
0xed: Pop(2)
0xee: @ SetGammaCorrection(Stack[-3])
0xef: Pop(0)
0xf0: GOTO 0xf6

0xf1: Push("shadow_check")
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: Push((int) 0)
0xf5: Stack[15 + Tasks[-1].StackPointer] = Stack[-4] != Stack[-1]; Pop(1);
0xf6: GOTO 0x12b

0xf7: Push((int) 1)
0xf8: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0xfa: Push("master_scrollbar")
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: Push((float)100.0)
0xfe: Stack[4 + Tasks[-1].StackPointer] = Stack[-4] / Stack[-1]; Pop(1);
0xff: @ SetVolMaster(Stack[-4])
0x100: Pop(0)
0x101: GOTO 0x119

0x102: Push("music_scrollbar")
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: Push((float)100.0)
0x106: Stack[5 + Tasks[-1].StackPointer] = Stack[-4] / Stack[-1]; Pop(1);
0x107: @ SetVolMusic(Stack[-5])
0x108: Pop(0)
0x109: GOTO 0x119

0x10a: Push("voice_scrollbar")
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: Push((float)100.0)
0x10e: Stack[6 + Tasks[-1].StackPointer] = Stack[-4] / Stack[-1]; Pop(1);
0x10f: @ SetVolVoice(Stack[-6])
0x110: Pop(0)
0x111: GOTO 0x119

0x112: Push("sounds_scrollbar")
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x115: Push((float)100.0)
0x116: Stack[7 + Tasks[-1].StackPointer] = Stack[-4] / Stack[-1]; Pop(1);
0x117: @ SetVolSounds(Stack[-7])
0x118: Pop(0)
0x119: GOTO 0x12b

0x11a: Push((int) 2)
0x11b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x11d: Push("sensivity_scrollbar")
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x120: PushEmpty(float, int)
0x121: Stack[-1] = Stack[-5]
0x122: Call2 0x31

0x123: Stack[8 + Tasks[-1].StackPointer] = Stack[-2]
0x124: Pop(2)
0x125: GOTO 0x12b

0x126: Push("invert_mouse_check")
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x129: Push((int) 0)
0x12a: Stack[16 + Tasks[-1].StackPointer] = Stack[-4] != Stack[-1]; Pop(1);
0x12b: Return(); Pop(0)

0x12c: PushEmpty()
0x12d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Return(); Pop(0)

0x130: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x131: Push( Stack[1 + Tasks[-1].StackPointer] )
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: @@ DestroyWindow()
0x134: Pop(0)
0x135: Push((int) 0)
0x136: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x138: Push("video_page.xml")
0x139: Push((bool) 0)
0x13a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x13b: Pop(2)
0x13c: Push((int) 1)
0x13d: Push("video")
0x13e: @ SendMessage(Stack[-2], Stack[-1])
0x13f: Pop(2)
0x140: Push((int) 0)
0x141: Push("audio")
0x142: @ SendMessage(Stack[-2], Stack[-1])
0x143: Pop(2)
0x144: Push((int) 0)
0x145: Push("controls")
0x146: @ SendMessage(Stack[-2], Stack[-1])
0x147: Pop(2)
0x148: GOTO 0x170

0x149: Push((int) 1)
0x14a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x14c: Push("audio_page.xml")
0x14d: Push((bool) 0)
0x14e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x14f: Pop(2)
0x150: Push((int) 0)
0x151: Push("video")
0x152: @ SendMessage(Stack[-2], Stack[-1])
0x153: Pop(2)
0x154: Push((int) 1)
0x155: Push("audio")
0x156: @ SendMessage(Stack[-2], Stack[-1])
0x157: Pop(2)
0x158: Push((int) 0)
0x159: Push("controls")
0x15a: @ SendMessage(Stack[-2], Stack[-1])
0x15b: Pop(2)
0x15c: GOTO 0x170

0x15d: Push((int) 2)
0x15e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x160: Push((int) 0)
0x161: Push("video")
0x162: @ SendMessage(Stack[-2], Stack[-1])
0x163: Pop(2)
0x164: Push((int) 0)
0x165: Push("audio")
0x166: @ SendMessage(Stack[-2], Stack[-1])
0x167: Pop(2)
0x168: Push((int) 1)
0x169: Push("controls")
0x16a: @ SendMessage(Stack[-2], Stack[-1])
0x16b: Pop(2)
0x16c: Push("control_page.xml")
0x16d: Push((bool) 0)
0x16e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x16f: Pop(2)
0x170: PushEmpty(int)
0x171: Stack[-1] = Stack[-2]
0x172: Call2 0x78

0x173: Pop(1)
0x174: Return(); Pop(0)

