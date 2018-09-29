//===- ThresholdedRelu.h --------------------------------------------------===//
//
//                             The ONNC Project
//
// See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#ifndef ONNC_IR_COMPUTE_OPERATOR_THRESHOLDEDRELU_H
#define ONNC_IR_COMPUTE_OPERATOR_THRESHOLDEDRELU_H
#include <onnc/IR/ComputeOperator.h>
#include <onnc/IR/ComputeVisitor.h>
#include <onnc/IR/Compute/Attributes.h>
#include <onnc/Support/IOStream.h>

namespace onnc {

class ThresholdedRelu : public ComputeOperator
{
public:
  enum IOConst {
    kX = 0,
    kY = 0
  };

  static char ID;

public:
  ThresholdedRelu();

  // clang-format off
  ThresholdedRelu(const FloatAttr& pAlpha);

  // clang-format on

  // shallow copy constructor.
  ThresholdedRelu(const ThresholdedRelu &pCopy);

  virtual ~ThresholdedRelu() { }

  // clang-format off
  // Attributes getters
  const FloatAttr& getAlpha() const { return m_Alpha; }


  // Attributes setters
  void setAlpha(const FloatAttr& pAlpha) { m_Alpha = pAlpha; }

  // clang-format on

  Tensor* getInput(unsigned int pIdx) override { return static_cast<Tensor*>(m_Inputs[pIdx]); }

  const Tensor* getInput(unsigned int pIdx) const override { return static_cast<Tensor*>(m_Inputs[pIdx]); }

  Tensor* getOutput(unsigned int pIdx) override { return static_cast<Tensor*>(m_Outputs[pIdx]); }

  const Tensor* getOutput(unsigned int pIdx) const override { return static_cast<Tensor*>(m_Outputs[pIdx]); }

  // clang-format off
  // Inputs getters
  const Tensor* getX() const { return getInput(kX); }

  Tensor* getX() { return getInput(kX); }


  // Outputs getters
  const Tensor* getY() const { return getOutput(kY); }

  Tensor* getY() { return getOutput(kY); }


  // Inputs setters
  void setX(Tensor& pTensor) { m_Inputs[kX] = &pTensor; }


  // Outputs setters
  void setY(Tensor& pTensor) { m_Outputs[kY] = &pTensor; }

  // clang-format on

  void print(std::ostream& pOS) const override;

  void accept(ComputeVisitor& pVisitor) override { pVisitor.visit(*this); }

  void accept(ComputeVisitor& pVisitor) const override { pVisitor.visit(*this); }

  static bool classof(const ComputeOperator* pOp);

protected:
  // clang-format off
  FloatAttr m_Alpha;
  // clang-format on
};

} // namespace of onnc

#endif
