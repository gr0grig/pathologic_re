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
	quest_d5_03
	completed
	cleanup
	restore
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	playsound
	givemoney
	ood5Birdmask1
	GetProperty
	SetProperty
	money 50000 removed
	d5q03BirdmaskBringMoneySelf
	FindMark
	Remove
	d5q03BirdmaskGotoMladVlad
	d5q03BirdmaskGotoViktor
	d5q03MladVladSavePrisonersSelf
	d5q03SavePrisoners
	d5q03ViktorSavePrisonersSelf
	SetReturnValue
	d5q03
	pt_map_uprava_prison
	AddMark
	pt_map_mladvlad
	pt_map_viktor
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
	ui/NPC_Black.png

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
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x21b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc9 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x20b Vars = (object)
		EVENT_26 Op = 0x21f Vars = (string)
		EVENT_6 Op = 0x23b Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x24d

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x403

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x405

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x3d2

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
0x36: Call 0x285

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
0x44: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x35c

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0xb9

0x4d: Pop(1)
0x4e: Push((int) 12551)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 12552)
0x54: Push((int) 13722)
0x55: Push((int) 13721)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0x9b

0x59: PushEmpty(string)
0x5a: Stack[-1] = "Neutral"
0x5b: Call 0xb9

0x5c: Pop(1)
0x5d: Push((int) 12562)
0x5e: @@ SetMessage(Stack[-1])
0x5f: Pop(1)
0x60: @@ ClearReplies()
0x61: Pop(0)
0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 0
0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call 0x346

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call 0x380

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: Push((int) 12563)
0x71: Push((int) 13734)
0x72: Push((int) 13732)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: PushEmpty(bool)
0x76: Stack[-1] = (bool) 0
0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 0
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call 0x350

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call 0x368

0x81: Pop(1)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 1
0x85: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call 0x374

0x89: Pop(1)
0x8a: Pop(1); Push((bool) Stack[-1] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Stack[-1] = (bool) 1
0x8d: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8e: Push((int) 12567)
0x8f: Push((int) 13737)
0x90: Push((int) 13736)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: Push((int) 12564)
0x94: Push((int) -1)
0x95: Push((int) 13733)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: GOTO 0x9b

0x99: Return(); Pop(0)

0x9a: GOTO 0x43

0x9b: PushEmpty(bool)
0x9c: Call 0x407

0x9d: Pop(0)
0x9e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9f: @ lshWaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: PushEmpty(string)
0xa5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa6: Call 0x289

0xa7: Pop(1)
0xa8: GOTO 0x9f

0xa9: GOTO 0xb8

0xaa: Push("all")
0xab: Push("idle")
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: @ WaitForAnimEnd()
0xaf: Pop(0)
0xb0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: GOTO 0xb8

0xb3: Push("all")
0xb4: Push("idle")
0xb5: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: GOTO 0xae

0xb8: Return(); Pop(0)

0xb9: PushEmpty()
0xba: PushEmpty(bool)
0xbb: Call 0x407

0xbc: Pop(0)
0xbd: Pop(1); Push((bool) Stack[-1] == 0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Return(); Pop(0)

0xc3: PushEmpty(string)
0xc4: Stack[-1] = Stack[-2]
0xc5: Call 0x289

0xc6: Pop(1)
0xc7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Push((int) 1)
0xcb: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0xcc: PushEmpty()
0xcd: Call 0x29b

0xce: Pop(0)
0xcf: Push((int) 13729)
0xd0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call 0x2e5

0xd6: Pop(2)
0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call 0x2d4

0xdb: Pop(2)
0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call 0x2c8

0xe0: Pop(2)
0xe1: Push((int) 13730)
0xe2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call 0x31d

0xe8: Pop(2)
0xe9: Push((int) 13735)
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call 0x2d4

0xf0: Pop(2)
0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call 0x2c8

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call 0x2e5

0xfa: Pop(2)
0xfb: Push((int) 13738)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call 0x2ce

0x102: Pop(2)
0x103: Push((int) 13720)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x106: PushEmpty(bool, object)
0x107: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108: Call 0x35c

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call 0xb9

0x10e: Pop(1)
0x10f: Push((int) 12551)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 12552)
0x115: Push((int) 13722)
0x116: Push((int) 13721)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral"
0x11c: Call 0xb9

0x11d: Pop(1)
0x11e: Push((int) 12562)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: PushEmpty(bool)
0x124: Stack[-1] = (bool) 0
0x125: PushEmpty(bool, object)
0x126: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127: Call 0x346

0x128: Pop(1)
0x129: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call 0x380

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Stack[-1] = (bool) 1
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: Push((int) 12563)
0x132: Push((int) 13734)
0x133: Push((int) 13732)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: PushEmpty(bool)
0x137: Stack[-1] = (bool) 0
0x138: PushEmpty(bool)
0x139: Stack[-1] = (bool) 0
0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Call 0x350

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call 0x368

0x142: Pop(1)
0x143: Pop(1); Push((bool) Stack[-1] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: Stack[-1] = (bool) 1
0x146: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call 0x374

0x14a: Pop(1)
0x14b: Pop(1); Push((bool) Stack[-1] == 0)
0x14c: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14d: Stack[-1] = (bool) 1
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: Push((int) 12567)
0x150: Push((int) 13737)
0x151: Push((int) 13736)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Push((int) 12564)
0x155: Push((int) -1)
0x156: Push((int) 13733)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 13737)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call 0xb9

0x160: Pop(1)
0x161: Push((int) 12568)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 12609)
0x167: Push((int) 13785)
0x168: Push((int) 13784)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Push((int) 13785)
0x16d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral"
0x171: Call 0xb9

0x172: Pop(1)
0x173: Push((int) 12610)
0x174: @@ SetMessage(Stack[-1])
0x175: Pop(1)
0x176: @@ ClearReplies()
0x177: Pop(0)
0x178: Push((int) 12569)
0x179: Push((int) -1)
0x17a: Push((int) 13738)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Return(); Pop(0)

0x17e: Push((int) 13734)
0x17f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x181: PushEmpty(string)
0x182: Stack[-1] = "Neutral"
0x183: Call 0xb9

0x184: Pop(1)
0x185: Push((int) 12565)
0x186: @@ SetMessage(Stack[-1])
0x187: Pop(1)
0x188: @@ ClearReplies()
0x189: Pop(0)
0x18a: Push((int) 12566)
0x18b: Push((int) -1)
0x18c: Push((int) 13735)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Return(); Pop(0)

0x190: Push((int) 13722)
0x191: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x193: PushEmpty(string)
0x194: Stack[-1] = "Neutral"
0x195: Call 0xb9

0x196: Pop(1)
0x197: Push((int) 12553)
0x198: @@ SetMessage(Stack[-1])
0x199: Pop(1)
0x19a: @@ ClearReplies()
0x19b: Pop(0)
0x19c: Push((int) 12554)
0x19d: Push((int) 13724)
0x19e: Push((int) 13723)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Push((int) 12604)
0x1a2: Push((int) 13778)
0x1a3: Push((int) 13777)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Return(); Pop(0)

0x1a7: Push((int) 13778)
0x1a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = "Neutral"
0x1ac: Call 0xb9

0x1ad: Pop(1)
0x1ae: Push((int) 12605)
0x1af: @@ SetMessage(Stack[-1])
0x1b0: Pop(1)
0x1b1: @@ ClearReplies()
0x1b2: Pop(0)
0x1b3: Push((int) 12606)
0x1b4: Push((int) 13724)
0x1b5: Push((int) 13779)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: Return(); Pop(0)

0x1b9: Push((int) 13724)
0x1ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Neutral"
0x1be: Call 0xb9

0x1bf: Pop(1)
0x1c0: Push((int) 12555)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: Push((int) 12556)
0x1c6: Push((int) 13726)
0x1c7: Push((int) 13725)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Push((int) 12607)
0x1cb: Push((int) 13726)
0x1cc: Push((int) 13781)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Return(); Pop(0)

0x1d0: Push((int) 13726)
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Neutral"
0x1d5: Call 0xb9

0x1d6: Pop(1)
0x1d7: Push((int) 12557)
0x1d8: @@ SetMessage(Stack[-1])
0x1d9: Pop(1)
0x1da: @@ ClearReplies()
0x1db: Pop(0)
0x1dc: Push((int) 12558)
0x1dd: Push((int) 13728)
0x1de: Push((int) 13727)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 13728)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral"
0x1e7: Call 0xb9

0x1e8: Pop(1)
0x1e9: Push((int) 12559)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: PushEmpty(bool, object)
0x1ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f0: Call 0x346

0x1f1: Pop(1)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f3: Push((int) 12560)
0x1f4: Push((int) -1)
0x1f5: Push((int) 13729)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: Push((int) 12561)
0x1f9: Push((int) -1)
0x1fa: Push((int) 13730)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Return(); Pop(0)

0x1fe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ff: PushEmpty(bool)
0x200: Call 0x407

0x201: Pop(0)
0x202: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x203: @ lshStopAnimation()
0x204: Pop(0)
0x205: GOTO 0x208

0x206: @ StopAnimation()
0x207: Pop(0)
0x208: Return(); Pop(0)

0x209: GOTO 0xca

0x20a: Return(); Pop(0)

0x20b: PushEmpty()
0x20c: PushEmpty(int, object)
0x20d: Stack[-1] = Stack[-3]
0x20e: Push(-2, 1); TaskCall(0)
0x20f: Call 0x0

0x210: Pop(-2, 1); TaskReturn
0x211: Pop(1)
0x212: Push((int) 1)
0x213: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: PushEmpty(bool, string, string)
0x216: Stack[-2] = "quest_d5_03"
0x217: Stack[-1] = "completed"
0x218: Call 0x2b7

0x219: Pop(3)
0x21a: Return(); Pop(0)

0x21b: @ Hold()
0x21c: Pop(0)
0x21d: GOTO 0x21b

0x21e: Return(); Pop(0)

0x21f: PushEmpty(bool, bool)
0x220: Push("cleanup")
0x221: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x223: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x224: @ IsLoaded(Stack[-1])
0x225: Pop(0)
0x226: PushEmpty(bool)
0x227: Stack[-1] = (bool) 0
0x228: Pop(0); Push((bool) Stack[-2] == 0)
0x229: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22a: PushEmpty(bool)
0x22b: Call 0x24b

0x22c: Pop(0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: Stack[-1] = (bool) 1
0x22f: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x230: PushEmpty(object)
0x231: Call 0x2a2

0x232: Pop(0)
0x233: @ RemoveActor(Stack[-1])
0x234: Pop(1)
0x235: GOTO 0x23a

0x236: Push("restore")
0x237: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x23a: Return(); Pop(2)

0x23b: PushEmpty(bool)
0x23c: Stack[-1] = (bool) 0
0x23d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: PushEmpty(bool)
0x240: Call 0x24b

0x241: Pop(0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 1
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: PushEmpty(object)
0x246: Call 0x2a2

0x247: Pop(0)
0x248: @ RemoveActor(Stack[-1])
0x249: Pop(1)
0x24a: Return(); Pop(0)

0x24b: Stack[-1] = (bool) 1
0x24c: Return(); Pop(0)

0x24d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x24e: @@ GetPosition(Stack[-7])
0x24f: Pop(0)
0x250: @@ GetEyesHeight(Stack[-8])
0x251: Pop(0)
0x252: Push(CvectorIndex(Stack[-7], 1))
0x253: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x254: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x255: @ GetPosition(Stack[-6])
0x256: Pop(0)
0x257: @ GetEyesHeight(Stack[-8])
0x258: Pop(0)
0x259: Push(CvectorIndex(Stack[-6], 1))
0x25a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x25b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x25c: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x25d: Push(CvectorIndex(Stack[-5], 1))
0x25e: Stack[-1] = (int) 0
0x25f: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x260: Pop(0); Push(Stack[-5] | Stack[-5]);
0x261: Pop(1); Push(Sqrt(Stack[-1]))
0x262: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x263: Stack[-4] = -Stack[-5]; Pop(0);
0x264: Push((int) 70)
0x265: Pop(1); Push(Stack[-6] * Stack[-1]);
0x266: PushEmpty(cvector, cvector)
0x267: Push(CVector(0.0, 1.0, 0.0))
0x268: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x269: Call 0x2a8

0x26a: Pop(1)
0x26b: Push((int) 25)
0x26c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x26d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26e: Push(CVector(0.0, 10.0, 0.0))
0x26f: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x270: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x271: @ IsOverrideActive(Stack[-1])
0x272: Pop(0)
0x273: Push(Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x275: Stack[-18] = (bool) 0
0x276: Return(); Pop(16)

0x277: @ StopWorld()
0x278: Pop(0)
0x279: @ CameraTransit(Stack[-2], Stack[-4])
0x27a: Pop(0)
0x27b: Push(CvectorIndex(Stack[-3], 0))
0x27c: Push(CvectorIndex(Stack[-4], 2))
0x27d: @ Rotate(Stack[-2], Stack[-1])
0x27e: Pop(2)
0x27f: @ CameraWaitForPlayFinish()
0x280: Pop(0)
0x281: @ ResumeWorld()
0x282: Pop(0)
0x283: Stack[-18] = (bool) 1
0x284: Return(); Pop(16)

0x285: PushEmpty()
0x286: @ CameraSwitchToNormal()
0x287: Pop(0)
0x288: Return(); Pop(0)

0x289: PushEmpty(float, float, float, float)
0x28a: Push("playing ")
0x28b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x28c: @ Trace(Stack[-1])
0x28d: Pop(1)
0x28e: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x28f: Pop(0)
0x290: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x291: Pop(0)
0x292: Push("start: ")
0x293: Pop(1); Push(Stack[-1] + Stack[-3]);
0x294: @ Trace(Stack[-1])
0x295: Pop(1)
0x296: Push("end: ")
0x297: Pop(1); Push(Stack[-1] + Stack[-2]);
0x298: @ Trace(Stack[-1])
0x299: Pop(1)
0x29a: Return(); Pop(4)

0x29b: PushEmpty(bool)
0x29c: Call 0x407

0x29d: Pop(0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: @ lshStopSpeech()
0x2a0: Pop(0)
0x2a1: Return(); Pop(0)

0x2a2: PushEmpty(object, object)
0x2a3: @ self(Stack[-1])
0x2a4: Pop(0)
0x2a5: Stack[-3] = Stack[-1]
0x2a6: Return(); Pop(2)

0x2a7: Stack[-1] = 0
0x2a8: PushEmpty(float, float)
0x2a9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2aa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ab: Push((float)0.0)
0x2ac: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ae: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2af: Return(); Pop(2)

0x2b0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2b1: Return(); Pop(2)

0x2b2: PushEmpty(int, int)
0x2b3: @ GetVariable(Stack[-3], Stack[-1])
0x2b4: Pop(0)
0x2b5: Stack[-4] = Stack[-1]
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty(object, object)
0x2b8: @ FindActor(Stack[-1], Stack[-4])
0x2b9: Pop(0)
0x2ba: Pop(0); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: Stack[-5] = (bool) 0
0x2bd: Return(); Pop(2)

0x2be: @ Trigger(Stack[-1], Stack[-3])
0x2bf: Pop(0)
0x2c0: Stack[-5] = (bool) 1
0x2c1: Return(); Pop(2)

0x2c2: Stack[-1] = 0
0x2c3: PushEmpty(float, float)
0x2c4: @ GetGameTime(Stack[-1])
0x2c5: Pop(0)
0x2c6: Stack[-3] = Stack[-1]
0x2c7: Return(); Pop(2)

0x2c8: PushEmpty()
0x2c9: Push("playsound")
0x2ca: Push("givemoney")
0x2cb: @ TriggerWorld(Stack[-2], Stack[-1])
0x2cc: Pop(2)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty()
0x2cf: Push("ood5Birdmask1")
0x2d0: Push((int) 1)
0x2d1: @ SetVariable(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: Return(); Pop(0)

0x2d4: PushEmpty(float, float)
0x2d5: Push("money")
0x2d6: @@ GetProperty(Stack[-1], Stack[-2])
0x2d7: Pop(1)
0x2d8: Push((int) 50000)
0x2d9: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x2da: Push((int) 0)
0x2db: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: Stack[-1] = (int) 0
0x2de: Push("money")
0x2df: @@ SetProperty(Stack[-1], Stack[-2])
0x2e0: Pop(1)
0x2e1: Push("money 50000 removed")
0x2e2: @ Trace(Stack[-1])
0x2e3: Pop(1)
0x2e4: Return(); Pop(2)

0x2e5: PushEmpty(object, object, object, object)
0x2e6: PushEmpty(object)
0x2e7: Call 0x3c1

0x2e8: Stack[-3] = Stack[-1]
0x2e9: Pop(1)
0x2ea: Push("d5q03BirdmaskBringMoneySelf")
0x2eb: @@ FindMark(Stack[-2], Stack[-1])
0x2ec: Pop(1)
0x2ed: Push(Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: @@ Remove()
0x2f0: Pop(0)
0x2f1: Push("d5q03BirdmaskGotoMladVlad")
0x2f2: @@ FindMark(Stack[-2], Stack[-1])
0x2f3: Pop(1)
0x2f4: Push(Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f6: @@ Remove()
0x2f7: Pop(0)
0x2f8: Push("d5q03BirdmaskGotoViktor")
0x2f9: @@ FindMark(Stack[-2], Stack[-1])
0x2fa: Pop(1)
0x2fb: Push(Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fd: @@ Remove()
0x2fe: Pop(0)
0x2ff: Push("d5q03MladVladSavePrisonersSelf")
0x300: @@ FindMark(Stack[-2], Stack[-1])
0x301: Pop(1)
0x302: Push(Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x304: @@ Remove()
0x305: Pop(0)
0x306: Push("d5q03SavePrisoners")
0x307: @@ FindMark(Stack[-2], Stack[-1])
0x308: Pop(1)
0x309: Push(Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: @@ Remove()
0x30c: Pop(0)
0x30d: Push("d5q03ViktorSavePrisonersSelf")
0x30e: @@ FindMark(Stack[-2], Stack[-1])
0x30f: Pop(1)
0x310: Push(Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x312: @@ Remove()
0x313: Pop(0)
0x314: PushEmpty()
0x315: Call 0x3f3

0x316: Pop(0)
0x317: Push((int) 1)
0x318: @@ SetReturnValue(Stack[-1])
0x319: Pop(1)
0x31a: Return(); Pop(4)

0x31b: Stack[-1] = 0
0x31c: Stack[-2] = 0
0x31d: PushEmpty(object, object)
0x31e: Push("d5q03")
0x31f: Push((int) 2)
0x320: @ SetVariable(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: PushEmpty(object)
0x323: Call 0x3c1

0x324: Stack[-2] = Stack[-1]
0x325: Pop(1)
0x326: Push("d5q03BirdmaskBringMoneySelf")
0x327: Push("pt_map_uprava_prison")
0x328: Push((int) 0)
0x329: Push((int) 15372)
0x32a: PushEmpty(float)
0x32b: Call 0x2c3

0x32c: Pop(0)
0x32d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(5)
0x32f: Push("d5q03BirdmaskGotoMladVlad")
0x330: Push("pt_map_mladvlad")
0x331: Push((int) 0)
0x332: Push((int) 15374)
0x333: PushEmpty(float)
0x334: Call 0x2c3

0x335: Pop(0)
0x336: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x337: Pop(5)
0x338: Push("d5q03BirdmaskGotoViktor")
0x339: Push("pt_map_viktor")
0x33a: Push((int) 0)
0x33b: Push((int) 15373)
0x33c: PushEmpty(float)
0x33d: Call 0x2c3

0x33e: Pop(0)
0x33f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(5)
0x341: PushEmpty()
0x342: Call 0x3e3

0x343: Pop(0)
0x344: Return(); Pop(2)

0x345: Stack[-1] = 0
0x346: PushEmpty()
0x347: PushEmpty(bool, object)
0x348: Stack[-1] = Stack[-3]
0x349: Call 0x38c

0x34a: Pop(1)
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-2] = (bool) 1
0x34d: Return(); Pop(0)

0x34e: Stack[-2] = (bool) 0
0x34f: Return(); Pop(0)

0x350: PushEmpty()
0x351: PushEmpty(int, string)
0x352: Stack[-1] = "ood5Birdmask1"
0x353: Call 0x2b2

0x354: Pop(1)
0x355: Push((int) 0)
0x356: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: Stack[-2] = (bool) 1
0x359: Return(); Pop(0)

0x35a: Stack[-2] = (bool) 0
0x35b: Return(); Pop(0)

0x35c: PushEmpty()
0x35d: PushEmpty(int, string)
0x35e: Stack[-1] = "d5q03"
0x35f: Call 0x2b2

0x360: Pop(1)
0x361: Push((int) 1)
0x362: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-2] = (bool) 1
0x365: Return(); Pop(0)

0x366: Stack[-2] = (bool) 0
0x367: Return(); Pop(0)

0x368: PushEmpty()
0x369: PushEmpty(int, string)
0x36a: Stack[-1] = "d5q03"
0x36b: Call 0x2b2

0x36c: Pop(1)
0x36d: Push((int) 1000)
0x36e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-2] = (bool) 1
0x371: Return(); Pop(0)

0x372: Stack[-2] = (bool) 0
0x373: Return(); Pop(0)

0x374: PushEmpty()
0x375: PushEmpty(int, string)
0x376: Stack[-1] = "d5q03"
0x377: Call 0x2b2

0x378: Pop(1)
0x379: Push((int) -1)
0x37a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37c: Stack[-2] = (bool) 1
0x37d: Return(); Pop(0)

0x37e: Stack[-2] = (bool) 0
0x37f: Return(); Pop(0)

0x380: PushEmpty()
0x381: PushEmpty(int, string)
0x382: Stack[-1] = "d5q03"
0x383: Call 0x2b2

0x384: Pop(1)
0x385: Push((int) 2)
0x386: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-2] = (bool) 1
0x389: Return(); Pop(0)

0x38a: Stack[-2] = (bool) 0
0x38b: Return(); Pop(0)

0x38c: PushEmpty(float, float)
0x38d: Push("money")
0x38e: @@ GetProperty(Stack[-1], Stack[-2])
0x38f: Pop(1)
0x390: Push((int) 50000)
0x391: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: Stack[-4] = (bool) 1
0x394: Return(); Pop(2)

0x395: Stack[-4] = (bool) 0
0x396: Return(); Pop(2)

0x397: PushEmpty(object, object)
0x398: @ GetDiaryRoot(Stack[-1])
0x399: Pop(0)
0x39a: Pop(0); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: Push("Can't retrieve diary root")
0x39d: @ Trace(Stack[-1])
0x39e: Pop(1)
0x39f: Stack[-3] = (bool) 0
0x3a0: Return(); Pop(2)

0x3a1: Stack[-3] = Stack[-1]
0x3a2: Return(); Pop(2)

0x3a3: Stack[-1] = 0
0x3a4: PushEmpty(object, object, int, object, object, int)
0x3a5: PushEmpty(object)
0x3a6: Call 0x397

0x3a7: Stack[-4] = Stack[-1]
0x3a8: Pop(1)
0x3a9: @@ Find(Stack[-7], Stack[-2])
0x3aa: Pop(0)
0x3ab: Pop(0); Push((bool) Stack[-2] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ad: Push("Can't find diary parent with id: ")
0x3ae: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3af: @ Trace(Stack[-1])
0x3b0: Pop(1)
0x3b1: Stack[-9] = (bool) 0
0x3b2: Return(); Pop(6)

0x3b3: @@ AddChild(Stack[-8])
0x3b4: Pop(0)
0x3b5: Push("player_diary")
0x3b6: Push((int) 1)
0x3b7: @ SetVariable(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @@ GetCategory(Stack[-1])
0x3ba: Pop(0)
0x3bb: @ SetDiarySection(Stack[-1])
0x3bc: Pop(0)
0x3bd: Stack[-9] = (bool) 0
0x3be: Return(); Pop(6)

0x3bf: Stack[-2] = 0
0x3c0: Stack[-3] = 0
0x3c1: PushEmpty(object, object, object, object)
0x3c2: @ GetMainOutdoorScene(Stack[-2])
0x3c3: Pop(0)
0x3c4: Pop(0); Push((bool) Stack[-2] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c6: Push("Can't find main outdoor scene")
0x3c7: @ Trace(Stack[-1])
0x3c8: Pop(1)
0x3c9: Stack[-1] = 0
0x3ca: Stack[-5] = Stack[-1]
0x3cb: Return(); Pop(4)

0x3cc: @@ GetMap(Stack[-1])
0x3cd: Pop(0)
0x3ce: Stack[-5] = Stack[-1]
0x3cf: Return(); Pop(4)

0x3d0: Stack[-1] = 0
0x3d1: Stack[-2] = 0
0x3d2: PushEmpty(int, int)
0x3d3: Push("player")
0x3d4: @ GetVariable(Stack[-1], Stack[-2])
0x3d5: Pop(1)
0x3d6: Push((int) 0)
0x3d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d9: Stack[-3] = (int) 200001
0x3da: Return(); Pop(2)

0x3db: GOTO 0x3e1

0x3dc: Push((int) 1)
0x3dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3df: Stack[-3] = (int) 200002
0x3e0: Return(); Pop(2)

0x3e1: Stack[-3] = (int) 200003
0x3e2: Return(); Pop(2)

0x3e3: PushEmpty(object, object)
0x3e4: Push("Adding diary entry")
0x3e5: @ Trace(Stack[-1])
0x3e6: Pop(1)
0x3e7: Push((int) 156)
0x3e8: Push((int) 2)
0x3e9: Push((int) 15367)
0x3ea: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: PushEmpty(bool, object, int)
0x3ed: Stack[-2] = Stack[-4]
0x3ee: Stack[-1] = (int) 154
0x3ef: Call 0x3a4

0x3f0: Pop(3)
0x3f1: Return(); Pop(2)

0x3f2: Stack[-1] = 0
0x3f3: PushEmpty(object, object)
0x3f4: Push("Adding diary entry")
0x3f5: @ Trace(Stack[-1])
0x3f6: Pop(1)
0x3f7: Push((int) 157)
0x3f8: Push((int) 2)
0x3f9: Push((int) 15368)
0x3fa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: PushEmpty(bool, object, int)
0x3fd: Stack[-2] = Stack[-4]
0x3fe: Stack[-1] = (int) 154
0x3ff: Call 0x3a4

0x400: Pop(3)
0x401: Return(); Pop(2)

0x402: Stack[-1] = 0
0x403: Stack[-1] = (int) 4029
0x404: Return(); Pop(0)

0x405: Stack[-1] = "ui/NPC_Black.png"
0x406: Return(); Pop(0)

0x407: Stack[-1] = (bool) 0
0x408: Return(); Pop(0)

