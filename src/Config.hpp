//
// Created by BrilliantLiu on 2018/5/14.
//

#ifndef MPC_CONFIG_HPP
#define MPC_CONFIG_HPP

#define Lf 2.67
#define DEG_25 0.436332

#define DEG_25_Lf DEG_25 * Lf

#define N 10
#define dt 0.1
#define ref_v 100

// cost weight
#define cte_weight 2000
#define epsi_weight 2000
#define v_weight 1
#define delta_weight 5
#define a_weight 5
#define delta_dot_weight 200
#define a_dot_weight 10


#endif //MPC_CONFIG_HPP
