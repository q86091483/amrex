#ifndef _AsyncMultiFabUtil_H_
#define _AsyncMultiFabUtil_H_

#include <AMReX_MultiFab.H>
#include <AMReX_Geometry.H>
#include <AMReX_Amr.H>
#include <omp.h>

void average_down_push(Amr& amr, MultiFab& S_fine, MultiFab& S_crse, MultiFab& crse_S_fine, RegionGraph* RG_fine, RegionGraph* RG_crse, const Geometry& fine_geom, const Geometry& crse_geom, int scomp, int ncomp, const IntVect& ratio, int f, int tid);

void average_down_pull(MultiFab& S_fine, MultiFab& S_crse, RegionGraph* RG_fine, RegionGraph* RG_crse, const Geometry& fine_geom, const Geometry& crse_geom, int scomp, int ncomp, const IntVect& ratio, int f, int tid);

void average_down_push(Amr& amr, MultiFab& S_fine, MultiFab& S_crse, MultiFab& crse_S_fine, RegionGraph* RG_fine, RegionGraph* RG_crse, const Geometry& fine_geom, const Geometry& crse_geom, int scomp, int ncomp, const int ratio, int f, int tid);

void average_down_pull(MultiFab& S_fine, MultiFab& S_crse, RegionGraph* RG_fine, RegionGraph* RG_crse, const Geometry& fine_geom, const Geometry& crse_geom, int scomp, int ncomp, const int ratio, int f, int tid);        

// Average fine cell-based MultiFab onto crse cell-centered MultiFab without volume weighting.
// This routine DOES NOT assume that the crse BoxArray is a coarsened version of the fine BoxArray.

void average_down_push(Amr& amr, MultiFab& S_fine, MultiFab& S_crse, MultiFab& crse_S_fine, RegionGraph* RG_fine, RegionGraph* RG_crse, int scomp, int ncomp, const IntVect& ratio, int f, int tid);

void average_down_pull(MultiFab& S_fine, MultiFab& S_crse, RegionGraph* RG_fine, RegionGraph* RG_crse, int scomp, int ncomp, const IntVect& ratio, int f, int tid);

void average_down_push(Amr& amr, MultiFab& S_fine, MultiFab& S_crse, MultiFab& crse_S_fine, RegionGraph* RG_fine, RegionGraph* RG_crse, int scomp, int ncomp, int ratio, int f, int tid);  

void average_down_pull(MultiFab& S_fine, MultiFab& S_crse, RegionGraph* RG_fine, RegionGraph* RG_crse, int scomp, int ncomp, int ratio, int f, int tid);
#endif
