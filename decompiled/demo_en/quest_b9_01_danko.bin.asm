GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Menace
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Sorrow
	Untrust
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	oob9Danko1
	oob9Danko2
	b9q01
	b9q01DankoAmmo
	oob9Danko4
	map_chertez_state
	map_chertez_force
	pt_map_aglaja
	ShowMap
	b9q01DankoFree
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x29f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe7 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_6 Op = 0x2b0 Vars = ()
		EVENT_5 Op = 0x2b3 Vars = ()
		EVENT_0 Op = 0x2b6 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2de

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4fd

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4fb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4ff

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x501

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4ea

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x3f2

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x333

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x322

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x452

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x45e

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x410

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Menace"
0x6c: Call2 0xd1

0x6d: Pop(1)
0x6e: Push((int) 521581)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 531554)
0x74: Push((int) 32918)
0x75: Push((int) 32917)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0xb3

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x452

0x7c: Pop(1)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xd1

0x82: Pop(1)
0x83: Push((int) 521577)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x46a

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Push((int) 521578)
0x8e: Push((int) 22740)
0x8f: Push((int) 22739)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: PushEmpty(bool, object)
0x93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94: Call2 0x476

0x95: Pop(1)
0x96: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x97: Push((int) 522381)
0x98: Push((int) 23547)
0x99: Push((int) 23546)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: Push((int) 521586)
0x9d: Push((int) -1)
0x9e: Push((int) 22747)
0x9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0: Pop(3)
0xa1: GOTO 0xb3

0xa2: PushEmpty(string)
0xa3: Stack[-1] = "Neutral"
0xa4: Call2 0xd1

0xa5: Pop(1)
0xa6: Push((int) 521601)
0xa7: @@ SetMessage(Stack[-1])
0xa8: Pop(1)
0xa9: @@ ClearReplies()
0xaa: Pop(0)
0xab: Push((int) 521602)
0xac: Push((int) -1)
0xad: Push((int) 22767)
0xae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(3)
0xb0: GOTO 0xb3

0xb1: Return(); Pop(0)

0xb2: GOTO 0x55

0xb3: PushEmpty(bool)
0xb4: Call2 0x503

0xb5: Pop(0)
0xb6: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb7: @ lshWaitForAnimEnd()
0xb8: Pop(0)
0xb9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: GOTO 0xc1

0xbc: PushEmpty(string)
0xbd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbe: Call2 0x3bd

0xbf: Pop(1)
0xc0: GOTO 0xb7

0xc1: GOTO 0xd0

0xc2: Push("all")
0xc3: Push("idle")
0xc4: @ PlayAnimation(Stack[-2], Stack[-1])
0xc5: Pop(2)
0xc6: @ WaitForAnimEnd()
0xc7: Pop(0)
0xc8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: GOTO 0xd0

0xcb: Push("all")
0xcc: Push("idle")
0xcd: @ PlayAnimation(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: GOTO 0xc6

0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: PushEmpty(bool)
0xd3: Call2 0x503

0xd4: Pop(0)
0xd5: Pop(1); Push((bool) Stack[-1] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Return(); Pop(0)

0xd8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Return(); Pop(0)

0xdb: PushEmpty(string, bool)
0xdc: Stack[-2] = Stack[-3]
0xdd: Push("")
0xde: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe0: Stack[-1] = (bool) 0
0xe1: GOTO 0xe3

0xe2: Stack[-1] = (bool) 1
0xe3: Call2 0x3cd

0xe4: Pop(2)
0xe5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: Push((int) 1)
0xe9: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0xea: PushEmpty()
0xeb: Call2 0x3eb

0xec: Pop(0)
0xed: Push((int) 22745)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf0: PushEmpty(object, object)
0xf1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3: Call2 0x41c

0xf4: Pop(2)
0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x431

0xf9: Pop(2)
0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x442

0xfe: Pop(2)
0xff: Push((int) 23541)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x41c

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x431

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x442

0x110: Pop(2)
0x111: Push((int) 22739)
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x416

0x118: Pop(2)
0x119: Push((int) 22741)
0x11a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x425

0x120: Pop(2)
0x121: Push((int) 23549)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x425

0x128: Pop(2)
0x129: Push((int) 23546)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12c: PushEmpty(object, object)
0x12d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f: Call2 0x42b

0x130: Pop(2)
0x131: Push((int) 22742)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x134: PushEmpty(bool)
0x135: Stack[-1] = (bool) 0
0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call2 0x452

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13b: PushEmpty(bool, object)
0x13c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Call2 0x45e

0x13e: Pop(1)
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: Stack[-1] = (bool) 1
0x141: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x142: PushEmpty(object, object)
0x143: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x144: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x145: Call2 0x410

0x146: Pop(2)
0x147: PushEmpty(string)
0x148: Stack[-1] = "Menace"
0x149: Call2 0xd1

0x14a: Pop(1)
0x14b: Push((int) 521581)
0x14c: @@ SetMessage(Stack[-1])
0x14d: Pop(1)
0x14e: @@ ClearReplies()
0x14f: Pop(0)
0x150: Push((int) 531554)
0x151: Push((int) 32918)
0x152: Push((int) 32917)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x452

0x159: Pop(1)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral"
0x15e: Call2 0xd1

0x15f: Pop(1)
0x160: Push((int) 521577)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x46a

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: Push((int) 521578)
0x16b: Push((int) 22740)
0x16c: Push((int) 22739)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x476

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x174: Push((int) 522381)
0x175: Push((int) 23547)
0x176: Push((int) 23546)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Push((int) 521586)
0x17a: Push((int) -1)
0x17b: Push((int) 22747)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Return(); Pop(0)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Neutral"
0x181: Call2 0xd1

0x182: Pop(1)
0x183: Push((int) 521601)
0x184: @@ SetMessage(Stack[-1])
0x185: Pop(1)
0x186: @@ ClearReplies()
0x187: Pop(0)
0x188: Push((int) 521602)
0x189: Push((int) -1)
0x18a: Push((int) 22767)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 23551)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x191: Push((int) 23553)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Sorrow"
0x196: Call2 0xd1

0x197: Pop(1)
0x198: Push((int) 522388)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 522389)
0x19e: Push((int) -1)
0x19f: Push((int) 23554)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 23547)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Neutral"
0x1a8: Call2 0xd1

0x1a9: Pop(1)
0x1aa: Push((int) 522382)
0x1ab: @@ SetMessage(Stack[-1])
0x1ac: Pop(1)
0x1ad: @@ ClearReplies()
0x1ae: Pop(0)
0x1af: Push((int) 522383)
0x1b0: Push((int) -1)
0x1b1: Push((int) 23548)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 22740)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Sorrow"
0x1ba: Call2 0xd1

0x1bb: Pop(1)
0x1bc: Push((int) 521579)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 522377)
0x1c2: Push((int) 23543)
0x1c3: Push((int) 23542)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 23543)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Sorrow"
0x1cc: Call2 0xd1

0x1cd: Pop(1)
0x1ce: Push((int) 522378)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 521580)
0x1d4: Push((int) -1)
0x1d5: Push((int) 22741)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Push((int) 522379)
0x1d9: Push((int) 23545)
0x1da: Push((int) 23544)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Push((int) 23545)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = "Sorrow"
0x1e3: Call2 0xd1

0x1e4: Pop(1)
0x1e5: Push((int) 522380)
0x1e6: @@ SetMessage(Stack[-1])
0x1e7: Pop(1)
0x1e8: @@ ClearReplies()
0x1e9: Pop(0)
0x1ea: Push((int) 522384)
0x1eb: Push((int) -1)
0x1ec: Push((int) 23549)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Push((int) 32918)
0x1f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = "Neutral"
0x1f5: Call2 0xd1

0x1f6: Pop(1)
0x1f7: Push((int) 531555)
0x1f8: @@ SetMessage(Stack[-1])
0x1f9: Pop(1)
0x1fa: @@ ClearReplies()
0x1fb: Pop(0)
0x1fc: Push((int) 521582)
0x1fd: Push((int) 23526)
0x1fe: Push((int) 22743)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 23526)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Untrust"
0x207: Call2 0xd1

0x208: Pop(1)
0x209: Push((int) 522363)
0x20a: @@ SetMessage(Stack[-1])
0x20b: Pop(1)
0x20c: @@ ClearReplies()
0x20d: Pop(0)
0x20e: Push((int) 522364)
0x20f: Push((int) 23528)
0x210: Push((int) 23527)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Push((int) 522369)
0x214: Push((int) 23533)
0x215: Push((int) 23532)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 23533)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral"
0x21e: Call2 0xd1

0x21f: Pop(1)
0x220: Push((int) 522370)
0x221: @@ SetMessage(Stack[-1])
0x222: Pop(1)
0x223: @@ ClearReplies()
0x224: Pop(0)
0x225: Push((int) 522371)
0x226: Push((int) 22744)
0x227: Push((int) 23534)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Push((int) 23528)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Untrust"
0x230: Call2 0xd1

0x231: Pop(1)
0x232: Push((int) 522365)
0x233: @@ SetMessage(Stack[-1])
0x234: Pop(1)
0x235: @@ ClearReplies()
0x236: Pop(0)
0x237: Push((int) 522366)
0x238: Push((int) 23530)
0x239: Push((int) 23529)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Return(); Pop(0)

0x23d: Push((int) 23530)
0x23e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x240: PushEmpty(string)
0x241: Stack[-1] = "Untrust"
0x242: Call2 0xd1

0x243: Pop(1)
0x244: Push((int) 522367)
0x245: @@ SetMessage(Stack[-1])
0x246: Pop(1)
0x247: @@ ClearReplies()
0x248: Pop(0)
0x249: Push((int) 522368)
0x24a: Push((int) 22744)
0x24b: Push((int) 23531)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Return(); Pop(0)

0x24f: Push((int) 22744)
0x250: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x252: PushEmpty(string)
0x253: Stack[-1] = "Untrust"
0x254: Call2 0xd1

0x255: Pop(1)
0x256: Push((int) 521583)
0x257: @@ SetMessage(Stack[-1])
0x258: Pop(1)
0x259: @@ ClearReplies()
0x25a: Pop(0)
0x25b: Push((int) 522372)
0x25c: Push((int) 23538)
0x25d: Push((int) 23537)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Return(); Pop(0)

0x261: Push((int) 23538)
0x262: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x264: PushEmpty(string)
0x265: Stack[-1] = "Untrust"
0x266: Call2 0xd1

0x267: Pop(1)
0x268: Push((int) 522373)
0x269: @@ SetMessage(Stack[-1])
0x26a: Pop(1)
0x26b: @@ ClearReplies()
0x26c: Pop(0)
0x26d: Push((int) 522374)
0x26e: Push((int) 23540)
0x26f: Push((int) 23539)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Return(); Pop(0)

0x273: Push((int) 23540)
0x274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x276: PushEmpty(string)
0x277: Stack[-1] = "Neutral"
0x278: Call2 0xd1

0x279: Pop(1)
0x27a: Push((int) 522375)
0x27b: @@ SetMessage(Stack[-1])
0x27c: Pop(1)
0x27d: @@ ClearReplies()
0x27e: Pop(0)
0x27f: Push((int) 521584)
0x280: Push((int) -1)
0x281: Push((int) 22745)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Push((int) 522376)
0x285: Push((int) -1)
0x286: Push((int) 23541)
0x287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(3)
0x289: Return(); Pop(0)

0x28a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28b: PushEmpty(bool)
0x28c: Call2 0x503

0x28d: Pop(0)
0x28e: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28f: @ lshStopAnimation()
0x290: Pop(0)
0x291: GOTO 0x294

0x292: @ StopAnimation()
0x293: Pop(0)
0x294: Return(); Pop(0)

0x295: GOTO 0xe8

0x296: Return(); Pop(0)

0x297: PushEmpty()
0x298: PushEmpty(int, object)
0x299: Stack[-1] = Stack[-3]
0x29a: Push(-2, 1); TaskCall(0)
0x29b: Call2 0x0

0x29c: Pop(-2, 1); TaskReturn
0x29d: Pop(2)
0x29e: Return(); Pop(0)

0x29f: PushEmpty(bool)
0x2a0: Call2 0x2d9

0x2a1: Pop(0)
0x2a2: Pop(1); Push((bool) Stack[-1] == 0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a4: @ Hold()
0x2a5: Pop(0)
0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Neutral"
0x2a8: Call2 0x3bd

0x2a9: Pop(1)
0x2aa: @ lshWaitForAnimEnd()
0x2ab: Pop(0)
0x2ac: GOTO 0x2a6

0x2ad: @ Hold()
0x2ae: Pop(0)
0x2af: Return(); Pop(0)

0x2b0: @ Hold()
0x2b1: Pop(0)
0x2b2: Return(); Pop(0)

0x2b3: @ StopGroup0()
0x2b4: Pop(0)
0x2b5: Return(); Pop(0)

0x2b6: PushEmpty(bool, bool)
0x2b7: @ IsOverrideActive(Stack[-1])
0x2b8: Pop(0)
0x2b9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2bb: EventDisable(0)
0x2bc: PushEmpty(bool, object)
0x2bd: Stack[-1] = Stack[-5]
0x2be: Call2 0x2d0

0x2bf: Pop(2)
0x2c0: EventEnable(0)
0x2c1: PushEmpty(object)
0x2c2: Stack[-1] = Stack[-4]
0x2c3: Call2 0x297

0x2c4: Pop(1)
0x2c5: Return(); Pop(2)

0x2c6: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2c7: @ GetPosition(Stack[-3])
0x2c8: Pop(0)
0x2c9: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2ca: Push(CvectorIndex(Stack[-2], 0))
0x2cb: Push(CvectorIndex(Stack[-3], 2))
0x2cc: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2cd: Pop(2)
0x2ce: Stack[-8] = Stack[-1]
0x2cf: Return(); Pop(6)

0x2d0: PushEmpty(cvector, cvector)
0x2d1: @@ GetPosition(Stack[-1])
0x2d2: Pop(0)
0x2d3: PushEmpty(bool, cvector)
0x2d4: Stack[-1] = Stack[-3]
0x2d5: Call2 0x2c6

0x2d6: Stack[-6] = Stack[-2]
0x2d7: Pop(2)
0x2d8: Return(); Pop(2)

0x2d9: PushEmpty(bool, bool)
0x2da: @ IsLoaded(Stack[-1])
0x2db: Pop(0)
0x2dc: Stack[-3] = Stack[-1]
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2df: @@ GetPosition(Stack[-8])
0x2e0: Pop(0)
0x2e1: @@ GetEyesHeight(Stack[-9])
0x2e2: Pop(0)
0x2e3: Push(CvectorIndex(Stack[-8], 1))
0x2e4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2e6: @ GetPosition(Stack[-7])
0x2e7: Pop(0)
0x2e8: @ GetEyesHeight(Stack[-9])
0x2e9: Pop(0)
0x2ea: Push(CvectorIndex(Stack[-7], 1))
0x2eb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ec: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ed: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ee: Push(CvectorIndex(Stack[-6], 1))
0x2ef: Stack[-1] = (int) 0
0x2f0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2f1: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2f2: Pop(1); Push(Sqrt(Stack[-1]))
0x2f3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2f4: Stack[-5] = -Stack[-6]; Pop(0);
0x2f5: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2f6: PushEmpty(cvector, cvector)
0x2f7: Push(CVector(0.0, 1.0, 0.0))
0x2f8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2f9: Call2 0x3f8

0x2fa: Pop(1)
0x2fb: Push((int) 25)
0x2fc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2fe: Push(CVector(0.0, 10.0, 0.0))
0x2ff: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x300: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x301: @ IsOverrideActive(Stack[-2])
0x302: Pop(0)
0x303: Push(Stack[-2])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-21] = (bool) 0
0x306: Return(); Pop(18)

0x307: @ StopWorld()
0x308: Pop(0)
0x309: @ CameraTransit(Stack[-3], Stack[-5])
0x30a: Pop(0)
0x30b: Push(CvectorIndex(Stack[-4], 0))
0x30c: Push(CvectorIndex(Stack[-5], 2))
0x30d: @ Rotate(Stack[-2], Stack[-1])
0x30e: Pop(2)
0x30f: PushEmpty(bool)
0x310: Call2 0x503

0x311: Pop(0)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: GOTO 0x31c

0x314: Push("head")
0x315: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x316: Pop(1)
0x317: Push(Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x319: Push("head")
0x31a: @ LookAsyncCamera(Stack[-1])
0x31b: Pop(1)
0x31c: @ CameraWaitForPlayFinish()
0x31d: Pop(0)
0x31e: @ ResumeWorld()
0x31f: Pop(0)
0x320: Stack[-21] = (bool) 1
0x321: Return(); Pop(18)

0x322: PushEmpty(bool, bool)
0x323: @ CameraSwitchToNormal()
0x324: Pop(0)
0x325: PushEmpty(bool)
0x326: Call2 0x503

0x327: Pop(0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: GOTO 0x332

0x32a: Push("head")
0x32b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x32c: Pop(1)
0x32d: Push(Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32f: Push("head")
0x330: @ UnlookAsync(Stack[-1])
0x331: Pop(1)
0x332: Return(); Pop(2)

0x333: PushEmpty(int, int, int, int)
0x334: Push("voice_common")
0x335: @ GetVariable(Stack[-1], Stack[-3])
0x336: Pop(1)
0x337: Push(Stack[-2])
0x338: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x339: PushEmpty(bool, object)
0x33a: Stack[-1] = Stack[-7]
0x33b: Call2 0x36d

0x33c: Pop(1)
0x33d: Pop(1); Push((bool) Stack[-1] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[-7]
0x341: Call2 0x392

0x342: Pop(1)
0x343: Pop(1); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-6] = (bool) 0
0x346: Return(); Pop(4)

0x347: Push((int) 2)
0x348: @ irand(Stack[-2], Stack[-1])
0x349: Pop(1)
0x34a: Push(Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x34c: Push("voice_common")
0x34d: Push((int) 1)
0x34e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x34f: Push((int) 3)
0x350: Pop(2); Push(Stack[-2] % Stack[-1]);
0x351: @ SetVariable(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: GOTO 0x358

0x354: Push("voice_common")
0x355: Push((int) 0)
0x356: @ SetVariable(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: GOTO 0x36b

0x359: PushEmpty(bool, object)
0x35a: Stack[-1] = Stack[-7]
0x35b: Call2 0x392

0x35c: Pop(1)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x35f: PushEmpty(bool, object)
0x360: Stack[-1] = Stack[-7]
0x361: Call2 0x36d

0x362: Pop(1)
0x363: Pop(1); Push((bool) Stack[-1] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Stack[-6] = (bool) 0
0x366: Return(); Pop(4)

0x367: Push("voice_common")
0x368: Push((int) 1)
0x369: @ SetVariable(Stack[-2], Stack[-1])
0x36a: Pop(2)
0x36b: Stack[-6] = (bool) 1
0x36c: Return(); Pop(4)

0x36d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x36e: Stack[-5] = "c"
0x36f: Stack[-4] = (int) 0
0x370: Push((int) 1)
0x371: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x372: Push((int) 1)
0x373: Pop(1); Push(Stack[-5] + Stack[-1]);
0x374: Pop(1); Push(Stack[-6] + Stack[-1]);
0x375: @@ HasProperty(Stack[-1], Stack[-4])
0x376: Pop(1)
0x377: Pop(0); Push((bool) Stack[-3] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: GOTO 0x37d

0x37a: Push((int) 1)
0x37b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x37c: GOTO 0x370

0x37d: Pop(0); Push((bool) Stack[-4] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-12] = (bool) 0
0x380: Return(); Pop(10)

0x381: Stack[-2] = (int) 0
0x382: Push((int) 1)
0x383: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: @ irand(Stack[-2], Stack[-4])
0x386: Pop(0)
0x387: Push((int) 1)
0x388: Pop(1); Push(Stack[-3] + Stack[-1]);
0x389: Pop(1); Push(Stack[-6] + Stack[-1]);
0x38a: @@ GetProperty(Stack[-1], Stack[-2])
0x38b: Pop(1)
0x38c: PushEmpty(bool, string)
0x38d: Stack[-1] = Stack[-3]
0x38e: Call2 0x3dc

0x38f: Stack[-14] = Stack[-2]
0x390: Pop(2)
0x391: Return(); Pop(10)

0x392: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x393: Push("d")
0x394: PushEmpty(int)
0x395: Call2 0x407

0x396: Pop(0)
0x397: Pop(2); Push(Stack[-2] + Stack[-1]);
0x398: Push("m")
0x399: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x39a: Stack[-4] = (int) 0
0x39b: Push((int) 1)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x39d: Push((int) 1)
0x39e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x39f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a0: @@ HasProperty(Stack[-1], Stack[-4])
0x3a1: Pop(1)
0x3a2: Pop(0); Push((bool) Stack[-3] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3a8

0x3a5: Push((int) 1)
0x3a6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a7: GOTO 0x39b

0x3a8: Pop(0); Push((bool) Stack[-4] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-12] = (bool) 0
0x3ab: Return(); Pop(10)

0x3ac: Stack[-2] = (int) 0
0x3ad: Push((int) 1)
0x3ae: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: @ irand(Stack[-2], Stack[-4])
0x3b1: Pop(0)
0x3b2: Push((int) 1)
0x3b3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3b4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b5: @@ GetProperty(Stack[-1], Stack[-2])
0x3b6: Pop(1)
0x3b7: PushEmpty(bool, string)
0x3b8: Stack[-1] = Stack[-3]
0x3b9: Call2 0x3dc

0x3ba: Stack[-14] = Stack[-2]
0x3bb: Pop(2)
0x3bc: Return(); Pop(10)

0x3bd: PushEmpty(bool, float, float, bool, float, float)
0x3be: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3bf: Pop(0)
0x3c0: Push(Stack[-3])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3c3: Pop(0)
0x3c4: Push((bool) 0)
0x3c5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(1)
0x3c7: GOTO 0x3cc

0x3c8: Push("Can't find lsh animation : ")
0x3c9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3ca: @ Trace(Stack[-1])
0x3cb: Pop(1)
0x3cc: Return(); Pop(6)

0x3cd: PushEmpty(bool, float, float, bool, float, float)
0x3ce: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3cf: Pop(0)
0x3d0: Push(Stack[-3])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3d3: Pop(0)
0x3d4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3d5: Pop(0)
0x3d6: GOTO 0x3db

0x3d7: Push("Can't find lsh animation : ")
0x3d8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3d9: @ Trace(Stack[-1])
0x3da: Pop(1)
0x3db: Return(); Pop(6)

0x3dc: PushEmpty(bool, bool)
0x3dd: PushEmpty(bool)
0x3de: Call2 0x503

0x3df: Pop(0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3e2: Pop(0)
0x3e3: Push(Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e5: @ lshPlaySpeech(Stack[-3])
0x3e6: Pop(0)
0x3e7: Stack[-4] = (bool) 1
0x3e8: Return(); Pop(2)

0x3e9: Stack[-4] = (bool) 0
0x3ea: Return(); Pop(2)

0x3eb: PushEmpty(bool)
0x3ec: Call2 0x503

0x3ed: Pop(0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: @ lshStopSpeech()
0x3f0: Pop(0)
0x3f1: Return(); Pop(0)

0x3f2: PushEmpty(object, object)
0x3f3: @ self(Stack[-1])
0x3f4: Pop(0)
0x3f5: Stack[-3] = Stack[-1]
0x3f6: Return(); Pop(2)

0x3f7: Stack[-1] = 0
0x3f8: PushEmpty(float, float)
0x3f9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3fa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3fb: Push((float)0.0)
0x3fc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fe: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3ff: Return(); Pop(2)

0x400: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x401: Return(); Pop(2)

0x402: PushEmpty(int, int)
0x403: @ GetVariable(Stack[-3], Stack[-1])
0x404: Pop(0)
0x405: Stack[-4] = Stack[-1]
0x406: Return(); Pop(2)

0x407: PushEmpty(float, float)
0x408: @ GetGameTime(Stack[-1])
0x409: Pop(0)
0x40a: Push((int) 1)
0x40b: PushEmpty(int)
0x40c: Push((int) 24)
0x40d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x40e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x40f: Return(); Pop(2)

0x410: PushEmpty()
0x411: Push("oob9Danko1")
0x412: Push((int) 1)
0x413: @ SetVariable(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: Return(); Pop(0)

0x416: PushEmpty()
0x417: Push("oob9Danko2")
0x418: Push((int) 1)
0x419: @ SetVariable(Stack[-2], Stack[-1])
0x41a: Pop(2)
0x41b: Return(); Pop(0)

0x41c: PushEmpty()
0x41d: Push("b9q01")
0x41e: Push((int) 3)
0x41f: @ SetVariable(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: PushEmpty()
0x422: Call2 0x482

0x423: Pop(0)
0x424: Return(); Pop(0)

0x425: PushEmpty()
0x426: Push("b9q01DankoAmmo")
0x427: Push((int) 1)
0x428: @ SetVariable(Stack[-2], Stack[-1])
0x429: Pop(2)
0x42a: Return(); Pop(0)

0x42b: PushEmpty()
0x42c: Push("oob9Danko4")
0x42d: Push((int) 1)
0x42e: @ SetVariable(Stack[-2], Stack[-1])
0x42f: Pop(2)
0x430: Return(); Pop(0)

0x431: PushEmpty()
0x432: PushEmpty(int, string)
0x433: Stack[-1] = "map_chertez_state"
0x434: Call2 0x402

0x435: Pop(1)
0x436: Push((int) 4)
0x437: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x439: Push("map_chertez_state")
0x43a: Push((int) 4)
0x43b: @ SetVariable(Stack[-2], Stack[-1])
0x43c: Pop(2)
0x43d: Push("map_chertez_force")
0x43e: Push((int) 1)
0x43f: @ SetVariable(Stack[-2], Stack[-1])
0x440: Pop(2)
0x441: Return(); Pop(0)

0x442: PushEmpty()
0x443: PushEmpty(object, string, float)
0x444: PushEmpty(object)
0x445: Call2 0x4b8

0x446: Stack[-4] = Stack[-1]
0x447: Pop(1)
0x448: Stack[-2] = "pt_map_aglaja"
0x449: Stack[-1] = (int) -1
0x44a: Call2 0x4c9

0x44b: Pop(3)
0x44c: PushEmpty(object)
0x44d: Call2 0x4b8

0x44e: Pop(0)
0x44f: @@ ShowMap(Stack[-1])
0x450: Pop(1)
0x451: Return(); Pop(0)

0x452: PushEmpty()
0x453: PushEmpty(int, string)
0x454: Stack[-1] = "b9q01DankoFree"
0x455: Call2 0x402

0x456: Pop(1)
0x457: Push((int) 0)
0x458: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Stack[-2] = (bool) 1
0x45b: Return(); Pop(0)

0x45c: Stack[-2] = (bool) 0
0x45d: Return(); Pop(0)

0x45e: PushEmpty()
0x45f: PushEmpty(int, string)
0x460: Stack[-1] = "oob9Danko1"
0x461: Call2 0x402

0x462: Pop(1)
0x463: Push((int) 0)
0x464: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-2] = (bool) 1
0x467: Return(); Pop(0)

0x468: Stack[-2] = (bool) 0
0x469: Return(); Pop(0)

0x46a: PushEmpty()
0x46b: PushEmpty(int, string)
0x46c: Stack[-1] = "oob9Danko2"
0x46d: Call2 0x402

0x46e: Pop(1)
0x46f: Push((int) 0)
0x470: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x471: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x472: Stack[-2] = (bool) 1
0x473: Return(); Pop(0)

0x474: Stack[-2] = (bool) 0
0x475: Return(); Pop(0)

0x476: PushEmpty()
0x477: PushEmpty(int, string)
0x478: Stack[-1] = "oob9Danko4"
0x479: Call2 0x402

0x47a: Pop(1)
0x47b: Push((int) 0)
0x47c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47e: Stack[-2] = (bool) 1
0x47f: Return(); Pop(0)

0x480: Stack[-2] = (bool) 0
0x481: Return(); Pop(0)

0x482: PushEmpty(object, object)
0x483: Push((int) 303)
0x484: Push((int) 1)
0x485: Push((int) 521618)
0x486: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x487: Pop(3)
0x488: PushEmpty(bool, object, int)
0x489: Stack[-2] = Stack[-4]
0x48a: Stack[-1] = (int) 297
0x48b: Call2 0x49c

0x48c: Pop(3)
0x48d: Return(); Pop(2)

0x48e: Stack[-1] = 0
0x48f: PushEmpty(object, object)
0x490: @ GetDiaryRoot(Stack[-1])
0x491: Pop(0)
0x492: Pop(0); Push((bool) Stack[-1] == 0)
0x493: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x494: Push("Can't retrieve diary root")
0x495: @ Trace(Stack[-1])
0x496: Pop(1)
0x497: Stack[-3] = (bool) 0
0x498: Return(); Pop(2)

0x499: Stack[-3] = Stack[-1]
0x49a: Return(); Pop(2)

0x49b: Stack[-1] = 0
0x49c: PushEmpty(object, object, int, object, object, int)
0x49d: PushEmpty(object)
0x49e: Call2 0x48f

0x49f: Stack[-4] = Stack[-1]
0x4a0: Pop(1)
0x4a1: @@ Find(Stack[-7], Stack[-2])
0x4a2: Pop(0)
0x4a3: Pop(0); Push((bool) Stack[-2] == 0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a5: Push("Can't find diary parent with id: ")
0x4a6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4a7: @ Trace(Stack[-1])
0x4a8: Pop(1)
0x4a9: Stack[-9] = (bool) 0
0x4aa: Return(); Pop(6)

0x4ab: @@ AddChild(Stack[-8])
0x4ac: Pop(0)
0x4ad: Push((int) 7)
0x4ae: @ SendWorldWndMessage(Stack[-1])
0x4af: Pop(1)
0x4b0: @@ GetCategory(Stack[-1])
0x4b1: Pop(0)
0x4b2: @ SetDiarySection(Stack[-1])
0x4b3: Pop(0)
0x4b4: Stack[-9] = (bool) 0
0x4b5: Return(); Pop(6)

0x4b6: Stack[-2] = 0
0x4b7: Stack[-3] = 0
0x4b8: PushEmpty(object, object, object, object)
0x4b9: @ GetMainOutdoorScene(Stack[-2])
0x4ba: Pop(0)
0x4bb: Pop(0); Push((bool) Stack[-2] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4bd: Push("Can't find main outdoor scene")
0x4be: @ Trace(Stack[-1])
0x4bf: Pop(1)
0x4c0: Stack[-1] = 0
0x4c1: Stack[-5] = Stack[-1]
0x4c2: Return(); Pop(4)

0x4c3: @@ GetMap(Stack[-1])
0x4c4: Pop(0)
0x4c5: Stack[-5] = Stack[-1]
0x4c6: Return(); Pop(4)

0x4c7: Stack[-1] = 0
0x4c8: Stack[-2] = 0
0x4c9: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x4ca: @ GetMainOutdoorScene(Stack[-2])
0x4cb: Pop(0)
0x4cc: Pop(0); Push((bool) Stack[-2] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4ce: Push("Can't find main outdoor scene")
0x4cf: @ Trace(Stack[-1])
0x4d0: Pop(1)
0x4d1: Return(); Pop(8)

0x4d2: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x4d3: Pop(0)
0x4d4: Pop(0); Push((bool) Stack[-1] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d6: Push("Warning: outdoor scene locator ")
0x4d7: Pop(1); Push(Stack[-1] + Stack[-11]);
0x4d8: Push(" doesnt exist")
0x4d9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4da: @ Trace(Stack[-1])
0x4db: Pop(1)
0x4dc: @@ GetMap(Stack[-11])
0x4dd: Pop(0)
0x4de: Pop(0); Push((bool) Stack[-11] == 0)
0x4df: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e0: Push("Can't find map")
0x4e1: @ Trace(Stack[-1])
0x4e2: Pop(1)
0x4e3: Return(); Pop(8)

0x4e4: Push(CvectorIndex(Stack[-4], 0))
0x4e5: Push(CvectorIndex(Stack[-5], 2))
0x4e6: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x4e7: Pop(2)
0x4e8: Return(); Pop(8)

0x4e9: Stack[-2] = 0
0x4ea: PushEmpty(int, int)
0x4eb: Push("branch")
0x4ec: @ GetVariable(Stack[-1], Stack[-2])
0x4ed: Pop(1)
0x4ee: Push((int) 0)
0x4ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f1: Stack[-3] = (int) 1
0x4f2: Return(); Pop(2)

0x4f3: GOTO 0x4f9

0x4f4: Push((int) 1)
0x4f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-3] = (int) 2
0x4f8: Return(); Pop(2)

0x4f9: Stack[-3] = (int) 3
0x4fa: Return(); Pop(2)

0x4fb: Stack[-1] = (int) 515573
0x4fc: Return(); Pop(0)

0x4fd: Stack[-1] = (int) 504032
0x4fe: Return(); Pop(0)

0x4ff: Stack[-1] = "ui/NPC_Bakalavr.png"
0x500: Return(); Pop(0)

0x501: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x502: Return(); Pop(0)

0x503: Stack[-1] = (bool) 1
0x504: Return(); Pop(0)

