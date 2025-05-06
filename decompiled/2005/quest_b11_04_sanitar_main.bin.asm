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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	b11q04
	b11q04SanitarGotoOfficer
	pt_gmap_vagon_army
	AddMark
	quest_b11_04
	place_officer
	ShowMap
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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x143
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x149 Vars = (object)
		EVENT_26 Op = 0x17a Vars = (string)
		EVENT_6 Op = 0x182 Vars = ()
		EVENT_7 Op = 0x1c3 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x24b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x311

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x30f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x313

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x315

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3b9

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x28f

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x345

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 530504)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 530505)
0x5f: Push((int) 31865)
0x60: Push((int) 31864)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 531423)
0x64: Push((int) -1)
0x65: Push((int) 32766)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 530512)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 530513)
0x73: Push((int) -1)
0x74: Push((int) 31872)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 531422)
0x78: Push((int) -1)
0x79: Push((int) 32765)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x317

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x2a0

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x317

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x2b0

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x2ca

0xb8: Pop(0)
0xb9: Push((int) 31870)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x319

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x335

0xc5: Pop(2)
0xc6: Push((int) 31863)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x345

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x9d

0xd1: Pop(1)
0xd2: Push((int) 530504)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 530505)
0xd8: Push((int) 31865)
0xd9: Push((int) 31864)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 531423)
0xdd: Push((int) -1)
0xde: Push((int) 32766)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x9d

0xe5: Pop(1)
0xe6: Push((int) 530512)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 530513)
0xec: Push((int) -1)
0xed: Push((int) 31872)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 531422)
0xf1: Push((int) -1)
0xf2: Push((int) 32765)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 31865)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call2 0x9d

0xfc: Pop(1)
0xfd: Push((int) 530506)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 530507)
0x103: Push((int) 31867)
0x104: Push((int) 31866)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Push((int) 531424)
0x108: Push((int) 31869)
0x109: Push((int) 32767)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 31867)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral"
0x112: Call2 0x9d

0x113: Pop(1)
0x114: Push((int) 530508)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 530509)
0x11a: Push((int) 31869)
0x11b: Push((int) 31868)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Push((int) 531425)
0x11f: Push((int) -1)
0x120: Push((int) 32769)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 31869)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call2 0x9d

0x12a: Pop(1)
0x12b: Push((int) 530510)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 530511)
0x131: Push((int) -1)
0x132: Push((int) 31870)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x137: PushEmpty(bool)
0x138: Call2 0x317

0x139: Pop(0)
0x13a: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13b: @ lshStopAnimation()
0x13c: Pop(0)
0x13d: GOTO 0x140

0x13e: @ StopAnimation()
0x13f: Pop(0)
0x140: Return(); Pop(0)

0x141: GOTO 0xb4

0x142: Return(); Pop(0)

0x143: PushEmpty(float, float)
0x144: Stack[-2] = (int) 300
0x145: Stack[-1] = (int) 100
0x146: Call2 0x154

0x147: Pop(2)
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: PushEmpty()
0x14b: Call2 0x1da

0x14c: Pop(0)
0x14d: PushEmpty(int, object)
0x14e: Stack[-1] = Stack[-3]
0x14f: Push(-2, 1); TaskCall(0)
0x150: Call2 0x0

0x151: Pop(-2, 1); TaskReturn
0x152: Pop(2)
0x153: Return(); Pop(0)

0x154: PushEmpty(float, bool, float, bool)
0x155: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x156: Push((int) 3)
0x157: @ rand(Stack[-3], Stack[-1])
0x158: Pop(1)
0x159: Push((int) 3)
0x15a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x15b: @ Sleep(Stack[-1], Stack[-2])
0x15c: Pop(1)
0x15d: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x15e: PushEmpty(float, float)
0x15f: Stack[-2] = Stack[-8]
0x160: Stack[-1] = Stack[-7]
0x161: Call2 0x199

0x162: Pop(2)
0x163: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x164: GOTO 0x156

0x165: Return(); Pop(4)

0x166: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x167: PushEmpty(bool)
0x168: Stack[-1] = (bool) 0
0x169: PushEmpty(bool)
0x16a: Call2 0x246

0x16b: Pop(0)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: PushEmpty(bool)
0x16f: Call2 0x197

0x170: Pop(0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Stack[-1] = (bool) 1
0x173: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x174: PushEmpty(object)
0x175: Call2 0x2d1

0x176: Pop(0)
0x177: @ RemoveActor(Stack[-1])
0x178: Pop(1)
0x179: Return(); Pop(0)

0x17a: PushEmpty()
0x17b: Push("cleanup")
0x17c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17e: PushEmpty()
0x17f: Call2 0x166

0x180: Pop(0)
0x181: Return(); Pop(0)

0x182: Push( Stack[6 + Tasks[-1].StackPointer] )
0x183: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x184: PushEmpty()
0x185: Call2 0x1da

0x186: Pop(0)
0x187: PushEmpty(bool)
0x188: Stack[-1] = (bool) 0
0x189: Push( Stack[5 + Tasks[-1].StackPointer] )
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: PushEmpty(bool)
0x18c: Call2 0x197

0x18d: Pop(0)
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: Stack[-1] = (bool) 1
0x190: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x191: PushEmpty(object)
0x192: Call2 0x2d1

0x193: Pop(0)
0x194: @ RemoveActor(Stack[-1])
0x195: Pop(1)
0x196: Return(); Pop(0)

0x197: Stack[-1] = (bool) 1
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: PushEmpty(bool)
0x19b: Call2 0x246

0x19c: Pop(0)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Return(); Pop(0)

0x1a0: Push("player")
0x1a1: @ FindActor(Stack[-4], Stack[-1])
0x1a2: Pop(1)
0x1a3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1a5: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1a6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1a7: Push((int) 10)
0x1a8: Push((float)1.0)
0x1a9: @ SetTimer(Stack[-2], Stack[-1])
0x1aa: Pop(2)
0x1ab: PushEmpty()
0x1ac: Call2 0x1e8

0x1ad: Pop(0)
0x1ae: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b0: Push((int) 10)
0x1b1: @ KillTimer(Stack[-1])
0x1b2: Pop(1)
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(float, float)
0x1b5: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b7: Stack[-3] = (bool) 0
0x1b8: Return(); Pop(2)

0x1b9: PushEmpty(float, object)
0x1ba: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1bb: Call2 0x23e

0x1bc: Pop(1)
0x1bd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1be: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1c1: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1c2: Return(); Pop(2)

0x1c3: PushEmpty()
0x1c4: Push((int) 10)
0x1c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c7: PushEmpty(bool)
0x1c8: Call2 0x1b4

0x1c9: Pop(0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1cb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: PushEmpty(object)
0x1ce: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1cf: Call2 0x2bf

0x1d0: Pop(1)
0x1d1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1d2: GOTO 0x1d9

0x1d3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d5: Push("head")
0x1d6: @ UnlookAsync(Stack[-1])
0x1d7: Pop(1)
0x1d8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d9: Return(); Pop(0)

0x1da: PushEmpty()
0x1db: Call2 0x239

0x1dc: Pop(0)
0x1dd: Push((int) 10)
0x1de: @ KillTimer(Stack[-1])
0x1df: Pop(1)
0x1e0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e2: Push("head")
0x1e3: @ UnlookAsync(Stack[-1])
0x1e4: Pop(1)
0x1e5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e7: Return(); Pop(0)

0x1e8: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1e9: @ WaitForAnimEnd()
0x1ea: Pop(0)
0x1eb: PushEmpty(bool)
0x1ec: Call2 0x246

0x1ed: Pop(0)
0x1ee: Pop(1); Push((bool) Stack[-1] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: Return(); Pop(14)

0x1f1: PushEmpty(int)
0x1f2: Call2 0x2fe

0x1f3: Stack[-8] = Stack[-1]
0x1f4: Pop(1)
0x1f5: Stack[-6] = (int) 0
0x1f6: PushEmpty(bool)
0x1f7: Stack[-1] = (bool) 0
0x1f8: Push((int) 5)
0x1f9: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: PushEmpty(bool)
0x1fc: Call2 0x246

0x1fd: Pop(0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Stack[-1] = (bool) 1
0x200: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x201: Push((int) 3)
0x202: @ irand(Stack[-6], Stack[-1])
0x203: Pop(1)
0x204: Push((int) 0)
0x205: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x207: Push(Stack[-7])
0x208: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x209: @ irand(Stack[-4], Stack[-7])
0x20a: Pop(0)
0x20b: Push("all")
0x20c: PushEmpty(string, int)
0x20d: Stack[-1] = Stack[-7]
0x20e: Call2 0x2f7

0x20f: Pop(1)
0x210: @ PlayAnimation(Stack[-2], Stack[-1])
0x211: Pop(2)
0x212: @ WaitForAnimEnd(Stack[-3])
0x213: Pop(0)
0x214: Pop(0); Push((bool) Stack[-3] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: GOTO 0x234

0x217: GOTO 0x229

0x218: Push((int) 1)
0x219: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x21b: Push((int) 4)
0x21c: @ rand(Stack[-3], Stack[-1])
0x21d: Pop(1)
0x21e: Push((int) 1)
0x21f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x220: @ Sleep(Stack[-1], Stack[-2])
0x221: Pop(1)
0x222: Pop(0); Push((bool) Stack[-1] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: GOTO 0x234

0x225: GOTO 0x229

0x226: Push(Stack[-6])
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: GOTO 0x234

0x229: PushEmpty(bool)
0x22a: Call2 0x237

0x22b: Pop(0)
0x22c: Pop(1); Push((bool) Stack[-1] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: GOTO 0x234

0x22f: @ ResetAAS()
0x230: Pop(0)
0x231: Push((int) 1)
0x232: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x233: GOTO 0x1f6

0x234: @ ResetAAS()
0x235: Pop(0)
0x236: Return(); Pop(14)

0x237: Stack[-1] = (bool) 1
0x238: Return(); Pop(0)

0x239: @ StopAnimation()
0x23a: Pop(0)
0x23b: @ StopGroup0()
0x23c: Pop(0)
0x23d: Return(); Pop(0)

0x23e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x23f: @ GetPosition(Stack[-3])
0x240: Pop(0)
0x241: @@ GetPosition(Stack[-2])
0x242: Pop(0)
0x243: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x244: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x245: Return(); Pop(6)

0x246: PushEmpty(bool, bool)
0x247: @ IsLoaded(Stack[-1])
0x248: Pop(0)
0x249: Stack[-3] = Stack[-1]
0x24a: Return(); Pop(2)

0x24b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x24c: @@ GetPosition(Stack[-8])
0x24d: Pop(0)
0x24e: @@ GetEyesHeight(Stack[-9])
0x24f: Pop(0)
0x250: Push(CvectorIndex(Stack[-8], 1))
0x251: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x252: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x253: @ GetPosition(Stack[-7])
0x254: Pop(0)
0x255: @ GetEyesHeight(Stack[-9])
0x256: Pop(0)
0x257: Push(CvectorIndex(Stack[-7], 1))
0x258: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x259: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x25a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x25b: Push(CvectorIndex(Stack[-6], 1))
0x25c: Stack[-1] = (int) 0
0x25d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x25e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x25f: Pop(1); Push(Sqrt(Stack[-1]))
0x260: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x261: Stack[-5] = -Stack[-6]; Pop(0);
0x262: Pop(0); Push(Stack[-6] * Stack[-19]);
0x263: PushEmpty(cvector, cvector)
0x264: Push(CVector(0.0, 1.0, 0.0))
0x265: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x266: Call2 0x2d7

0x267: Pop(1)
0x268: Push((int) 25)
0x269: Pop(2); Push(Stack[-2] * Stack[-1]);
0x26a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26b: Push(CVector(0.0, 10.0, 0.0))
0x26c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x26d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x26e: @ IsOverrideActive(Stack[-2])
0x26f: Pop(0)
0x270: Push(Stack[-2])
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-21] = (bool) 0
0x273: Return(); Pop(18)

0x274: @ StopWorld()
0x275: Pop(0)
0x276: @ CameraTransit(Stack[-3], Stack[-5])
0x277: Pop(0)
0x278: Push(CvectorIndex(Stack[-4], 0))
0x279: Push(CvectorIndex(Stack[-5], 2))
0x27a: @ Rotate(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: PushEmpty(bool)
0x27d: Call2 0x317

0x27e: Pop(0)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x289

0x281: Push("head")
0x282: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x283: Pop(1)
0x284: Push(Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x286: Push("head")
0x287: @ LookAsyncCamera(Stack[-1])
0x288: Pop(1)
0x289: @ CameraWaitForPlayFinish()
0x28a: Pop(0)
0x28b: @ ResumeWorld()
0x28c: Pop(0)
0x28d: Stack[-21] = (bool) 1
0x28e: Return(); Pop(18)

0x28f: PushEmpty(bool, bool)
0x290: @ CameraSwitchToNormal()
0x291: Pop(0)
0x292: PushEmpty(bool)
0x293: Call2 0x317

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: GOTO 0x29f

0x297: Push("head")
0x298: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x299: Pop(1)
0x29a: Push(Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: Push("head")
0x29d: @ UnlookAsync(Stack[-1])
0x29e: Pop(1)
0x29f: Return(); Pop(2)

0x2a0: PushEmpty(bool, float, float, bool, float, float)
0x2a1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2a2: Pop(0)
0x2a3: Push(Stack[-3])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2a6: Pop(0)
0x2a7: Push((bool) 0)
0x2a8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(1)
0x2aa: GOTO 0x2af

0x2ab: Push("Can't find lsh animation : ")
0x2ac: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ad: @ Trace(Stack[-1])
0x2ae: Pop(1)
0x2af: Return(); Pop(6)

0x2b0: PushEmpty(bool, float, float, bool, float, float)
0x2b1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2b2: Pop(0)
0x2b3: Push(Stack[-3])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2b6: Pop(0)
0x2b7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2b8: Pop(0)
0x2b9: GOTO 0x2be

0x2ba: Push("Can't find lsh animation : ")
0x2bb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2bc: @ Trace(Stack[-1])
0x2bd: Pop(1)
0x2be: Return(); Pop(6)

0x2bf: PushEmpty(float, cvector, float, cvector)
0x2c0: @@ GetEyesHeight(Stack[-2])
0x2c1: Pop(0)
0x2c2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2c3: Push(CvectorIndex(Stack[-1], 1))
0x2c4: Stack[-1] = Stack[-3]
0x2c5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2c6: Push("head")
0x2c7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2c8: Pop(1)
0x2c9: Return(); Pop(4)

0x2ca: PushEmpty(bool)
0x2cb: Call2 0x317

0x2cc: Pop(0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: @ lshStopSpeech()
0x2cf: Pop(0)
0x2d0: Return(); Pop(0)

0x2d1: PushEmpty(object, object)
0x2d2: @ self(Stack[-1])
0x2d3: Pop(0)
0x2d4: Stack[-3] = Stack[-1]
0x2d5: Return(); Pop(2)

0x2d6: Stack[-1] = 0
0x2d7: PushEmpty(float, float)
0x2d8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2d9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2da: Push((float)0.0)
0x2db: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2de: Return(); Pop(2)

0x2df: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2e0: Return(); Pop(2)

0x2e1: PushEmpty(int, int)
0x2e2: @ GetVariable(Stack[-3], Stack[-1])
0x2e3: Pop(0)
0x2e4: Stack[-4] = Stack[-1]
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(object, object)
0x2e7: @ FindActor(Stack[-1], Stack[-4])
0x2e8: Pop(0)
0x2e9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2eb: Stack[-5] = (bool) 0
0x2ec: Return(); Pop(2)

0x2ed: @ Trigger(Stack[-1], Stack[-3])
0x2ee: Pop(0)
0x2ef: Stack[-5] = (bool) 1
0x2f0: Return(); Pop(2)

0x2f1: Stack[-1] = 0
0x2f2: PushEmpty(float, float)
0x2f3: @ GetGameTime(Stack[-1])
0x2f4: Pop(0)
0x2f5: Stack[-3] = Stack[-1]
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(string, string)
0x2f8: Stack[-1] = "idle"
0x2f9: Push(Stack[-3])
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fb: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2fc: Stack[-4] = Stack[-1]
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty(int, bool, int, bool)
0x2ff: Stack[-2] = (int) 0
0x300: Push("all")
0x301: PushEmpty(string, int)
0x302: Stack[-1] = Stack[-5]
0x303: Call2 0x2f7

0x304: Pop(1)
0x305: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(2)
0x307: Pop(0); Push((bool) Stack[-1] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: GOTO 0x30d

0x30a: Push((int) 1)
0x30b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x30c: GOTO 0x300

0x30d: Stack[-5] = Stack[-2]
0x30e: Return(); Pop(4)

0x30f: Stack[-1] = (int) 530494
0x310: Return(); Pop(0)

0x311: Stack[-1] = (int) 530493
0x312: Return(); Pop(0)

0x313: Stack[-1] = "ui/NPC_Citizen3.png"
0x314: Return(); Pop(0)

0x315: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x316: Return(); Pop(0)

0x317: Stack[-1] = (bool) 0
0x318: Return(); Pop(0)

0x319: PushEmpty(object, object)
0x31a: Push("b11q04")
0x31b: Push((int) 2)
0x31c: @ SetVariable(Stack[-2], Stack[-1])
0x31d: Pop(2)
0x31e: PushEmpty(object)
0x31f: Call2 0x387

0x320: Stack[-2] = Stack[-1]
0x321: Pop(1)
0x322: Push("b11q04SanitarGotoOfficer")
0x323: Push("pt_gmap_vagon_army")
0x324: Push((int) 0)
0x325: Push((int) 530531)
0x326: PushEmpty(float)
0x327: Call2 0x2f2

0x328: Pop(0)
0x329: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(5)
0x32b: PushEmpty()
0x32c: Call2 0x351

0x32d: Pop(0)
0x32e: PushEmpty(bool, string, string)
0x32f: Stack[-2] = "quest_b11_04"
0x330: Stack[-1] = "place_officer"
0x331: Call2 0x2e6

0x332: Pop(3)
0x333: Return(); Pop(2)

0x334: Stack[-1] = 0
0x335: PushEmpty()
0x336: PushEmpty(object, string, float)
0x337: PushEmpty(object)
0x338: Call2 0x387

0x339: Stack[-4] = Stack[-1]
0x33a: Pop(1)
0x33b: Stack[-2] = "pt_gmap_vagon_army"
0x33c: Stack[-1] = (int) 2
0x33d: Call2 0x398

0x33e: Pop(3)
0x33f: PushEmpty(object)
0x340: Call2 0x387

0x341: Pop(0)
0x342: @@ ShowMap(Stack[-1])
0x343: Pop(1)
0x344: Return(); Pop(0)

0x345: PushEmpty()
0x346: PushEmpty(int, string)
0x347: Stack[-1] = "b11q04"
0x348: Call2 0x2e1

0x349: Pop(1)
0x34a: Push((int) 1)
0x34b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-2] = (bool) 1
0x34e: Return(); Pop(0)

0x34f: Stack[-2] = (bool) 0
0x350: Return(); Pop(0)

0x351: PushEmpty(object, object)
0x352: Push((int) 553)
0x353: Push((int) 2)
0x354: Push((int) 530528)
0x355: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x356: Pop(3)
0x357: PushEmpty(bool, object, int)
0x358: Stack[-2] = Stack[-4]
0x359: Stack[-1] = (int) 551
0x35a: Call2 0x36b

0x35b: Pop(3)
0x35c: Return(); Pop(2)

0x35d: Stack[-1] = 0
0x35e: PushEmpty(object, object)
0x35f: @ GetDiaryRoot(Stack[-1])
0x360: Pop(0)
0x361: Pop(0); Push((bool) Stack[-1] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: Push("Can't retrieve diary root")
0x364: @ Trace(Stack[-1])
0x365: Pop(1)
0x366: Stack[-3] = (bool) 0
0x367: Return(); Pop(2)

0x368: Stack[-3] = Stack[-1]
0x369: Return(); Pop(2)

0x36a: Stack[-1] = 0
0x36b: PushEmpty(object, object, int, object, object, int)
0x36c: PushEmpty(object)
0x36d: Call2 0x35e

0x36e: Stack[-4] = Stack[-1]
0x36f: Pop(1)
0x370: @@ Find(Stack[-7], Stack[-2])
0x371: Pop(0)
0x372: Pop(0); Push((bool) Stack[-2] == 0)
0x373: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x374: Push("Can't find diary parent with id: ")
0x375: Pop(1); Push(Stack[-1] + Stack[-8]);
0x376: @ Trace(Stack[-1])
0x377: Pop(1)
0x378: Stack[-9] = (bool) 0
0x379: Return(); Pop(6)

0x37a: @@ AddChild(Stack[-8])
0x37b: Pop(0)
0x37c: Push((int) 7)
0x37d: @ SendWorldWndMessage(Stack[-1])
0x37e: Pop(1)
0x37f: @@ GetCategory(Stack[-1])
0x380: Pop(0)
0x381: @ SetDiarySection(Stack[-1])
0x382: Pop(0)
0x383: Stack[-9] = (bool) 0
0x384: Return(); Pop(6)

0x385: Stack[-2] = 0
0x386: Stack[-3] = 0
0x387: PushEmpty(object, object, object, object)
0x388: @ GetMainOutdoorScene(Stack[-2])
0x389: Pop(0)
0x38a: Pop(0); Push((bool) Stack[-2] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38c: Push("Can't find main outdoor scene")
0x38d: @ Trace(Stack[-1])
0x38e: Pop(1)
0x38f: Stack[-1] = 0
0x390: Stack[-5] = Stack[-1]
0x391: Return(); Pop(4)

0x392: @@ GetMap(Stack[-1])
0x393: Pop(0)
0x394: Stack[-5] = Stack[-1]
0x395: Return(); Pop(4)

0x396: Stack[-1] = 0
0x397: Stack[-2] = 0
0x398: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x399: @ GetMainOutdoorScene(Stack[-2])
0x39a: Pop(0)
0x39b: Pop(0); Push((bool) Stack[-2] == 0)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39d: Push("Can't find main outdoor scene")
0x39e: @ Trace(Stack[-1])
0x39f: Pop(1)
0x3a0: Return(); Pop(8)

0x3a1: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x3a2: Pop(0)
0x3a3: Pop(0); Push((bool) Stack[-1] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a5: Push("Warning: outdoor scene locator ")
0x3a6: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3a7: Push(" doesnt exist")
0x3a8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a9: @ Trace(Stack[-1])
0x3aa: Pop(1)
0x3ab: @@ GetMap(Stack[-11])
0x3ac: Pop(0)
0x3ad: Pop(0); Push((bool) Stack[-11] == 0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3af: Push("Can't find map")
0x3b0: @ Trace(Stack[-1])
0x3b1: Pop(1)
0x3b2: Return(); Pop(8)

0x3b3: Push(CvectorIndex(Stack[-4], 0))
0x3b4: Push(CvectorIndex(Stack[-5], 2))
0x3b5: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x3b6: Pop(2)
0x3b7: Return(); Pop(8)

0x3b8: Stack[-2] = 0
0x3b9: PushEmpty(int, int)
0x3ba: Push("branch")
0x3bb: @ GetVariable(Stack[-1], Stack[-2])
0x3bc: Pop(1)
0x3bd: Push((int) 0)
0x3be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c0: Stack[-3] = (int) 1
0x3c1: Return(); Pop(2)

0x3c2: GOTO 0x3c8

0x3c3: Push((int) 1)
0x3c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-3] = (int) 2
0x3c7: Return(); Pop(2)

0x3c8: Stack[-3] = (int) 3
0x3c9: Return(); Pop(2)

