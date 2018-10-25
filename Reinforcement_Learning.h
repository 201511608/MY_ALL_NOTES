// Reinforcement Learning
	// Branch of Machine Learning
///////////////////////////////////
/////////////////////////////
////////// CONTENT
// 0  :: Basic: Reinforcement Learning
// 1  ::  
// 2  ::  
// 3  ::  
// 4  ::  
// 5  ::  
// 6  ::  
// 7  ::  
// 8  ::  
// 9  :: 
// 10 ::
// 11 ::
// 12 ::


// 0 
// Basic
	// Codes
	https://github.com/lazyprogrammer/machine_learning_examples
		// rl Folder
	

// Reinforcement Learning
	RL get feedback signal as reward ! As they interact with Environment.
	RL train base up on psychology !
	RL Directly learns from Environment.
	Goal of RL ?   Ex AlphaGo to win !
	
	//Agent
		Senses the Environment
	//Environment
		Agent lives in (simulated or real world)
	//State
		Different configurations of the environment that the agent can sense		
	//Rewards
		Immidiate rewards and long term rewards.
		Auto FigureOut of reward.
		// EX:
			In solve we get reward 1 
			in not solve we get reward 0
		// Random movement to solve and get reward ! // Later its own nural nets to get reward better
	// Next: action
		Action are what the agent does in its environment!
		Ex : Up Down Left Right 
	
	// SAR triples
	(state, action, reward)
	
	// Timing
	S(t) Start of State at t
	A(t) take action   at t
	R(t+1) reward we get at t+1 for S(t) and A(t)    // Reward for future step !!!
	[S(t), A(t) -> R(t+1)-> S(t+1)]
	[S(t), A(t), S(t+1)]
	(s,a,s')
	
	
	

	
// 1
// Chapter 2
	//Bayesian: A/B Test
		
		// Mean Equation for random
		  XN= (1-1/N)XN-1
		  
	// TicktackToe
		Empty,X,O   -> 3^9 ways !  -> Board Permutations
		9! ways if both players plays -> Game Tree
		
		Reward 1 Right step
		Reward -1 for wrong step
		
		Value function :: Like exam study || hang out with friends
		Total State Sequence is Important ||-> even important or not can be reinfoced
		Back history Value for decision Making
		
		Mario jumping every where: can be minimized by giving rewards at specific place jump only !
		