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
	oob9Danko3
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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x2ca
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf1 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_6 Op = 0x2db Vars = ()
		EVENT_5 Op = 0x2de Vars = ()
		EVENT_0 Op = 0x2e1 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x309

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x53c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x53a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x53e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x540

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x529

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
0x31: Call2 0x41f

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x360

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
0x48: Call2 0x34e

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
0x56: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x485

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x491

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x43d

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Menace"
0x6c: Call2 0xdb

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
0x78: GOTO 0xbd

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x485

0x7c: Pop(1)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xdb

0x82: Pop(1)
0x83: Push((int) 521577)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x49d

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Push((int) 521578)
0x8e: Push((int) 22740)
0x8f: Push((int) 22739)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: PushEmpty(bool, object)
0x93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94: Call2 0x4b5

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
0xa1: GOTO 0xbd

0xa2: PushEmpty(string)
0xa3: Stack[-1] = "Neutral"
0xa4: Call2 0xdb

0xa5: Pop(1)
0xa6: Push((int) 521601)
0xa7: @@ SetMessage(Stack[-1])
0xa8: Pop(1)
0xa9: @@ ClearReplies()
0xaa: Pop(0)
0xab: PushEmpty(bool, object)
0xac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad: Call2 0x4a9

0xae: Pop(1)
0xaf: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb0: Push((int) 522385)
0xb1: Push((int) 23551)
0xb2: Push((int) 23550)
0xb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4: Pop(3)
0xb5: Push((int) 521602)
0xb6: Push((int) -1)
0xb7: Push((int) 22767)
0xb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(3)
0xba: GOTO 0xbd

0xbb: Return(); Pop(0)

0xbc: GOTO 0x55

0xbd: PushEmpty(bool)
0xbe: Call2 0x542

0xbf: Pop(0)
0xc0: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc1: @ lshWaitForAnimEnd()
0xc2: Pop(0)
0xc3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: GOTO 0xcb

0xc6: PushEmpty(string)
0xc7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc8: Call2 0x3ea

0xc9: Pop(1)
0xca: GOTO 0xc1

0xcb: GOTO 0xda

0xcc: Push("all")
0xcd: Push("idle")
0xce: @ PlayAnimation(Stack[-2], Stack[-1])
0xcf: Pop(2)
0xd0: @ WaitForAnimEnd()
0xd1: Pop(0)
0xd2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: GOTO 0xda

0xd5: Push("all")
0xd6: Push("idle")
0xd7: @ PlayAnimation(Stack[-2], Stack[-1])
0xd8: Pop(2)
0xd9: GOTO 0xd0

0xda: Return(); Pop(0)

0xdb: PushEmpty()
0xdc: PushEmpty(bool)
0xdd: Call2 0x542

0xde: Pop(0)
0xdf: Pop(1); Push((bool) Stack[-1] == 0)
0xe0: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe1: Return(); Pop(0)

0xe2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: Return(); Pop(0)

0xe5: PushEmpty(string, bool)
0xe6: Stack[-2] = Stack[-3]
0xe7: Push("")
0xe8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xea: Stack[-1] = (bool) 0
0xeb: GOTO 0xed

0xec: Stack[-1] = (bool) 1
0xed: Call2 0x3fa

0xee: Pop(2)
0xef: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf0: Return(); Pop(0)

0xf1: PushEmpty()
0xf2: Push((int) 1)
0xf3: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0xf4: PushEmpty()
0xf5: Call2 0x418

0xf6: Pop(0)
0xf7: Push((int) 22745)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x449

0xfe: Pop(2)
0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x464

0x103: Pop(2)
0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x475

0x108: Pop(2)
0x109: Push((int) 23541)
0x10a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x449

0x110: Pop(2)
0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x464

0x115: Pop(2)
0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call2 0x475

0x11a: Pop(2)
0x11b: Push((int) 22739)
0x11c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x11e: PushEmpty(object, object)
0x11f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x120: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121: Call2 0x443

0x122: Pop(2)
0x123: Push((int) 22741)
0x124: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x452

0x12a: Pop(2)
0x12b: Push((int) 23549)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x452

0x132: Pop(2)
0x133: Push((int) 23546)
0x134: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x45e

0x13a: Pop(2)
0x13b: Push((int) 23550)
0x13c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: PushEmpty(object, object)
0x13f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x140: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x141: Call2 0x458

0x142: Pop(2)
0x143: Push((int) 22742)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x146: PushEmpty(bool)
0x147: Stack[-1] = (bool) 0
0x148: PushEmpty(bool, object)
0x149: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Call2 0x485

0x14b: Pop(1)
0x14c: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14d: PushEmpty(bool, object)
0x14e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Call2 0x491

0x150: Pop(1)
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: Stack[-1] = (bool) 1
0x153: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x154: PushEmpty(object, object)
0x155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157: Call2 0x43d

0x158: Pop(2)
0x159: PushEmpty(string)
0x15a: Stack[-1] = "Menace"
0x15b: Call2 0xdb

0x15c: Pop(1)
0x15d: Push((int) 521581)
0x15e: @@ SetMessage(Stack[-1])
0x15f: Pop(1)
0x160: @@ ClearReplies()
0x161: Pop(0)
0x162: Push((int) 531554)
0x163: Push((int) 32918)
0x164: Push((int) 32917)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Return(); Pop(0)

0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0x485

0x16b: Pop(1)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call2 0xdb

0x171: Pop(1)
0x172: Push((int) 521577)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: PushEmpty(bool, object)
0x178: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x179: Call2 0x49d

0x17a: Pop(1)
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: Push((int) 521578)
0x17d: Push((int) 22740)
0x17e: Push((int) 22739)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x4b5

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: Push((int) 522381)
0x187: Push((int) 23547)
0x188: Push((int) 23546)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 521586)
0x18c: Push((int) -1)
0x18d: Push((int) 22747)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0xdb

0x194: Pop(1)
0x195: Push((int) 521601)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x4a9

0x19d: Pop(1)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19f: Push((int) 522385)
0x1a0: Push((int) 23551)
0x1a1: Push((int) 23550)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Push((int) 521602)
0x1a5: Push((int) -1)
0x1a6: Push((int) 22767)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 23551)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Sorrow"
0x1af: Call2 0xdb

0x1b0: Pop(1)
0x1b1: Push((int) 522386)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 522387)
0x1b7: Push((int) 23553)
0x1b8: Push((int) 23552)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 23553)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Sorrow"
0x1c1: Call2 0xdb

0x1c2: Pop(1)
0x1c3: Push((int) 522388)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 522389)
0x1c9: Push((int) -1)
0x1ca: Push((int) 23554)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 23547)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral"
0x1d3: Call2 0xdb

0x1d4: Pop(1)
0x1d5: Push((int) 522382)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: Push((int) 522383)
0x1db: Push((int) -1)
0x1dc: Push((int) 23548)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 22740)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Sorrow"
0x1e5: Call2 0xdb

0x1e6: Pop(1)
0x1e7: Push((int) 521579)
0x1e8: @@ SetMessage(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ ClearReplies()
0x1eb: Pop(0)
0x1ec: Push((int) 522377)
0x1ed: Push((int) 23543)
0x1ee: Push((int) 23542)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 23543)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Sorrow"
0x1f7: Call2 0xdb

0x1f8: Pop(1)
0x1f9: Push((int) 522378)
0x1fa: @@ SetMessage(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ ClearReplies()
0x1fd: Pop(0)
0x1fe: Push((int) 521580)
0x1ff: Push((int) -1)
0x200: Push((int) 22741)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Push((int) 522379)
0x204: Push((int) 23545)
0x205: Push((int) 23544)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Return(); Pop(0)

0x209: Push((int) 23545)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Sorrow"
0x20e: Call2 0xdb

0x20f: Pop(1)
0x210: Push((int) 522380)
0x211: @@ SetMessage(Stack[-1])
0x212: Pop(1)
0x213: @@ ClearReplies()
0x214: Pop(0)
0x215: Push((int) 522384)
0x216: Push((int) -1)
0x217: Push((int) 23549)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: Return(); Pop(0)

0x21b: Push((int) 32918)
0x21c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x21e: PushEmpty(string)
0x21f: Stack[-1] = "Neutral"
0x220: Call2 0xdb

0x221: Pop(1)
0x222: Push((int) 531555)
0x223: @@ SetMessage(Stack[-1])
0x224: Pop(1)
0x225: @@ ClearReplies()
0x226: Pop(0)
0x227: Push((int) 521582)
0x228: Push((int) 23526)
0x229: Push((int) 22743)
0x22a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 23526)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Untrust"
0x232: Call2 0xdb

0x233: Pop(1)
0x234: Push((int) 522363)
0x235: @@ SetMessage(Stack[-1])
0x236: Pop(1)
0x237: @@ ClearReplies()
0x238: Pop(0)
0x239: Push((int) 522364)
0x23a: Push((int) 23528)
0x23b: Push((int) 23527)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Push((int) 522369)
0x23f: Push((int) 23533)
0x240: Push((int) 23532)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: Return(); Pop(0)

0x244: Push((int) 23533)
0x245: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x247: PushEmpty(string)
0x248: Stack[-1] = "Neutral"
0x249: Call2 0xdb

0x24a: Pop(1)
0x24b: Push((int) 522370)
0x24c: @@ SetMessage(Stack[-1])
0x24d: Pop(1)
0x24e: @@ ClearReplies()
0x24f: Pop(0)
0x250: Push((int) 522371)
0x251: Push((int) 22744)
0x252: Push((int) 23534)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Push((int) 23528)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Untrust"
0x25b: Call2 0xdb

0x25c: Pop(1)
0x25d: Push((int) 522365)
0x25e: @@ SetMessage(Stack[-1])
0x25f: Pop(1)
0x260: @@ ClearReplies()
0x261: Pop(0)
0x262: Push((int) 522366)
0x263: Push((int) 23530)
0x264: Push((int) 23529)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Return(); Pop(0)

0x268: Push((int) 23530)
0x269: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x26b: PushEmpty(string)
0x26c: Stack[-1] = "Untrust"
0x26d: Call2 0xdb

0x26e: Pop(1)
0x26f: Push((int) 522367)
0x270: @@ SetMessage(Stack[-1])
0x271: Pop(1)
0x272: @@ ClearReplies()
0x273: Pop(0)
0x274: Push((int) 522368)
0x275: Push((int) 22744)
0x276: Push((int) 23531)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Return(); Pop(0)

0x27a: Push((int) 22744)
0x27b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Untrust"
0x27f: Call2 0xdb

0x280: Pop(1)
0x281: Push((int) 521583)
0x282: @@ SetMessage(Stack[-1])
0x283: Pop(1)
0x284: @@ ClearReplies()
0x285: Pop(0)
0x286: Push((int) 522372)
0x287: Push((int) 23538)
0x288: Push((int) 23537)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Push((int) 23538)
0x28d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x28f: PushEmpty(string)
0x290: Stack[-1] = "Untrust"
0x291: Call2 0xdb

0x292: Pop(1)
0x293: Push((int) 522373)
0x294: @@ SetMessage(Stack[-1])
0x295: Pop(1)
0x296: @@ ClearReplies()
0x297: Pop(0)
0x298: Push((int) 522374)
0x299: Push((int) 23540)
0x29a: Push((int) 23539)
0x29b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29c: Pop(3)
0x29d: Return(); Pop(0)

0x29e: Push((int) 23540)
0x29f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a1: PushEmpty(string)
0x2a2: Stack[-1] = "Neutral"
0x2a3: Call2 0xdb

0x2a4: Pop(1)
0x2a5: Push((int) 522375)
0x2a6: @@ SetMessage(Stack[-1])
0x2a7: Pop(1)
0x2a8: @@ ClearReplies()
0x2a9: Pop(0)
0x2aa: Push((int) 521584)
0x2ab: Push((int) -1)
0x2ac: Push((int) 22745)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Push((int) 522376)
0x2b0: Push((int) -1)
0x2b1: Push((int) 23541)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2b6: PushEmpty(bool)
0x2b7: Call2 0x542

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: @ lshStopAnimation()
0x2bb: Pop(0)
0x2bc: GOTO 0x2bf

0x2bd: @ StopAnimation()
0x2be: Pop(0)
0x2bf: Return(); Pop(0)

0x2c0: GOTO 0xf2

0x2c1: Return(); Pop(0)

0x2c2: PushEmpty()
0x2c3: PushEmpty(int, object)
0x2c4: Stack[-1] = Stack[-3]
0x2c5: Push(-2, 1); TaskCall(0)
0x2c6: Call2 0x0

0x2c7: Pop(-2, 1); TaskReturn
0x2c8: Pop(2)
0x2c9: Return(); Pop(0)

0x2ca: PushEmpty(bool)
0x2cb: Call2 0x304

0x2cc: Pop(0)
0x2cd: Pop(1); Push((bool) Stack[-1] == 0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: @ Hold()
0x2d0: Pop(0)
0x2d1: PushEmpty(string)
0x2d2: Stack[-1] = "Neutral"
0x2d3: Call2 0x3ea

0x2d4: Pop(1)
0x2d5: @ lshWaitForAnimEnd()
0x2d6: Pop(0)
0x2d7: GOTO 0x2d1

0x2d8: @ Hold()
0x2d9: Pop(0)
0x2da: Return(); Pop(0)

0x2db: @ Hold()
0x2dc: Pop(0)
0x2dd: Return(); Pop(0)

0x2de: @ StopGroup0()
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty(bool, bool)
0x2e2: @ IsOverrideActive(Stack[-1])
0x2e3: Pop(0)
0x2e4: Pop(0); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2e6: EventDisable(0)
0x2e7: PushEmpty(bool, object)
0x2e8: Stack[-1] = Stack[-5]
0x2e9: Call2 0x2fb

0x2ea: Pop(2)
0x2eb: EventEnable(0)
0x2ec: PushEmpty(object)
0x2ed: Stack[-1] = Stack[-4]
0x2ee: Call2 0x2c2

0x2ef: Pop(1)
0x2f0: Return(); Pop(2)

0x2f1: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2f2: @ GetPosition(Stack[-3])
0x2f3: Pop(0)
0x2f4: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2f5: Push(CvectorIndex(Stack[-2], 0))
0x2f6: Push(CvectorIndex(Stack[-3], 2))
0x2f7: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2f8: Pop(2)
0x2f9: Stack[-8] = Stack[-1]
0x2fa: Return(); Pop(6)

0x2fb: PushEmpty(cvector, cvector)
0x2fc: @@ GetPosition(Stack[-1])
0x2fd: Pop(0)
0x2fe: PushEmpty(bool, cvector)
0x2ff: Stack[-1] = Stack[-3]
0x300: Call2 0x2f1

0x301: Stack[-6] = Stack[-2]
0x302: Pop(2)
0x303: Return(); Pop(2)

0x304: PushEmpty(bool, bool)
0x305: @ IsLoaded(Stack[-1])
0x306: Pop(0)
0x307: Stack[-3] = Stack[-1]
0x308: Return(); Pop(2)

0x309: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x30a: @@ GetPosition(Stack[-8])
0x30b: Pop(0)
0x30c: @@ GetEyesHeight(Stack[-9])
0x30d: Pop(0)
0x30e: Push(CvectorIndex(Stack[-8], 1))
0x30f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x310: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x311: @ GetPosition(Stack[-7])
0x312: Pop(0)
0x313: @ GetEyesHeight(Stack[-9])
0x314: Pop(0)
0x315: Push(CvectorIndex(Stack[-7], 1))
0x316: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x317: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x318: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x319: Push(CvectorIndex(Stack[-6], 1))
0x31a: Stack[-1] = (int) 0
0x31b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x31c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x31d: Pop(1); Push(Sqrt(Stack[-1]))
0x31e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x31f: Stack[-5] = -Stack[-6]; Pop(0);
0x320: Pop(0); Push(Stack[-6] * Stack[-19]);
0x321: PushEmpty(cvector, cvector)
0x322: Push(CVector(0.0, 1.0, 0.0))
0x323: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x324: Call2 0x425

0x325: Pop(1)
0x326: Push((int) 25)
0x327: Pop(2); Push(Stack[-2] * Stack[-1]);
0x328: Pop(2); Push(Stack[-2] + Stack[-1]);
0x329: Push(CVector(0.0, 10.0, 0.0))
0x32a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x32b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x32c: @ IsOverrideActive(Stack[-2])
0x32d: Pop(0)
0x32e: Push(Stack[-2])
0x32f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x330: Stack[-21] = (bool) 0
0x331: Return(); Pop(18)

0x332: @ StopWorld()
0x333: Pop(0)
0x334: Push((bool) 1)
0x335: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x336: Pop(1)
0x337: Push(CvectorIndex(Stack[-4], 0))
0x338: Push(CvectorIndex(Stack[-5], 2))
0x339: @ Rotate(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: PushEmpty(bool)
0x33c: Call2 0x542

0x33d: Pop(0)
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: GOTO 0x348

0x340: Push("head")
0x341: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x342: Pop(1)
0x343: Push(Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x345: Push("head")
0x346: @ LookAsyncCamera(Stack[-1])
0x347: Pop(1)
0x348: @ CameraWaitForPlayFinish()
0x349: Pop(0)
0x34a: @ ResumeWorld()
0x34b: Pop(0)
0x34c: Stack[-21] = (bool) 1
0x34d: Return(); Pop(18)

0x34e: PushEmpty(bool, bool)
0x34f: Push((bool) 1)
0x350: @ CameraSwitchToNormal(Stack[-1])
0x351: Pop(1)
0x352: PushEmpty(bool)
0x353: Call2 0x542

0x354: Pop(0)
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: GOTO 0x35f

0x357: Push("head")
0x358: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x359: Pop(1)
0x35a: Push(Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35c: Push("head")
0x35d: @ UnlookAsync(Stack[-1])
0x35e: Pop(1)
0x35f: Return(); Pop(2)

0x360: PushEmpty(int, int, int, int)
0x361: Push("voice_common")
0x362: @ GetVariable(Stack[-1], Stack[-3])
0x363: Pop(1)
0x364: Push(Stack[-2])
0x365: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[-7]
0x368: Call2 0x39a

0x369: Pop(1)
0x36a: Pop(1); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36c: PushEmpty(bool, object)
0x36d: Stack[-1] = Stack[-7]
0x36e: Call2 0x3bf

0x36f: Pop(1)
0x370: Pop(1); Push((bool) Stack[-1] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: Stack[-6] = (bool) 0
0x373: Return(); Pop(4)

0x374: Push((int) 2)
0x375: @ irand(Stack[-2], Stack[-1])
0x376: Pop(1)
0x377: Push(Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x379: Push("voice_common")
0x37a: Push((int) 1)
0x37b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x37c: Push((int) 3)
0x37d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x37e: @ SetVariable(Stack[-2], Stack[-1])
0x37f: Pop(2)
0x380: GOTO 0x385

0x381: Push("voice_common")
0x382: Push((int) 0)
0x383: @ SetVariable(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: GOTO 0x398

0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[-7]
0x388: Call2 0x3bf

0x389: Pop(1)
0x38a: Pop(1); Push((bool) Stack[-1] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x38c: PushEmpty(bool, object)
0x38d: Stack[-1] = Stack[-7]
0x38e: Call2 0x39a

0x38f: Pop(1)
0x390: Pop(1); Push((bool) Stack[-1] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-6] = (bool) 0
0x393: Return(); Pop(4)

0x394: Push("voice_common")
0x395: Push((int) 1)
0x396: @ SetVariable(Stack[-2], Stack[-1])
0x397: Pop(2)
0x398: Stack[-6] = (bool) 1
0x399: Return(); Pop(4)

0x39a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x39b: Stack[-5] = "c"
0x39c: Stack[-4] = (int) 0
0x39d: Push((int) 1)
0x39e: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x39f: Push((int) 1)
0x3a0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3a1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a2: @@ HasProperty(Stack[-1], Stack[-4])
0x3a3: Pop(1)
0x3a4: Pop(0); Push((bool) Stack[-3] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: GOTO 0x3aa

0x3a7: Push((int) 1)
0x3a8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a9: GOTO 0x39d

0x3aa: Pop(0); Push((bool) Stack[-4] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ac: Stack[-12] = (bool) 0
0x3ad: Return(); Pop(10)

0x3ae: Stack[-2] = (int) 0
0x3af: Push((int) 1)
0x3b0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: @ irand(Stack[-2], Stack[-4])
0x3b3: Pop(0)
0x3b4: Push((int) 1)
0x3b5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3b6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b7: @@ GetProperty(Stack[-1], Stack[-2])
0x3b8: Pop(1)
0x3b9: PushEmpty(bool, string)
0x3ba: Stack[-1] = Stack[-3]
0x3bb: Call2 0x409

0x3bc: Stack[-14] = Stack[-2]
0x3bd: Pop(2)
0x3be: Return(); Pop(10)

0x3bf: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3c0: Push("d")
0x3c1: PushEmpty(int)
0x3c2: Call2 0x434

0x3c3: Pop(0)
0x3c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c5: Push("m")
0x3c6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3c7: Stack[-4] = (int) 0
0x3c8: Push((int) 1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3ca: Push((int) 1)
0x3cb: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3cc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3cd: @@ HasProperty(Stack[-1], Stack[-4])
0x3ce: Pop(1)
0x3cf: Pop(0); Push((bool) Stack[-3] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: GOTO 0x3d5

0x3d2: Push((int) 1)
0x3d3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3d4: GOTO 0x3c8

0x3d5: Pop(0); Push((bool) Stack[-4] == 0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d7: Stack[-12] = (bool) 0
0x3d8: Return(); Pop(10)

0x3d9: Stack[-2] = (int) 0
0x3da: Push((int) 1)
0x3db: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: @ irand(Stack[-2], Stack[-4])
0x3de: Pop(0)
0x3df: Push((int) 1)
0x3e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e2: @@ GetProperty(Stack[-1], Stack[-2])
0x3e3: Pop(1)
0x3e4: PushEmpty(bool, string)
0x3e5: Stack[-1] = Stack[-3]
0x3e6: Call2 0x409

0x3e7: Stack[-14] = Stack[-2]
0x3e8: Pop(2)
0x3e9: Return(); Pop(10)

0x3ea: PushEmpty(bool, float, float, bool, float, float)
0x3eb: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3ec: Pop(0)
0x3ed: Push(Stack[-3])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3ef: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3f0: Pop(0)
0x3f1: Push((bool) 0)
0x3f2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3f3: Pop(1)
0x3f4: GOTO 0x3f9

0x3f5: Push("Can't find lsh animation : ")
0x3f6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3f7: @ Trace(Stack[-1])
0x3f8: Pop(1)
0x3f9: Return(); Pop(6)

0x3fa: PushEmpty(bool, float, float, bool, float, float)
0x3fb: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3fc: Pop(0)
0x3fd: Push(Stack[-3])
0x3fe: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3ff: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x400: Pop(0)
0x401: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x402: Pop(0)
0x403: GOTO 0x408

0x404: Push("Can't find lsh animation : ")
0x405: Pop(1); Push(Stack[-1] + Stack[-9]);
0x406: @ Trace(Stack[-1])
0x407: Pop(1)
0x408: Return(); Pop(6)

0x409: PushEmpty(bool, bool)
0x40a: PushEmpty(bool)
0x40b: Call2 0x542

0x40c: Pop(0)
0x40d: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x40e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x40f: Pop(0)
0x410: Push(Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x412: @ lshPlaySpeech(Stack[-3])
0x413: Pop(0)
0x414: Stack[-4] = (bool) 1
0x415: Return(); Pop(2)

0x416: Stack[-4] = (bool) 0
0x417: Return(); Pop(2)

0x418: PushEmpty(bool)
0x419: Call2 0x542

0x41a: Pop(0)
0x41b: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41c: @ lshStopSpeech()
0x41d: Pop(0)
0x41e: Return(); Pop(0)

0x41f: PushEmpty(object, object)
0x420: @ self(Stack[-1])
0x421: Pop(0)
0x422: Stack[-3] = Stack[-1]
0x423: Return(); Pop(2)

0x424: Stack[-1] = 0
0x425: PushEmpty(float, float)
0x426: Pop(0); Push(Stack[-3] | Stack[-3]);
0x427: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x428: Push((float)0.0)
0x429: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x42c: Return(); Pop(2)

0x42d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x42e: Return(); Pop(2)

0x42f: PushEmpty(int, int)
0x430: @ GetVariable(Stack[-3], Stack[-1])
0x431: Pop(0)
0x432: Stack[-4] = Stack[-1]
0x433: Return(); Pop(2)

0x434: PushEmpty(float, float)
0x435: @ GetGameTime(Stack[-1])
0x436: Pop(0)
0x437: Push((int) 1)
0x438: PushEmpty(int)
0x439: Push((int) 24)
0x43a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x43b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x43c: Return(); Pop(2)

0x43d: PushEmpty()
0x43e: Push("oob9Danko1")
0x43f: Push((int) 1)
0x440: @ SetVariable(Stack[-2], Stack[-1])
0x441: Pop(2)
0x442: Return(); Pop(0)

0x443: PushEmpty()
0x444: Push("oob9Danko2")
0x445: Push((int) 1)
0x446: @ SetVariable(Stack[-2], Stack[-1])
0x447: Pop(2)
0x448: Return(); Pop(0)

0x449: PushEmpty()
0x44a: Push("b9q01")
0x44b: Push((int) 3)
0x44c: @ SetVariable(Stack[-2], Stack[-1])
0x44d: Pop(2)
0x44e: PushEmpty()
0x44f: Call2 0x4c1

0x450: Pop(0)
0x451: Return(); Pop(0)

0x452: PushEmpty()
0x453: Push("b9q01DankoAmmo")
0x454: Push((int) 1)
0x455: @ SetVariable(Stack[-2], Stack[-1])
0x456: Pop(2)
0x457: Return(); Pop(0)

0x458: PushEmpty()
0x459: Push("oob9Danko3")
0x45a: Push((int) 1)
0x45b: @ SetVariable(Stack[-2], Stack[-1])
0x45c: Pop(2)
0x45d: Return(); Pop(0)

0x45e: PushEmpty()
0x45f: Push("oob9Danko4")
0x460: Push((int) 1)
0x461: @ SetVariable(Stack[-2], Stack[-1])
0x462: Pop(2)
0x463: Return(); Pop(0)

0x464: PushEmpty()
0x465: PushEmpty(int, string)
0x466: Stack[-1] = "map_chertez_state"
0x467: Call2 0x42f

0x468: Pop(1)
0x469: Push((int) 4)
0x46a: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x46c: Push("map_chertez_state")
0x46d: Push((int) 4)
0x46e: @ SetVariable(Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: Push("map_chertez_force")
0x471: Push((int) 1)
0x472: @ SetVariable(Stack[-2], Stack[-1])
0x473: Pop(2)
0x474: Return(); Pop(0)

0x475: PushEmpty()
0x476: PushEmpty(object, string, float)
0x477: PushEmpty(object)
0x478: Call2 0x4f7

0x479: Stack[-4] = Stack[-1]
0x47a: Pop(1)
0x47b: Stack[-2] = "pt_map_aglaja"
0x47c: Stack[-1] = (int) -1
0x47d: Call2 0x508

0x47e: Pop(3)
0x47f: PushEmpty(object)
0x480: Call2 0x4f7

0x481: Pop(0)
0x482: @@ ShowMap(Stack[-1])
0x483: Pop(1)
0x484: Return(); Pop(0)

0x485: PushEmpty()
0x486: PushEmpty(int, string)
0x487: Stack[-1] = "b9q01DankoFree"
0x488: Call2 0x42f

0x489: Pop(1)
0x48a: Push((int) 0)
0x48b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: Stack[-2] = (bool) 1
0x48e: Return(); Pop(0)

0x48f: Stack[-2] = (bool) 0
0x490: Return(); Pop(0)

0x491: PushEmpty()
0x492: PushEmpty(int, string)
0x493: Stack[-1] = "oob9Danko1"
0x494: Call2 0x42f

0x495: Pop(1)
0x496: Push((int) 0)
0x497: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x499: Stack[-2] = (bool) 1
0x49a: Return(); Pop(0)

0x49b: Stack[-2] = (bool) 0
0x49c: Return(); Pop(0)

0x49d: PushEmpty()
0x49e: PushEmpty(int, string)
0x49f: Stack[-1] = "oob9Danko2"
0x4a0: Call2 0x42f

0x4a1: Pop(1)
0x4a2: Push((int) 0)
0x4a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-2] = (bool) 1
0x4a6: Return(); Pop(0)

0x4a7: Stack[-2] = (bool) 0
0x4a8: Return(); Pop(0)

0x4a9: PushEmpty()
0x4aa: PushEmpty(int, string)
0x4ab: Stack[-1] = "oob9Danko3"
0x4ac: Call2 0x42f

0x4ad: Pop(1)
0x4ae: Push((int) 0)
0x4af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b1: Stack[-2] = (bool) 1
0x4b2: Return(); Pop(0)

0x4b3: Stack[-2] = (bool) 0
0x4b4: Return(); Pop(0)

0x4b5: PushEmpty()
0x4b6: PushEmpty(int, string)
0x4b7: Stack[-1] = "oob9Danko4"
0x4b8: Call2 0x42f

0x4b9: Pop(1)
0x4ba: Push((int) 0)
0x4bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bd: Stack[-2] = (bool) 1
0x4be: Return(); Pop(0)

0x4bf: Stack[-2] = (bool) 0
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty(object, object)
0x4c2: Push((int) 303)
0x4c3: Push((int) 1)
0x4c4: Push((int) 521618)
0x4c5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4c6: Pop(3)
0x4c7: PushEmpty(bool, object, int)
0x4c8: Stack[-2] = Stack[-4]
0x4c9: Stack[-1] = (int) 297
0x4ca: Call2 0x4db

0x4cb: Pop(3)
0x4cc: Return(); Pop(2)

0x4cd: Stack[-1] = 0
0x4ce: PushEmpty(object, object)
0x4cf: @ GetDiaryRoot(Stack[-1])
0x4d0: Pop(0)
0x4d1: Pop(0); Push((bool) Stack[-1] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d3: Push("Can't retrieve diary root")
0x4d4: @ Trace(Stack[-1])
0x4d5: Pop(1)
0x4d6: Stack[-3] = (bool) 0
0x4d7: Return(); Pop(2)

0x4d8: Stack[-3] = Stack[-1]
0x4d9: Return(); Pop(2)

0x4da: Stack[-1] = 0
0x4db: PushEmpty(object, object, int, object, object, int)
0x4dc: PushEmpty(object)
0x4dd: Call2 0x4ce

0x4de: Stack[-4] = Stack[-1]
0x4df: Pop(1)
0x4e0: @@ Find(Stack[-7], Stack[-2])
0x4e1: Pop(0)
0x4e2: Pop(0); Push((bool) Stack[-2] == 0)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e4: Push("Can't find diary parent with id: ")
0x4e5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4e6: @ Trace(Stack[-1])
0x4e7: Pop(1)
0x4e8: Stack[-9] = (bool) 0
0x4e9: Return(); Pop(6)

0x4ea: @@ AddChild(Stack[-8])
0x4eb: Pop(0)
0x4ec: Push((int) 7)
0x4ed: @ SendWorldWndMessage(Stack[-1])
0x4ee: Pop(1)
0x4ef: @@ GetCategory(Stack[-1])
0x4f0: Pop(0)
0x4f1: @ SetDiarySection(Stack[-1])
0x4f2: Pop(0)
0x4f3: Stack[-9] = (bool) 0
0x4f4: Return(); Pop(6)

0x4f5: Stack[-2] = 0
0x4f6: Stack[-3] = 0
0x4f7: PushEmpty(object, object, object, object)
0x4f8: @ GetMainOutdoorScene(Stack[-2])
0x4f9: Pop(0)
0x4fa: Pop(0); Push((bool) Stack[-2] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fc: Push("Can't find main outdoor scene")
0x4fd: @ Trace(Stack[-1])
0x4fe: Pop(1)
0x4ff: Stack[-1] = 0
0x500: Stack[-5] = Stack[-1]
0x501: Return(); Pop(4)

0x502: @@ GetMap(Stack[-1])
0x503: Pop(0)
0x504: Stack[-5] = Stack[-1]
0x505: Return(); Pop(4)

0x506: Stack[-1] = 0
0x507: Stack[-2] = 0
0x508: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x509: @ GetMainOutdoorScene(Stack[-2])
0x50a: Pop(0)
0x50b: Pop(0); Push((bool) Stack[-2] == 0)
0x50c: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50d: Push("Can't find main outdoor scene")
0x50e: @ Trace(Stack[-1])
0x50f: Pop(1)
0x510: Return(); Pop(8)

0x511: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x512: Pop(0)
0x513: Pop(0); Push((bool) Stack[-1] == 0)
0x514: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x515: Push("Warning: outdoor scene locator ")
0x516: Pop(1); Push(Stack[-1] + Stack[-11]);
0x517: Push(" doesnt exist")
0x518: Pop(2); Push(Stack[-2] + Stack[-1]);
0x519: @ Trace(Stack[-1])
0x51a: Pop(1)
0x51b: @@ GetMap(Stack[-11])
0x51c: Pop(0)
0x51d: Pop(0); Push((bool) Stack[-11] == 0)
0x51e: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x51f: Push("Can't find map")
0x520: @ Trace(Stack[-1])
0x521: Pop(1)
0x522: Return(); Pop(8)

0x523: Push(CvectorIndex(Stack[-4], 0))
0x524: Push(CvectorIndex(Stack[-5], 2))
0x525: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x526: Pop(2)
0x527: Return(); Pop(8)

0x528: Stack[-2] = 0
0x529: PushEmpty(int, int)
0x52a: Push("branch")
0x52b: @ GetVariable(Stack[-1], Stack[-2])
0x52c: Pop(1)
0x52d: Push((int) 0)
0x52e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x530: Stack[-3] = (int) 1
0x531: Return(); Pop(2)

0x532: GOTO 0x538

0x533: Push((int) 1)
0x534: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x536: Stack[-3] = (int) 2
0x537: Return(); Pop(2)

0x538: Stack[-3] = (int) 3
0x539: Return(); Pop(2)

0x53a: Stack[-1] = (int) 515573
0x53b: Return(); Pop(0)

0x53c: Stack[-1] = (int) 504032
0x53d: Return(); Pop(0)

0x53e: Stack[-1] = "ui/NPC_Bakalavr.png"
0x53f: Return(); Pop(0)

0x540: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x541: Return(); Pop(0)

0x542: Stack[-1] = (bool) 1
0x543: Return(); Pop(0)

