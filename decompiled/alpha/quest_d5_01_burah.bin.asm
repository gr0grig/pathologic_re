GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
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
	restore
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	d5q01
	d5q01BurahMeeting1
	pt_d5q01_girl_corpse1
	AddMark
	d5q01BurahMeeting2
	pt_d5q01_girl_corpse2
	quest_d5_01
	burah_free
	ood5Burah1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry
	ui/NPC_Burah.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x1fe
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1f6 Vars = (object)
		EVENT_26 Op = 0x202 Vars = (string)
		EVENT_6 Op = 0x21e Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x230

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x34b

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x34d

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x32a

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x268

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x2d6

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0xab

0x4d: Pop(1)
0x4e: Push((int) 10543)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 10544)
0x54: Push((int) 11634)
0x55: Push((int) 11633)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: Push((int) 10560)
0x59: Push((int) 11650)
0x5a: Push((int) 11649)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: Push((int) 10566)
0x5e: Push((int) 11634)
0x5f: Push((int) 11655)
0x60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61: Pop(3)
0x62: GOTO 0x8d

0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65: Call 0x2d6

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x68: PushEmpty(string)
0x69: Stack[-1] = "Neutral"
0x6a: Call 0xab

0x6b: Pop(1)
0x6c: Push((int) 11865)
0x6d: @@ SetMessage(Stack[-1])
0x6e: Pop(1)
0x6f: @@ ClearReplies()
0x70: Pop(0)
0x71: Push((int) 11866)
0x72: Push((int) 13080)
0x73: Push((int) 13079)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: GOTO 0x8d

0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call 0x2e0

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x7c: PushEmpty(string)
0x7d: Stack[-1] = "Neutral"
0x7e: Call 0xab

0x7f: Pop(1)
0x80: Push((int) 12536)
0x81: @@ SetMessage(Stack[-1])
0x82: Pop(1)
0x83: @@ ClearReplies()
0x84: Pop(0)
0x85: Push((int) 12537)
0x86: Push((int) 13707)
0x87: Push((int) 13706)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: GOTO 0x8d

0x8b: Return(); Pop(0)

0x8c: GOTO 0x43

0x8d: PushEmpty(bool)
0x8e: Call 0x34f

0x8f: Pop(0)
0x90: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x91: @ lshWaitForAnimEnd()
0x92: Pop(0)
0x93: Push( Stack[3 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: GOTO 0x9b

0x96: PushEmpty(string)
0x97: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x98: Call 0x26c

0x99: Pop(1)
0x9a: GOTO 0x91

0x9b: GOTO 0xaa

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: @ WaitForAnimEnd()
0xa1: Pop(0)
0xa2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: GOTO 0xa0

0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool)
0xad: Call 0x34f

0xae: Pop(0)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(0)

0xb2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = Stack[-2]
0xb7: Call 0x26c

0xb8: Pop(1)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0xbe: PushEmpty()
0xbf: Call 0x27e

0xc0: Pop(0)
0xc1: Push((int) 13708)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call 0x2d0

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call 0x2ab

0xcd: Pop(2)
0xce: Push((int) 11632)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call 0x2d6

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call 0xab

0xd9: Pop(1)
0xda: Push((int) 10543)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 10544)
0xe0: Push((int) 11634)
0xe1: Push((int) 11633)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 10560)
0xe5: Push((int) 11650)
0xe6: Push((int) 11649)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 10566)
0xea: Push((int) 11634)
0xeb: Push((int) 11655)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call 0x2d6

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral"
0xf6: Call 0xab

0xf7: Pop(1)
0xf8: Push((int) 11865)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 11866)
0xfe: Push((int) 13080)
0xff: Push((int) 13079)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: PushEmpty(bool, object)
0x104: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x105: Call 0x2e0

0x106: Pop(1)
0x107: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call 0xab

0x10b: Pop(1)
0x10c: Push((int) 12536)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 12537)
0x112: Push((int) 13707)
0x113: Push((int) 13706)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Push((int) 13707)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral"
0x11c: Call 0xab

0x11d: Pop(1)
0x11e: Push((int) 12538)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: Push((int) 12539)
0x124: Push((int) -1)
0x125: Push((int) 13708)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 13080)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Neutral"
0x12e: Call 0xab

0x12f: Pop(1)
0x130: Push((int) 11867)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 11868)
0x136: Push((int) 13082)
0x137: Push((int) 13081)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Return(); Pop(0)

0x13b: Push((int) 13082)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Neutral"
0x140: Call 0xab

0x141: Pop(1)
0x142: Push((int) 11869)
0x143: @@ SetMessage(Stack[-1])
0x144: Pop(1)
0x145: @@ ClearReplies()
0x146: Pop(0)
0x147: Push((int) 11870)
0x148: Push((int) -1)
0x149: Push((int) 13083)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 11650)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral"
0x152: Call 0xab

0x153: Pop(1)
0x154: Push((int) 10561)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 10562)
0x15a: Push((int) 11652)
0x15b: Push((int) 11651)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 11652)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral"
0x164: Call 0xab

0x165: Pop(1)
0x166: Push((int) 10563)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 10564)
0x16c: Push((int) -1)
0x16d: Push((int) 11653)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 10565)
0x171: Push((int) -1)
0x172: Push((int) 11654)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 11634)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral"
0x17b: Call 0xab

0x17c: Pop(1)
0x17d: Push((int) 10545)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 10546)
0x183: Push((int) 11636)
0x184: Push((int) 11635)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 10553)
0x188: Push((int) 11643)
0x189: Push((int) 11642)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 10557)
0x18d: Push((int) 11647)
0x18e: Push((int) 11646)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 11647)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call 0xab

0x198: Pop(1)
0x199: Push((int) 10558)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 10559)
0x19f: Push((int) -1)
0x1a0: Push((int) 11648)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 11643)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral"
0x1a9: Call 0xab

0x1aa: Pop(1)
0x1ab: Push((int) 10554)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 10555)
0x1b1: Push((int) -1)
0x1b2: Push((int) 11644)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Push((int) 10556)
0x1b6: Push((int) -1)
0x1b7: Push((int) 11645)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 11636)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call 0xab

0x1c1: Pop(1)
0x1c2: Push((int) 10547)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 10548)
0x1c8: Push((int) -1)
0x1c9: Push((int) 11637)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Push((int) 10549)
0x1cd: Push((int) 11639)
0x1ce: Push((int) 11638)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Push((int) 11639)
0x1d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Neutral"
0x1d7: Call 0xab

0x1d8: Pop(1)
0x1d9: Push((int) 10550)
0x1da: @@ SetMessage(Stack[-1])
0x1db: Pop(1)
0x1dc: @@ ClearReplies()
0x1dd: Pop(0)
0x1de: Push((int) 10551)
0x1df: Push((int) -1)
0x1e0: Push((int) 11640)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Push((int) 10552)
0x1e4: Push((int) -1)
0x1e5: Push((int) 11641)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ea: PushEmpty(bool)
0x1eb: Call 0x34f

0x1ec: Pop(0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ee: @ lshStopAnimation()
0x1ef: Pop(0)
0x1f0: GOTO 0x1f3

0x1f1: @ StopAnimation()
0x1f2: Pop(0)
0x1f3: Return(); Pop(0)

0x1f4: GOTO 0xbc

0x1f5: Return(); Pop(0)

0x1f6: PushEmpty()
0x1f7: PushEmpty(int, object)
0x1f8: Stack[-1] = Stack[-3]
0x1f9: Push(-2, 1); TaskCall(0)
0x1fa: Call 0x0

0x1fb: Pop(-2, 1); TaskReturn
0x1fc: Pop(2)
0x1fd: Return(); Pop(0)

0x1fe: @ Hold()
0x1ff: Pop(0)
0x200: GOTO 0x1fe

0x201: Return(); Pop(0)

0x202: PushEmpty(bool, bool)
0x203: Push("cleanup")
0x204: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x206: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x207: @ IsLoaded(Stack[-1])
0x208: Pop(0)
0x209: PushEmpty(bool)
0x20a: Stack[-1] = (bool) 0
0x20b: Pop(0); Push((bool) Stack[-2] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20d: PushEmpty(bool)
0x20e: Call 0x22e

0x20f: Pop(0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Stack[-1] = (bool) 1
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: PushEmpty(object)
0x214: Call 0x285

0x215: Pop(0)
0x216: @ RemoveActor(Stack[-1])
0x217: Pop(1)
0x218: GOTO 0x21d

0x219: Push("restore")
0x21a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x21d: Return(); Pop(2)

0x21e: PushEmpty(bool)
0x21f: Stack[-1] = (bool) 0
0x220: Push( Stack[0 + Tasks[-1].StackPointer] )
0x221: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x222: PushEmpty(bool)
0x223: Call 0x22e

0x224: Pop(0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: Stack[-1] = (bool) 1
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: PushEmpty(object)
0x229: Call 0x285

0x22a: Pop(0)
0x22b: @ RemoveActor(Stack[-1])
0x22c: Pop(1)
0x22d: Return(); Pop(0)

0x22e: Stack[-1] = (bool) 1
0x22f: Return(); Pop(0)

0x230: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x231: @@ GetPosition(Stack[-7])
0x232: Pop(0)
0x233: @@ GetEyesHeight(Stack[-8])
0x234: Pop(0)
0x235: Push(CvectorIndex(Stack[-7], 1))
0x236: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x237: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x238: @ GetPosition(Stack[-6])
0x239: Pop(0)
0x23a: @ GetEyesHeight(Stack[-8])
0x23b: Pop(0)
0x23c: Push(CvectorIndex(Stack[-6], 1))
0x23d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x23e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x23f: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x240: Push(CvectorIndex(Stack[-5], 1))
0x241: Stack[-1] = (int) 0
0x242: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x243: Pop(0); Push(Stack[-5] | Stack[-5]);
0x244: Pop(1); Push(Sqrt(Stack[-1]))
0x245: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x246: Stack[-4] = -Stack[-5]; Pop(0);
0x247: Push((int) 70)
0x248: Pop(1); Push(Stack[-6] * Stack[-1]);
0x249: PushEmpty(cvector, cvector)
0x24a: Push(CVector(0.0, 1.0, 0.0))
0x24b: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x24c: Call 0x28b

0x24d: Pop(1)
0x24e: Push((int) 25)
0x24f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x250: Pop(2); Push(Stack[-2] + Stack[-1]);
0x251: Push(CVector(0.0, 10.0, 0.0))
0x252: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x253: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x254: @ IsOverrideActive(Stack[-1])
0x255: Pop(0)
0x256: Push(Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x258: Stack[-18] = (bool) 0
0x259: Return(); Pop(16)

0x25a: @ StopWorld()
0x25b: Pop(0)
0x25c: @ CameraTransit(Stack[-2], Stack[-4])
0x25d: Pop(0)
0x25e: Push(CvectorIndex(Stack[-3], 0))
0x25f: Push(CvectorIndex(Stack[-4], 2))
0x260: @ Rotate(Stack[-2], Stack[-1])
0x261: Pop(2)
0x262: @ CameraWaitForPlayFinish()
0x263: Pop(0)
0x264: @ ResumeWorld()
0x265: Pop(0)
0x266: Stack[-18] = (bool) 1
0x267: Return(); Pop(16)

0x268: PushEmpty()
0x269: @ CameraSwitchToNormal()
0x26a: Pop(0)
0x26b: Return(); Pop(0)

0x26c: PushEmpty(float, float, float, float)
0x26d: Push("playing ")
0x26e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x26f: @ Trace(Stack[-1])
0x270: Pop(1)
0x271: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x272: Pop(0)
0x273: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x274: Pop(0)
0x275: Push("start: ")
0x276: Pop(1); Push(Stack[-1] + Stack[-3]);
0x277: @ Trace(Stack[-1])
0x278: Pop(1)
0x279: Push("end: ")
0x27a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x27b: @ Trace(Stack[-1])
0x27c: Pop(1)
0x27d: Return(); Pop(4)

0x27e: PushEmpty(bool)
0x27f: Call 0x34f

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x282: @ lshStopSpeech()
0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty(object, object)
0x286: @ self(Stack[-1])
0x287: Pop(0)
0x288: Stack[-3] = Stack[-1]
0x289: Return(); Pop(2)

0x28a: Stack[-1] = 0
0x28b: PushEmpty(float, float)
0x28c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x28d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x28e: Push((float)0.0)
0x28f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x292: Return(); Pop(2)

0x293: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x294: Return(); Pop(2)

0x295: PushEmpty(int, int)
0x296: @ GetVariable(Stack[-3], Stack[-1])
0x297: Pop(0)
0x298: Stack[-4] = Stack[-1]
0x299: Return(); Pop(2)

0x29a: PushEmpty(object, object)
0x29b: @ FindActor(Stack[-1], Stack[-4])
0x29c: Pop(0)
0x29d: Pop(0); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: Stack[-5] = (bool) 0
0x2a0: Return(); Pop(2)

0x2a1: @ Trigger(Stack[-1], Stack[-3])
0x2a2: Pop(0)
0x2a3: Stack[-5] = (bool) 1
0x2a4: Return(); Pop(2)

0x2a5: Stack[-1] = 0
0x2a6: PushEmpty(float, float)
0x2a7: @ GetGameTime(Stack[-1])
0x2a8: Pop(0)
0x2a9: Stack[-3] = Stack[-1]
0x2aa: Return(); Pop(2)

0x2ab: PushEmpty(object, object)
0x2ac: Push("d5q01")
0x2ad: Push((int) 7)
0x2ae: @ SetVariable(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: PushEmpty(object)
0x2b1: Call 0x319

0x2b2: Stack[-2] = Stack[-1]
0x2b3: Pop(1)
0x2b4: Push("d5q01BurahMeeting1")
0x2b5: Push("pt_d5q01_girl_corpse1")
0x2b6: Push((int) 1)
0x2b7: Push((int) 15351)
0x2b8: PushEmpty(float)
0x2b9: Call 0x2a6

0x2ba: Pop(0)
0x2bb: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2bc: Pop(5)
0x2bd: Push("d5q01BurahMeeting2")
0x2be: Push("pt_d5q01_girl_corpse2")
0x2bf: Push((int) 1)
0x2c0: Push((int) 15352)
0x2c1: PushEmpty(float)
0x2c2: Call 0x2a6

0x2c3: Pop(0)
0x2c4: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(5)
0x2c6: PushEmpty()
0x2c7: Call 0x33b

0x2c8: Pop(0)
0x2c9: PushEmpty(bool, string, string)
0x2ca: Stack[-2] = "quest_d5_01"
0x2cb: Stack[-1] = "burah_free"
0x2cc: Call 0x29a

0x2cd: Pop(3)
0x2ce: Return(); Pop(2)

0x2cf: Stack[-1] = 0
0x2d0: PushEmpty()
0x2d1: Push("ood5Burah1")
0x2d2: Push((int) 1)
0x2d3: @ SetVariable(Stack[-2], Stack[-1])
0x2d4: Pop(2)
0x2d5: Return(); Pop(0)

0x2d6: PushEmpty()
0x2d7: PushEmpty(bool, object)
0x2d8: Stack[-1] = Stack[-3]
0x2d9: Call 0x2ec

0x2da: Pop(1)
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-2] = (bool) 1
0x2dd: Return(); Pop(0)

0x2de: Stack[-2] = (bool) 0
0x2df: Return(); Pop(0)

0x2e0: PushEmpty()
0x2e1: PushEmpty(int, string)
0x2e2: Stack[-1] = "ood5Burah1"
0x2e3: Call 0x295

0x2e4: Pop(1)
0x2e5: Push((int) 0)
0x2e6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e8: Stack[-2] = (bool) 1
0x2e9: Return(); Pop(0)

0x2ea: Stack[-2] = (bool) 0
0x2eb: Return(); Pop(0)

0x2ec: PushEmpty()
0x2ed: Stack[-2] = (bool) 0
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty(object, object)
0x2f0: @ GetDiaryRoot(Stack[-1])
0x2f1: Pop(0)
0x2f2: Pop(0); Push((bool) Stack[-1] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f4: Push("Can't retrieve diary root")
0x2f5: @ Trace(Stack[-1])
0x2f6: Pop(1)
0x2f7: Stack[-3] = (bool) 0
0x2f8: Return(); Pop(2)

0x2f9: Stack[-3] = Stack[-1]
0x2fa: Return(); Pop(2)

0x2fb: Stack[-1] = 0
0x2fc: PushEmpty(object, object, int, object, object, int)
0x2fd: PushEmpty(object)
0x2fe: Call 0x2ef

0x2ff: Stack[-4] = Stack[-1]
0x300: Pop(1)
0x301: @@ Find(Stack[-7], Stack[-2])
0x302: Pop(0)
0x303: Pop(0); Push((bool) Stack[-2] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x305: Push("Can't find diary parent with id: ")
0x306: Pop(1); Push(Stack[-1] + Stack[-8]);
0x307: @ Trace(Stack[-1])
0x308: Pop(1)
0x309: Stack[-9] = (bool) 0
0x30a: Return(); Pop(6)

0x30b: @@ AddChild(Stack[-8])
0x30c: Pop(0)
0x30d: Push("player_diary")
0x30e: Push((int) 1)
0x30f: @ SetVariable(Stack[-2], Stack[-1])
0x310: Pop(2)
0x311: @@ GetCategory(Stack[-1])
0x312: Pop(0)
0x313: @ SetDiarySection(Stack[-1])
0x314: Pop(0)
0x315: Stack[-9] = (bool) 0
0x316: Return(); Pop(6)

0x317: Stack[-2] = 0
0x318: Stack[-3] = 0
0x319: PushEmpty(object, object, object, object)
0x31a: @ GetMainOutdoorScene(Stack[-2])
0x31b: Pop(0)
0x31c: Pop(0); Push((bool) Stack[-2] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31e: Push("Can't find main outdoor scene")
0x31f: @ Trace(Stack[-1])
0x320: Pop(1)
0x321: Stack[-1] = 0
0x322: Stack[-5] = Stack[-1]
0x323: Return(); Pop(4)

0x324: @@ GetMap(Stack[-1])
0x325: Pop(0)
0x326: Stack[-5] = Stack[-1]
0x327: Return(); Pop(4)

0x328: Stack[-1] = 0
0x329: Stack[-2] = 0
0x32a: PushEmpty(int, int)
0x32b: Push("player")
0x32c: @ GetVariable(Stack[-1], Stack[-2])
0x32d: Pop(1)
0x32e: Push((int) 0)
0x32f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x331: Stack[-3] = (int) 200001
0x332: Return(); Pop(2)

0x333: GOTO 0x339

0x334: Push((int) 1)
0x335: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x337: Stack[-3] = (int) 200002
0x338: Return(); Pop(2)

0x339: Stack[-3] = (int) 200003
0x33a: Return(); Pop(2)

0x33b: PushEmpty(object, object)
0x33c: Push("Adding diary entry")
0x33d: @ Trace(Stack[-1])
0x33e: Pop(1)
0x33f: Push((int) 146)
0x340: Push((int) 1)
0x341: Push((int) 15346)
0x342: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: PushEmpty(bool, object, int)
0x345: Stack[-2] = Stack[-4]
0x346: Stack[-1] = (int) 139
0x347: Call 0x2fc

0x348: Pop(3)
0x349: Return(); Pop(2)

0x34a: Stack[-1] = 0
0x34b: Stack[-1] = (int) 11961
0x34c: Return(); Pop(0)

0x34d: Stack[-1] = "ui/NPC_Burah.png"
0x34e: Return(); Pop(0)

0x34f: Stack[-1] = (bool) 1
0x350: Return(); Pop(0)

